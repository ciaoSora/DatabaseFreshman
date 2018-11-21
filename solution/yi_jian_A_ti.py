from AutoACMaton import *

with open("ans.txt", "r") as file:
    answer = file.readline()

if not login():
    print("Wrong password or account.")
    print("Please shut the process and correct it in config.json")
    input()
dic = getprob()

res = submit(dic, answer)
if res != 1:
    input("Please run get_ans.py first. Now please shut the process.")

to_plus = input("Please input number of problems you want to solve: ")
while not to_plus.isdecimal():
    to_plus = input("Invalid. Please input an integer: ")
to_plus = int(to_plus)

if to_plus == 1:
    print("Done. You have solved 1 problem.")

else:
    for i in range(1, to_plus):
        submit(dic, answer)
    print("Done. You have solved " + str(to_plus) + " problems.")

input()
