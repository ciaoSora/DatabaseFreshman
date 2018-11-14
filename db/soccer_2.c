/*
Database "soccer_2" contains tables:
	college
	player
	tryout
*/

#ifndef SOCCER_2
#define SOCCER_2

struct T_college {
	char college_name[4];
	char state[3];
	double enrollment;
};

struct T_player {
	double player_id;
	char player_name[8];
	char yes_card[4];
	double training_hours;
};

struct T_tryout {
	double player_id;	// --> player.player_id
	char college_name[4];	// --> college.college_name
	char player_position[8];
	char decision[4];
};

struct T_college
college[] = {
	{ "LSU", "LA", 18000 },
	{ "ASU", "AZ", 12000 },
	{  "OU", "OK", 22000 },
	{ "FSU", "FL", 19000 }
};

struct T_player
player[] = {
	{ 10001,  "Andrew",  "no", 1200 },
	{ 20002,   "Blake",  "no", 1600 },
	{ 30003, "Charles",  "no",  300 },
	{ 40004,   "David", "yes", 1600 },
	{ 40002,   "Drago", "yes", 1600 },
	{ 50005,   "Eddie", "yes",  600 }
};

struct T_tryout
tryout[] = {
	{ 10001, "LSU",  "goalie",  "no" },
	{ 10001, "ASU",  "goalie", "yes" },
	{ 20002, "FSU", "striker", "yes" },
	{ 30003,  "OU",     "mid",  "no" },
	{ 40004, "ASU",  "goalie",  "no" },
	{ 50005, "LSU",     "mid",  "no" }
};

#endif