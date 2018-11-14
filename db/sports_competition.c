/*
Database "sports_competition" contains tables:
	club
	club_rank
	competition
	competition_result
	player
*/

#ifndef SPORTS_COMPETITION
#define SPORTS_COMPETITION

struct T_club {
	double club_id;
	char name[9];
	char region[8];
	char start_year[5];
};

struct T_club_rank {
	double rank;
	double club_id;	// --> club.club_id
	double gold;
	double silver;
	double bronze;
	double total;
};

struct T_competition {
	double competition_id;
	double year;
	char competition_type[11];
	char country[10];
};

struct T_competition_result {
	double competition_id;	// --> competition.competition_id
	double club_id_1;	// --> club.club_id
	double club_id_2;	// --> club.club_id
	char score[6];
};

struct T_player {
	double player_id;
	char name[20];
	char position[14];
	double club_id;	// --> club.club_id
	double apps;
	double tries;
	char goals[7];
	double points;
};

struct T_club
club[] = {
	{ 1,      "AIB",     "USA", "2009" },
	{ 2, "BK Slide",      "UK", "1998" },
	{ 3,      "IFG",   "China", "2005" },
	{ 4,      "ASC",   "Japan", "2001" },
	{ 5,     "HGS2", "England", "2000" },
	{ 6,    "HSBIF",  "Brazil", "2011" }
};

struct T_club_rank
club_rank[] = {
	{ 1.0, 2, 11.0, 11.0, 9.0, 31.0 },
	{ 2.0, 3,  8.0,  7.0, 6.0, 21.0 },
	{ 3.0, 1,  7.0,  4.0, 2.0, 13.0 },
	{ 4.0, 4,  4.0,  2.0, 6.0, 12.0 },
	{ 5.0, 5,  3.0,  3.0, 0.0,  6.0 },
	{ 6.0, 6,  2.0,  1.0, 0.0,  3.0 }
};

struct T_competition
competition[] = {
	{  1, 2006.0,   "Friendly",     "Italy" },
	{  2, 2006.0,   "Friendly",     "Spain" },
	{  3, 2006.0,   "Friendly", "Australia" },
	{  4, 2006.0,   "Friendly",    "Russia" },
	{  5, 2007.0,   "Friendly",    "Russia" },
	{  6, 2007.0,   "Friendly", "Australia" },
	{  7, 2007.0, "Tournament",    "Russia" },
	{  8, 2007.0, "Tournament",  "Slovenia" },
	{  9, 2007.0, "Tournament",  "Slovenia" },
	{ 10, 2007.0,   "Friendly",     "Italy" },
	{ 11, 2007.0,   "Friendly",   "Ireland" }
};

struct T_competition_result
competition_result[] = {
	{  1, 1, 2, "11:10" },
	{  2, 3, 2,  "25:2" },
	{ 10, 4, 2, "13:10" },
	{  4, 1, 2,  "12:9" },
	{  5, 1, 4,  "10:3" },
	{  6, 1, 6, "10:11" }
};

struct T_player
player[] = {
	{  1,       "Michael Platt",     "Full Back", 1, 20.0, 5.0,      "0",  20.0 },
	{  2,         "Dave Halley",    "Right Wing", 2, 23.0, 9.0,      "0",  36.0 },
	{  3,         "James Evans",  "Right Centre", 1, 30.0, 9.0,      "0",  36.0 },
	{  4,          "Tame Tupou",     "Left Wing", 2, 10.0, 3.0,      "0",  12.0 },
	{  5,       "Iestyn Harris",     "Stand Off", 4, 27.0, 3.0,  "50/60", 110.0 },
	{  6,     "Paul Deacon (c)",    "Scrum Half", 4, 20.0, 3.0, "90/106", 188.0 },
	{  7,          "Joe Vagana",          "Prop", 5, 19.0, 1.0,    "0/1",   4.0 },
	{  8,        "Terry Newton",        "Hooker", 5, 26.0, 9.0,      "0",  36.0 },
	{  9,          "Andy Lynch",          "Prop", 2, 29.0, 5.0,      "0",  20.0 },
	{ 10,      "David Solomona",    "Second Row", 2, 24.0, 5.0,      "0",  20.0 },
	{ 11, "Glenn Morrison (vc)",    "Second Row", 2, 14.0, 6.0,      "0",  24.0 },
	{ 12,  "Jamie Langley (vc)", "Loose Forward", 2, 28.0, 2.0,      "0",   8.0 },
	{ 13,       "Chris Feather",          "Prop", 3, 13.0, 1.0,      "0",   4.0 },
	{ 14,           "Matt Cook",    "Second Row", 4, 17.0, 4.0,      "0",  16.0 },
	{ 15,         "Sam Burgess", "Loose Forward", 4, 23.0, 8.0,      "0",  32.0 }
};

#endif