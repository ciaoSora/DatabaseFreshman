/*
Database "wrestler" contains tables:
	elimination
	wrestler
*/

#ifndef WRESTLER
#define WRESTLER

struct T_elimination {
	char elimination_id[2];
	char wrestler_id[2];	// --> wrestler.wrestler_id
	char team[13];
	char eliminated_by[9];
	char elimination_move[23];
	char time[6];
};

struct T_wrestler {
	double wrestler_id;
	char name[19];
	char reign[2];
	char days_held[5];
	char location[17];
	char event[21];
};

struct T_elimination
elimination[] = {
	{ "1", "1",   "Team Orton",     "Punk",            "Go To Sleep", "00:11" },
	{ "2", "2", "Team Batista", "Benjamin",                "Paydirt", "07:38" },
	{ "3", "4", "Team Batista",    "Orton",          "Rope hung DDT", "10:45" },
	{ "4", "5", "Team Batista",   "Rhodes",       "Silver Spoon DDT", "13:06" },
	{ "5", "7", "Team Batista",    "Henry", "World's Strongest Slam", "14:22" },
	{ "6", "9",   "Team Orton",  "Batista",                  "Spear", "14:32" }
};

struct T_wrestler
wrestler[] = {
	{  1,   "Rey Misterio Sr.", "1",  "344", "Tijuana , Mexico",           "Live event" },
	{  2,            "Fishman", "1",  "113", "Tijuana , Mexico",           "Live event" },
	{  3,         "Villaño IV", "1", "1285", "Tijuana , Mexico",           "Live event" },
	{  4,        "Gran Hamada", "1",  "960",    "Tokyo , Japan",           "Live event" },
	{  5,         "El Samurai", "1",    "1",    "Tokyo , Japan",           "Live event" },
	{  6, "The Great Sasuke §", "1",   "99",    "Tokyo , Japan",           "Live event" },
	{  7,    "Último Dragón §", "1",   "54",    "Osaka , Japan",           "Live event" },
	{  8,     "Jushin Liger §", "1",  "183",    "Tokyo , Japan", "Wrestling World 1997" },
	{  9,       "El Samurai §", "2",   "35",  "Sapporo , Japan",           "Live event" },
	{ 10,   "Shinjiro Otani §", "1",   "56",   "Nagoya , Japan",           "Live event" }
};

#endif