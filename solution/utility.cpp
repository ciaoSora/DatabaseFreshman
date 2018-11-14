#ifndef UTILITY_CPP_
#define UTILITY_CPP_

#include <cstring>
#include <fstream>
#include <unordered_map>
#include <string>

using std::string;
typedef void * pvoid;

int len;
string cur_db;
char db[65600000];

struct Dict {
	std::unordered_map<string, pvoid> mp;
	
};

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
	}
}

void deal(const char * s, char * res) {
	memcpy(res, "deal done", 9);
	res[9] = '\0';
}

#endif

