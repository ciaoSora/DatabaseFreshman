#include <iostream>
#include <fstream>
#include <string>
#include "utility.cpp"

char db_id[1005];
char question[1005];
char sol[1005];
char to_print[1000005];

using std::cin;
using std::cout;
using std::endl;

inline void getline_from_cmd(char * s) {
	int idx = 0;
	char ch;
	do {
		ch = cin.get();
	} while (ch == '\n');
	s[idx++] = ch;
	do {
		ch = cin.get();
		if (ch == '\n') {
			break;
		}
		s[idx++] = ch;
	} while (1);
	s[idx] = 0;
}

int main() {
	std::ifstream ans_in("ans.txt");
	std::ifstream fin("../problems.json");
	std::ofstream fout;
	utility_init();
	
	/* STEP 0: Get current problem ID */
	fout.open("ans.txt", std::ios::app);
	int cur_pid = -1;
	char ch;
	do {
		ch = ans_in.get();
		cur_pid += (ch == '$');
	} while (!ans_in.eof());
	
	
	/* STEP 1: Locate problem in problems.json */
	int tem = -1;
	do {
		ch = fin.get();
		if (ch != '{') {
			continue;
		}
		++tem;
		if (tem == cur_pid) {
			break;
		}
	} while (!fin.eof());
	
	/* STEP 2: Solve problems */
	int idx;
	std::string satis;
	while (1) {
		do {
			ch = fin.get();
			if (ch == ':') {
				break;
			}
		} while (!fin.eof());
		idx = 0;
		fin.get();
		fin.get();
		do {
			ch = fin.get();
			if (ch == '"') {
				break;
			}
			db_id[idx++] = ch;
		} while (!fin.eof());
		db_id[idx] = '\0';
		update_db(db_id);
		
		do {
			ch = fin.get();
			if (ch == ':') {
				break;
			}
		} while (!fin.eof());
		idx = 0;
		fin.get();
		fin.get();
		do {
			ch = fin.get();
			if (ch == '"') {
				break;
			}
			question[idx++] = ch;
		} while (!fin.eof());
		question[idx] = '\0';
		cout << '#' << cur_pid << endl;
		cout << db_id << endl;
		cout << question << endl;
		bool flag = false;
		do {
			getline_from_cmd(sol);
			if (strcmp(sol, ".exit") == 0) {
				return 0;
			}
			deal(sol, to_print);
			cout << to_print << endl;
			cout << "satisfied? ";
			cin >> satis;
			if (satis == "y" || satis == "Y") {
				flag = true;
			}
		} while (!flag);
		fout << to_print << endl;
		fout << "$" << cur_pid + 1 << ":";
		cout << endl;
		
		do {
			ch = fin.get();
			if (ch == '{') {
				break;
			}
		} while (!fin.eof());
		++cur_pid;
	}
	
	return 0;
}

