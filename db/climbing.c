/*
Database "climbing" contains tables:
	climber
	mountain
*/

#ifndef CLIMBING
#define CLIMBING

struct T_climber {
	double climber_id;
	char name[21];
	char country[15];
	char time[10];
	double points;
	double mountain_id;	// --> mountain.mountain_id
};

struct T_mountain {
	double mountain_id;
	char name[41];
	double height;
	double prominence;
	char range[12];
	char country[16];
};

struct T_climber
climber[] = {
	{  1,         "Klaus Enders",   "West Germany", "1:13.05.6", 15.0, 1 },
	{  2,    "Siegfried Schauzu",   "West Germany", "1:14.56.4", 12.0, 1 },
	{  3,  "Hans Luthringhauser",   "West Germany", "1:16.58.0", 10.0, 2 },
	{  4, "Jean Claude Castella",    "Switzerland", "1:17.16.0",  8.0, 2 },
	{  5,         "Horst Owesle",   "West Germany", "1:17.22.0",  6.0, 2 },
	{  6,     "Georg Auerbacher",   "West Germany", "1:18.14.6",  5.0, 3 },
	{  7,    "Arseneus Butscher",   "West Germany", "1:21.35.6",  4.0, 5 },
	{  8,     "Charlie Freedman", "United Kingdom", "1:25.02.8",  3.0, 5 },
	{  9,             "L Currie", "United Kingdom", "1:25.40.6",  2.0, 7 },
	{ 10,       "Mick Horsepole", "United Kingdom", "1:27.28.8",  1.0, 7 }
};

struct T_mountain
mountain[] = {
	{ 1,                          "Kibo (Uhuru Pk)", 5895.0, 5885.0, "Kilimanjaro",        "Tanzania" },
	{ 2,                     "Mount Kenya (Batian)", 5199.0, 3825.0, "Mount Kenya",           "Kenya" },
	{ 3,                  "Mawenzi (Hans Meyer Pk)", 5148.0,  850.0, "Kilimanjaro",        "Tanzania" },
	{ 4,    "Ngaliema / Mt Stanley (Margherita Pk)", 5109.0, 3951.0,    "Rwenzori", "DR Congo Uganda" },
	{ 5,                     "Mount Kenya (Lenana)", 4985.0,  130.0, "Mount Kenya",           "Kenya" },
	{ 6,        "Ngaliema / Mt Stanley (Savoia Pk)", 4977.0,  110.0,    "Rwenzori",          "Uganda" },
	{ 7, "Duwoni / Mt Speke (Vittorio Emanuele Pk)", 4890.0,  720.0,    "Rwenzori",          "Uganda" }
};

#endif