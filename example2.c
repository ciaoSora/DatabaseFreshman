/*
    {
        "db_id": "machine_repair",
        "question": "List the names of technicians who have not been assigned to repair machines.",
        "result": "Mark Sewell\nLou Boudreau\nJoe Cochrane\nEddie Collins\nMickey Cochrane"
    },
*/
#include "db/machine_repair.c"
#include <string.h>
#include <stdio.h>

#define len(table) (sizeof(table) / sizeof(struct T_##table))

#define bool int
#define false 0
#define true 1
#define and &&
#define or ||
#define not !

bool add_to_set(char * elem) {
	static char * set[1000];
	static int set_size = 0;
	for (int i = 0; i < set_size; ++ i) {
		if (strcmp(set[i], elem) == 0) return false;
	}
	set[set_size] = elem;
	++ set_size;
	return true;
}

int main() {
	// printf("%s\n\n", "Mark Sewell\nLou Boudreau\nJoe Cochrane\nEddie Collins\nMickey Cochrane");
	for (int i = 0; i < len(repair_assignment); ++ i) {
		for (int j = 0; j < len(technician); ++ j) {
			if (repair_assignment[i].technician_id == technician[j].technician_id) {
				add_to_set(technician[j].name);
			}
		}
	}
	for (int j = 0; j < len(technician); ++ j) {
		if (add_to_set(technician[j].name)) {
			printf("%s\n", technician[j].name);
		}
	}
}