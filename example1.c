/*
    {
        "db_id": "concert_singer",
        "question": "What are  the different countries with singers above age 20?",
        "result": "Netherlands\nUnited States\nFrance"
    },
*/
#include "db/concert_singer.c"
#include <string.h>
#include <stdio.h>

#define length(table) (sizeof(table) / sizeof(struct T_##table))

int find(char * countries[], int countries_count, char * country) {
	for (int i = 0; i < countries_count; ++ i) {
		if (strcmp(countries[i], country) == 0) return i;
	}
	return -1;
}

int main() {
	char * countries[100];
	int countries_count = 0;
	for (int i = 0; i < length(singer); ++ i) {
		if (singer[i].age > 20) {
			int index = find(countries, countries_count, singer[i].country);
			if (index == -1) {
				printf("%s\n", singer[i].country);
				countries[countries_count] = singer[i].country;
				++ countries_count;
			}
		}
	}
	// printf("Answer:\n%s\n", "Netherlands\nUnited States\nFrance");
}