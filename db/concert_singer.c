/*
Database "concert_singer" contains tables:
	concert
	singer
	singer_in_concert
	stadium
*/

#ifndef CONCERT_SINGER
#define CONCERT_SINGER

struct T_concert {
	double concert_id;
	char concert_name[15];
	char theme[16];
	char stadium_id[3];	// --> stadium.stadium_id
	char year[5];
};

struct T_singer {
	double singer_id;
	char name[13];
	char country[14];
	char song_name[10];
	char song_release_year[5];
	double age;
	char is_male[2];
};

struct T_singer_in_concert {
	double concert_id;	// --> concert.concert_id
	char singer_id[2];	// --> singer.singer_id
};

struct T_stadium {
	double stadium_id;
	char location[16];
	char name[18];
	double capacity;
	double highest;
	double lowest;
	double average;
};

struct T_concert
concert[] = {
	{ 1,      "Auditions",     "Free choice",  "1", "2014" },
	{ 2, "Super bootcamp",   "Free choice 2",  "2", "2014" },
	{ 3,    "Home Visits",   "Bleeding Love",  "2", "2015" },
	{ 4,         "Week 1",      "Wide Awake", "10", "2014" },
	{ 5,         "Week 1",   "Happy Tonight",  "9", "2015" },
	{ 6,         "Week 2", "Party All Night",  "7", "2015" }
};

struct T_singer
singer[] = {
	{ 1,    "Joe Sharp",   "Netherlands",       "You", "1992", 52, "F" },
	{ 2,    "Timbaland", "United States", "Dangerous", "2008", 32, "T" },
	{ 3, "Justin Brown",        "France",    "Hey Oh", "2013", 29, "T" },
	{ 4,   "Rose White",        "France",       "Sun", "2003", 41, "F" },
	{ 5, "John Nizinik",        "France", "Gentleman", "2014", 43, "T" },
	{ 6,  "Tribal King",        "France",      "Love", "2016", 25, "T" }
};

struct T_singer_in_concert
singer_in_concert[] = {
	{ 1, "2" },
	{ 1, "3" },
	{ 1, "5" },
	{ 2, "3" },
	{ 2, "6" },
	{ 3, "5" },
	{ 4, "4" },
	{ 5, "6" },
	{ 5, "3" },
	{ 6, "2" }
};

struct T_stadium
stadium[] = {
	{  1,    "Raith Rovers",      "Stark's Park", 10104, 4812, 1294, 2106 },
	{  2,      "Ayr United",     "Somerset Park", 11998, 2363, 1057, 1477 },
	{  3,       "East Fife",   "Bayview Stadium",  2000, 1980,  533,  864 },
	{  4,    "Queen's Park",      "Hampden Park", 52500, 1763,  466,  730 },
	{  5, "Stirling Albion", "Forthbank Stadium",  3808, 1125,  404,  642 },
	{  6,        "Arbroath",     "Gayfield Park",  4125,  921,  411,  638 },
	{  7,  "Alloa Athletic",   "Recreation Park",  3100, 1057,  331,  637 },
	{  9,       "Peterhead",           "Balmoor",  4000,  837,  400,  615 },
	{ 10,    "Brechin City",        "Glebe Park",  3960,  780,  315,  552 }
};

#endif