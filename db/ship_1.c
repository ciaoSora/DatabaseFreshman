/*
Database "ship_1" contains tables:
	captain
	ship
*/

#ifndef SHIP_1
#define SHIP_1

struct T_captain {
	double captain_id;
	char name[27];
	double ship_id;	// --> ship.ship_id
	char age[3];
	char class[28];
	char rank[26];
};

struct T_ship {
	double ship_id;
	char name[20];
	char type[8];
	double built_year;
	char class[3];
	char flag[7];
};

struct T_captain
captain[] = {
	{ 1, "Captain Sir Henry Langford", 1, "40", "Third-rate ship of the line",                "Midshipman" },
	{ 2,       "Captain Beves Conway", 2, "54", "Third-rate ship of the line",                "Midshipman" },
	{ 3,    "Lieutenant Hugh Bolitho", 3, "43",                      "Cutter",                "Midshipman" },
	{ 4, "Lieutenant Montagu Verling", 4, "45",              "Armed schooner",                "Midshipman" },
	{ 5,     "Captain Henry Dumaresq", 5, "38",                     "Frigate",                "Lieutenant" },
	{ 6,      "Captain Gilbert Pears", 2, "60", "Third-rate ship of the line",                "Lieutenant" },
	{ 7,  "Commander Richard Bolitho", 3, "38",                "Sloop-of-war", "Commander, junior captain" }
};

struct T_ship
ship[] = {
	{ 1,         "HMS Manxman", "Panamax", 1997.0, "KR", "Panama" },
	{ 2,          "HMS Gorgon", "Panamax", 1998.0, "KR", "Panama" },
	{ 3,   "HM Cutter Avenger", "Panamax", 1997.0, "KR", "Panama" },
	{ 4, "HM Schooner Hotspur", "Panamax", 1998.0, "KR", "Panama" },
	{ 5,         "HMS Destiny", "Panamax", 1998.0, "KR", "Panama" },
	{ 6,          "HMS Trojan", "Panamax", 1997.0, "KR", "Panama" },
	{ 7,    "HM Sloop Sparrow", "Panamax", 1997.0, "KR", "Panama" },
	{ 8,       "HMS Phalarope", "Panamax", 1997.0, "KR", "Panama" },
	{ 9,          "HMS Undine", "Panamax", 1998.0, "GL",  "Malta" }
};

#endif