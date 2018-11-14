/*
Database "poker_player" contains tables:
	people
	poker_player
*/

#ifndef POKER_PLAYER
#define POKER_PLAYER

struct T_people {
	double people_id;
	char nationality[9];
	char name[19];
	char birth_date[17];
	double height;
};

struct T_poker_player {
	double poker_player_id;
	double people_id;	// --> people.people_id
	double final_table_made;
	double best_finish;
	double money_rank;
	double earnings;
};

struct T_people
people[] = {
	{ 1,   "Russia",  "Aleksey Ostapenko",     "May 26, 1986", 207.0 },
	{ 2, "Bulgaria",    "Teodor Salparov",  "August 16, 1982", 182.0 },
	{ 3,   "Russia",       "Roman Bragin",   "April 17, 1987", 187.0 },
	{ 4,   "Russia",     "Sergey Grankin", "January 22, 1987", 193.0 },
	{ 5,   "Russia", "Yevgeni Sivozhelez",   "August 8, 1986", 196.0 },
	{ 6,   "Russia",       "Maksim Botin",    "July 14, 1983", 194.0 },
	{ 7,   "Russia",   "Semen Poltavskiy", "February 8, 1981", 205.0 }
};

struct T_poker_player
poker_player[] = {
	{ 1, 1, 42.0, 1.0,  68.0, 476090.0 },
	{ 2, 2, 10.0, 2.0, 141.0, 189233.0 },
	{ 3, 5, 21.0, 1.0, 166.0, 104871.0 },
	{ 4, 6, 19.0, 2.0,  58.0, 596462.0 },
	{ 5, 7, 26.0, 3.0, 154.0, 142800.0 }
};

#endif