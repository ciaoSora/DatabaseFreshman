/*
Database "riding_club" contains tables:
	club
	coach
	match_result
	player
	player_coach
*/

#ifndef RIDING_CLUB
#define RIDING_CLUB

struct T_club {
	double club_id;
	char club_name[16];
	char region[7];
	double start_year;
};

struct T_coach {
	double coach_id;
	char player_name[14];
	char gender[2];
	double club_id;	// --> club.club_id
	double rank;
};

struct T_match_result {
	double rank;
	double club_id;	// --> club.club_id
	double gold;
	double big_silver;
	double small_silver;
	double bronze;
	double points;
};

struct T_player {
	double player_id;
	char sponsor_name[33];
	char player_name[20];
	char gender[2];
	char residence[9];
	char occupation[30];
	double votes;
	char rank[4];
};

struct T_player_coach {
	double player_id;	// --> player.player_id
	double coach_id;	// --> coach.coach_id
	double starting_year;
};

struct T_club
club[] = {
	{ 1,             "AIK",    "USA", 2009 },
	{ 2,       "BK Häcken",     "UK", 1998 },
	{ 3,  "Djurgårdens IF",    "USA", 2005 },
	{ 4,        "Gefle IF",  "Korea", 2001 },
	{ 5,    "Halmstads BK", "Russia", 2000 },
	{ 6, "Helsingborgs IF", "France", 2011 }
};

struct T_coach
coach[] = {
	{ 1, "Jameson Tomas", "M", 1, 1 },
	{ 2,    "Joe Fabbri", "F", 1, 2 },
	{ 3,   "Robert Chen", "M", 3, 3 },
	{ 4,    "James Wong", "M", 3, 4 },
	{ 5,   "Smith Brown", "M", 1, 5 }
};

struct T_match_result
match_result[] = {
	{ 1, 1, 20, 14,  9,  8, 168 },
	{ 2, 2, 13, 11, 16,  9, 139 },
	{ 3, 3, 12,  9,  4,  7, 102 },
	{ 4, 4,  5, 12, 10,  8,  89 },
	{ 5, 5,  7,  7,  9, 10,  84 },
	{ 6, 6,  6,  6,  6,  6,  66 }
};

struct T_player
player[] = {
	{  1,                   "Brandon—Souris",     "Jean Luc Bouché", "M",  "Brandon",           "Locomotive Engineer",  6055, "2nd" },
	{  2, "Charleswood—St. James—Assiniboia",       "Fiona Shiells", "F", "Winnipeg",         "Ministerial Assistant",  7190, "3rd" },
	{  3,                        "Churchill",         "Niki Ashton", "F", "Thompson",                    "Researcher",  8734, "1st" },
	{  4,     "Dauphin—Swan River—Marquette",       "Ron Strynadka", "M",   "Birtle",                       "Retired",  4914, "2nd" },
	{  5,                "Elmwood—Transcona",         "Jim Maloway", "M", "Winnipeg",             "Small Businessman", 14355, "1st" },
	{  6,                "Kildonan—St. Paul",          "Ross Eadie", "M", "Winnipeg",    "Self Employed / Consultant", 12093, "2nd" },
	{  7,                   "Portage—Lisgar",        "Mohamed Alli", "M", "Winnipeg", "Distribution Centre Associate",  2353, "4th" },
	{  8,                       "Provencher",      "Ross C. Martin", "M",  "Oakbank",            "Design Coordinator",  4947, "2nd" },
	{  9,                   "Saint Boniface",    "Matt Schaubroeck", "M", "Winnipeg",                       "Student",  5502, "3rd" },
	{ 10,                "Selkirk—Interlake",    "Patricia Cordner", "F",  "Selkirk",                       "Retired",  9506, "2nd" },
	{ 11,                  "Winnipeg Centre",          "Pat Martin", "M", "Winnipeg",               "Parliamentarian", 12285, "1st" },
	{ 12,                   "Winnipeg North", "Judy Wasylycia-Leis", "F", "Winnipeg",               "Parliamentarian", 14097, "1st" },
	{ 13,                   "Winnipeg South",         "Sean Robert", "M", "Winnipeg",     "Product Consultant - MLCC",  4673, "3rd" },
	{ 14,            "Winnipeg South Centre",    "Rachel Heinrichs", "F", "Winnipeg",                       "Student",  5490, "3rd" }
};

struct T_player_coach
player_coach[] = {
	{  1, 1, 2010 },
	{  2, 1, 2011 },
	{  3, 1, 2012 },
	{  4, 2, 2013 },
	{  6, 3, 2012 },
	{ 10, 3, 2011 },
	{ 14, 5, 2010 }
};

#endif