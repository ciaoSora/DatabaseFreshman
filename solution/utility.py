class Table:
    name = ""
    rows = []

    def __init__(self, name):
        self.name = name
        rows = []

class DB:
    name = ""
    tables = []

    def __init__(self, name):
        self.name = name
        file = open("../db/" + name + ".c", "r", encoding = "UTF-8")
        lines = file.readlines()
        lines = tuple(lines)
        file.close()
        
        length = len(lines)
        for i in range(2, length):
            if lines[i] == "*/\n":
                break
            self.tables.append(lines[i][1:-1])

        print(self.tables)
