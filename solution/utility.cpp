#ifndef UTILITY_CPP_
#define UTILITY_CPP_

#include <cstring>
#include <fstream>
#include <unordered_map>
#include <string>
#include <vector>

using std::string;
typedef void * pvoid;
const int INT = 0, DOUBLE = 1, FLOAT = 2, CHAR = 3, STRING = 4;

int len;
string cur_db;
char db[65600000];
std::unordered_map<string, int> type2int;

struct Data {
	string type;
	bool is_foreign;
	pvoid dat;
	
	Data(string tp = "int", bool isf = false, pvoid da = NULL) {
		type = tp;
		is_foreign = isf;
		dat = da;
	}
	
	~Data() {
		switch (type2int[type]) {
			case INT:
				delete (int*)dat;
				break;
			case DOUBLE:
				delete (double*)dat;
				break;
			case FLOAT:
				delete (float*)dat;
				break;
			case CHAR:
				delete (char*)dat;
				break;
			case STRING:
				delete (string*)dat;
				break;
		}
	}
	
	void print(std::ostream & out) {
		switch (type2int[type]) {
			case INT:
				out << *(int*)dat;
				break;
			case DOUBLE:
				out << *(double*)dat;
				break;
			case FLOAT:
				out << *(float*)dat;
				break;
			case CHAR:
				out << *(char*)dat;
				break;
			case STRING:
				out << *(string*)dat;
				break;
		}
	}
};

typedef std::unordered_map<string, Data> Row;

struct Table {
	string name;
	std::vector<Row> rows;
	
	Table(const string & nm) {
		name = nm;
	}
	
	void addRow(const Row & rw) {
		rows.push_back(rw);
	}
};

std::vector<Table> tables;

void utility_init() {
	type2int["int"] = INT;
	type2int["double"] = DOUBLE;
	type2int["float"] = FLOAT;
	type2int["char"] = CHAR;
	type2int["string"] = STRING;
}

void update_db(char * s) {
	std::string tem_db(s);
	if (cur_db != tem_db) {
		cur_db = tem_db;
		std::ifstream fin("../db/" + cur_db + ".c");
		len = 0;
		while (!fin.eof()) {
			db[len++] = fin.get();
		}
		if (db[len - 1] != '\n') {
			db[len++] = '\n';
		}
		db[len] = '\0';
		
		tables.clear();
	}
}

void deal(const char * s, char * res) {
	memcpy(res, "deal done", 9);
	res[9] = '\0';
}

#endif

