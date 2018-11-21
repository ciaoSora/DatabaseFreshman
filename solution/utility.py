class Table:
    name = ""
    rows = ()
    keys = ()

    def __init__(self, name):
        self.name = name
        self.rows = []
        self.keys = []

    def __str__(self):
        rt = self.name + "\n"
        for key in self.keys:
            #print(key + " ", end = '')
            rt += key[0] + "\t"
        rt += "\n"
        for row in self.rows:
            for key in self.keys:
                #print(str(row[key]) + " ", end = '')
                rt += str(row[key]) + "\t"
            rt += "\n"
        return rt

    def __len__(self):
        return len(self.rows)

def cppValidNameChar(ch):
    ch = ord(ch)
    return ch >= ord('a') and ch <= ord('z') or ch >= ord('A') and ch <= ord('Z') or ch == ord('_')

class DB:
    name = ""
    tables = {}

    def __init__(self, name):
        self.name = name
        file = open("../db/" + name + ".c", "r", encoding = "UTF-8")
        lines = file.readlines()
        lines = tuple(lines)
        
        #STEP 0: Initialize tables in database
        length = len(lines)
        cnt = 2
        t_tables = {}
        while True:
            if lines[cnt] == "*/\n":
                break
            t_table = Table(lines[cnt][1:-1])
            t_tables[t_table.name] = t_table
            cnt += 1
        self.tables = t_tables

        #STEP 1: Initialize keys of each table
        length = cnt - 2
        cnt += 1
        table_cnt = 0
        while table_cnt < length:  
            while lines[cnt][:9] != "struct T_":
                cnt += 1
            t_table = self.tables[lines[cnt][9:-3]]
            cnt += 1
            t_keys = []
            while lines[cnt] != "};\n":
                is_foreign_key = False
                tem = lines[cnt].split()
                if len(tem) > 2:
                    is_foreign_key = True
                tem = tem[1]
                t_i = 0
                while cppValidNameChar(tem[t_i]):
                    t_i += 1
                tem = tem[:t_i]
                t_keys.append((tem, is_foreign_key))
                
                cnt += 1
            t_table.keys = tuple(t_keys)
            table_cnt += 1

        #STEP 2: Initialize rows with key-value pairs of each table
        while lines[cnt] != "#endif":
            if lines[cnt][:9] != "struct T_":
                cnt += 1
                continue
            t_table = self.tables[lines[cnt][9:-1]]
            t_rows = []
            cnt += 2

            length = len(t_table.keys)
            while lines[cnt] != "};\n":
                loc = locals()
                tem_ins = "tem_list = [" + lines[cnt][3:-3] + "]"
                exec(tem_ins)
                tem_list = loc["tem_list"]
                dic = {}
                for i in range(length):
                    dic[t_table.keys[i]] = tem_list[i]
                t_rows.append(dic)
                cnt += 1
            t_table.rows = tuple(t_rows)
        
        file.close()

    def __getattr__(self, table_name):
        if table_name in self.tables:
            return self.tables[table_name]
        return "no such table"

    def __str__(self):
        length = len(self.tables)
        rt = ""
        for key in self.tables:
            rt = rt + str(self.tables[key]) + "\n"
        return self.name + "\n\n" + rt
