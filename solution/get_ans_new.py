from AutoACMaton import *
from utility import *
import sqlite3
import time
import random

if not login():
    print("Wrong password or account.")
    print("Please shut the process and correct it in config.json")
    input()

giveup_waiting_time = 30
ac_waiting_time = 180
wa_waiting_time = 30
dic = {}
conn = 0
cursor = 0

def submit_timeout(dic, s):
    global last_time
    res = submit(dic, s)
    last_time += 1
    if last_time >= tolerence:
        last_time = 0
        print("---------------Reach limit------------------")
        return -1
    if res == 1:
        q = dic["question"]
        q = q.replace('"', "'")
        sen = "insert into answer (question, solution) values (\"" + q + "\", \"" + s + "\")"
        cursor.execute(sen)
        conn.commit()
        print(q + "   " + s)
    return res

def getAnswer(dic):
    s = dic["question"]
    s = s.replace('"', "'")
    s = '"' + s + '"'
    cursor.execute("select solution from answer where question = " + s)
    values = cursor.fetchall()
    if len(values) == 0:
        return "no solution"
    else:
        return values[0][0]

def randReal(mn, mx):
    return mn + random.random() * (mx - mn)

def solve():
    global dic
    global last_time

    dic = getprob()
    ans = getAnswer(dic)
    if ans == "no solution":
        print("Ready to giveup")
        time.sleep(giveup_waiting_time * randReal(0.8, 1.2))
        return False

    print("Answer found: " + ans)
    numWA = random.randint(0, 2)
    res = 0
    for i in range(numWA):
        time.sleep(wa_waiting_time * randReal(0.8, 1.2))
        submit(dic, str(i + 1))

    t = max(0.0, (ac_waiting_time - wa_waiting_time * numWA) * randReal(0.8, 1.2))
    time.sleep(t)
    res = submit(dic, ans)
    
    return res == 1

num_giveup = 0
num_success = 0
num_tot = 0
conn = sqlite3.connect("ans.db")
cursor = conn.cursor()
cursor.execute("select * from sqlite_master where type = 'table' and name = 'answer'")
values = cursor.fetchall()
if len(values) == 0:
    print("ans.db corrupted. Please shut the process")
    input()

print("AC-Automaton running...")

cursor.execute("select * from answer")
values = cursor.fetchall()
print(str(len(values)) + " items found.")

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

print("Over")
input()
