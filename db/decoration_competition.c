/*
Database "decoration_competition" contains tables:
	college
	member
	round
*/

#ifndef DECORATION_COMPETITION
#define DECORATION_COMPETITION

struct T_college {
	double college_id;
	char name[20];
	char leader_name[16];
	char college_location[19];
};

struct T_member {
	double member_id;
	char name[15];
	char country[14];
	double college_id;	// --> college.college_id
};

struct T_round {
	double round_id;
	double member_id;	// --> member.member_id
	char decoration_theme[17];
	double rank_in_round;
};

struct T_college
college[] = {
	{ 1, "Saskatchewan School", "Ousame Tounkara",             "Ottawa" },
	{ 2,         "B.C. School",   "Ryan Thelwell",          "Minnesota" },
	{ 3,      "Calgary School",    "Andre Arlain", "St. Francis Xavier" },
	{ 4,     "Edmonton School",   "Samir Chahine",             "McGill" },
	{ 5,      "Toronto School",  "Roger Dunbrack",    "Western Ontario" }
};

struct T_member
member[] = {
	{  1,  "Jack Nicklaus", "United States", 1 },
	{  2,   "Billy Casper", "United States", 1 },
	{  3,  "Arnold Palmer",        "Canada", 4 },
	{  4,     "Tom Watson", "United States", 4 },
	{  5, "Homero Blancas", "United States", 2 },
	{  6, "Pat Fitzsimons",        "Canada", 5 },
	{  7,  "Bobby Nichols",        "Canada", 5 },
	{  8,    "J. C. Snead",        "Canada", 4 },
	{  9,    "Lee Trevino", "United States", 3 },
	{ 10,   "Tom Weiskopf", "United States", 3 }
};

struct T_round
round[] = {
	{ 1,  1, "Walk on the Moon", 1 },
	{ 1,  2,       "Soft Dream", 2 },
	{ 1, 10,      "Dark Nights", 4 },
	{ 2,  4,          "Sweetie", 3 },
	{ 2,  6,           "Summer", 2 },
	{ 2,  9,        "Happiness", 1 }
};

#endif