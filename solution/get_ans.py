
# STEP 0: Get current problem ID
ans_in = open("ans.txt", "r")
cur_pid = -1
ch = ans_in.read(1)
while ch != '':
    if ch == '$':
        cur_pid += 1
    ch = ans_in.read(1)

# STEP 1: Locate problem in problem.json
tem = -1
fin = open("../problems.json", "r")
ch = fin.read(1)
while ch != '':
    if ch == '}':
        tem += 1
        if tem == cur_pid - 1:
            break
    ch = fin.read(1)

# Functions for interact
fout = open("ans.txt", "a")

def sav():
    global fout
    fout.close()
    fout = open("ans.txt", "a")

def print_id():
    fout.write("$" + str(cur_pid + 1) + ":")
    sav()

def pr(to_write):
    fout.write(to_write + '\n')
    print_id()

def nx():
    ch = fin.read(1)
    while ch != '':
        if ch == '{':
            global cur_pid
            cur_pid += 1
            break
        ch = fin.read(1)
    
    ch = fin.read(1)
    while ch != '':
        if ch == ':':
            break
        ch = fin.read(1)
    db_id = ""
    fin.read(2)
    ch = fin.read(1)
    while ch != '':
        if ch == '"':
            break
        db_id = db_id + ch
        ch = fin.read(1)

    ch = fin.read(1)
    while ch != '':
        if ch == ':':
            break
        ch = fin.read(1)
    question = ""
    fin.read(2)
    ch = fin.read(1)
    while ch != '':
        if ch == '"':
            break
        question = question + ch
        ch = fin.read(1);
    
    print("#" + str(cur_pid))
    print(db_id)
    print(question)















