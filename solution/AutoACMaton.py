import requests
import json

login_url = "http://ecw.sysu.edu.cn:8000/service/login"
index_url = "http://ecw.sysu.edu.cn:8000/"
getprob_url = "http://ecw.sysu.edu.cn:8000/service/table"
submit_url = "http://ecw.sysu.edu.cn:8000/service/table"
giveup_url = "http://ecw.sysu.edu.cn:8000/service/table"

headers = {"User-Agent": "Mozilla/5.0 (Windows NT 10.0; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/69.0.3497.100 Safari/537.36",
          }
login_form = {"id": "",
              "pwd": "",
              "app_owner_id": "database",
              }

getprob_form = {"command": '["database/获取题目.script",null,null,"database","7J3FRHET24YKVQMC"]',
                }

submit_form = {"command": '["database/保存测试.script",null,null,"database","MQ7BUJ9X36370HZL"]',
              "table_data": "",
              }

giveup_form = {"command": '["database/获取下一个题目.script",null,null,"database","SAUWVUG827Z1K4YK"]',
               "table_data": "[[{}]]",
               }

session = requests.session()

def login():
    global login_form
    with open("config.json", "r", encoding = "utf-8") as file:
        jsn = json.load(file)
        login_form["id"] = jsn["account"]
        login_form["pwd"] = jsn["password"]
    r = session.post(login_url, data = login_form, headers = headers)
    s = str(r.text)
    if s[2] == 'r':
        return True
    return False

def getprob():
    r = session.post(getprob_url, data = getprob_form, headers = headers)
    s = str(r.text)
    s = s[36: -3]
    jsn = json.loads(s)
    return jsn

def submit(dic, s):
    form = submit_form
    part0 = '#include \"' + dic["db_id"] + '\"\n#include <stdio.h>\n\nint main() {\n\tputs(\"'
    part1 = '\");\n\treturn 0;\n}'
    dic["script_source"] = part0 + s + part1
    s = str(dic)
    s = s.replace('"', '\\\"')
    s = s.replace("'", '"')
    form["table_data"] = "[[" + s + "]]"
    r = session.post(submit_url, data = form, headers = headers)
    s = str(r.text)
    if s[100:106] == "\\u884c":
        return -1
    if s[-9:-5] == "pass":
        return 1
    return 0

def getColumn(dic):
    s = "a"
    form = submit_form
    part0 = '#include \"' + dic["db_id"] + '\"\n#include <stdio.h>\n\nint main() {\n\tputs(\"'
    part1 = '\");\n\treturn 0;\n}'
    dic["script_source"] = part0 + s + part1
    s = str(dic)
    s = s.replace('"', '\\\"')
    s = s.replace("'", '"')
    form["table_data"] = "[[" + s + "]]"
    r = session.post(submit_url, data = form, headers = headers)
    s = str(r.text)
    if s[100:106] != "\\u5217":
        return 1

    s = "a\\ta"
    form = submit_form
    part0 = '#include \"' + dic["db_id"] + '\"\n#include <stdio.h>\n\nint main() {\n\tputs(\"'
    part1 = '\");\n\treturn 0;\n}'
    dic["script_source"] = part0 + s + part1
    s = str(dic)
    s = s.replace('"', '\\\"')
    s = s.replace("'", '"')
    form["table_data"] = "[[" + s + "]]"
    r = session.post(submit_url, data = form, headers = headers)
    s = str(r.text)
    if s[100:106] != "\\u5217":
        return 2

    return 3
    

def check(dic):
    s = "check!!!!!!!!"
    form = submit_form
    part0 = '#include \"product_catalog\"\n#include <stdio.h>\n\nint main() {\n\tputs(\"'
    part1 = '\");\n\treturn 0;\n}'
    dic["script_source"] = part0 + s + part1
    s = str(dic)
    s = s.replace('"', '\\\"')
    s = s.replace("'", '"')
    form["table_data"] = "[[" + s + "]]"
    r = session.post(submit_url, data = form, headers = headers)
    s = str(r.text)
    return s[88:94] != "\\u7b54"

def giveup():
    r = session.post(giveup_url, data = giveup_form, headers = headers)

