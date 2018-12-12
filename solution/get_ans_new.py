from AutoACMaton import *
from utility import *
import time

if not login():
    print("Wrong password or account.")
    print("Please shut the process and correct it in config.json")
    input()
dic = {}
last_time = time.time()
tolerence = 120

def submit_timeout(dic, s):
    global last_time
    
    res = submit(dic, s)
    cur_time = time.time()
    if cur_time - last_time > tolerence:
        last_time = cur_time
        return -1
    return res

def tryTo():
    try:
        d = DB(dic["db_id"])
    except Exception as e:
        return False

    numCol = getColumn(dic)
    if numCol > 2:
        return False

    if numCol == 1:
        # STEP 0: Try numbers
        mx_row = 0
        
        for key in d.tables:
            mx_row = max(mx_row, len(d.tables[key]))

        res = submit_timeout(dic, "0")
        if res == -1:
            return False

        if res == 1:
            return True

        for i in range(1, mx_row + 1):
            res = submit_timeout(dic, str(i))
            if res == 1:
                return True
            if res == -1:
                return False
            
        # STEP 1: Try one attribute
        for table_name in d.tables:
            tb = d.tables[table_name]
            for key in tb.keys:
                if key[1]:    # is foreign key
                    continue
                for row in tb.rows:
                    tem = row[key]
                    if type(tem) == int and tem <= mx_row:
                        continue
                    res = submit_timeout(dic, str(tem))
                    if res == 1:
                        return True
                    if res == -1:
                        return False

    elif numCol == 2:
        # STEP 2: Try two attributes
        for table_name in d.tables:
            tb = d.tables[table_name]
            for key1 in tb.keys:
                if key1[1]:
                    continue
                for key2 in tb.keys:
                    if key2[1] or key1 == key2:
                        continue
                    for row in tb.rows:
                        s = str(row[key1]) + "\\t" + str(row[key2])
                        res = submit_timeout(dic, s)
                        if res == 1:
                            return True
                        if res == -1:
                            return False
            
    return False

def solve():
    global dic
    global last_time

    dic = getprob()
    last_time = time.time()
    submit(dic, "mdzz\thaha\thehe")
    return tryTo()

num_giveup = 0
num_success = 0
num_tot = 0
print("AC-Automaton running...")
while True:
    num_tot += 1
    if solve():
        num_success += 1
        print("Success! " + str(num_success) + " / " + str(num_tot))
        num_giveup = 0
        giveup()
    else:
        num_giveup += 1
        giveup()
        print("Give up! " + str(num_success) + " / " + str(num_tot))

    if num_tot > 100 and num_success / num_tot < 0.1:
        break

input()
