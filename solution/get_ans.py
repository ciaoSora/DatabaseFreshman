from AutoACMaton import *
from utility import *

if not login():
    print("Wrong password or account.")
    print("Please shut the process and correct it in config.json")
    input()
dic = {}

def writeToFile(s):
    with open("ans.txt", "w") as file:
        file.write(s)

def tryTo():
    try:
        d = DB(dic["db_id"])
    except Exception as e:
        return False

    # STEP 0: Try numbers
    mx_row = 0
    
    for key in d.tables:
        mx_row = max(mx_row, len(d.tables[key]))

    res = submit(dic, "0")
    if res == -1:
        return False

    if res == 1:
        writeToFile("0")
        return True

    for i in range(1, mx_row + 1):
        res = submit(dic, str(i))
        if res == 1:
            writeToFile(str(i))
            return True
    

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
                res = submit(dic, str(tem))
                if res == 1:
                    writeToFile(str(tem))
                    return True

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
                    s = str(row[key1]) + "\t" + str(row[key2])
                    res = submit(dic, s)
                    if res == 1:
                        writeToFile(s)
                        return True
        
    return False

def solve():
    global dic
    dic = getprob()
    submit(dic, "mdzz\thaha\thehe")
    return tryTo()

num_giveup = 0
print("Wait while solving problems. This may take a few minutes...")
print("Warning: a few problems will be given up!!")
print("When giving up a problem, you will get a notification.")
print("You can shut the process any time you like.")
print("Now you can just wait...\n")
while True:
    if solve():
        print("Success! Please shut the process and run Yi_Jian_A_Ti.py")
        break
    
    num_giveup += 1
    giveup()
    print("giveup * " + str(num_giveup))


input()
