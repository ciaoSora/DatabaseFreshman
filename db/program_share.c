/*
Database "program_share" contains tables:
	broadcast
	broadcast_share
	channel
	program
*/

#ifndef PROGRAM_SHARE
#define PROGRAM_SHARE

struct T_broadcast {
	double channel_id;	// --> channel.channel_id
	double program_id;	// --> program.program_id
	char time_of_day[8];
};

struct T_broadcast_share {
	double channel_id;	// --> channel.channel_id
	double program_id;	// --> program.program_id
	char date[9];
	double share_in_percent;
};

struct T_channel {
	double channel_id;
	char name[22];
	char owner[20];
	double share_in_percent;
	double rating_in_percent;
};

struct T_program {
	double program_id;
	char name[9];
	char origin[10];
	double launch;
	char owner[40];
};

struct T_broadcast
broadcast[] = {
	{  1, 1, "Morning" },
	{  2, 1,   "Night" },
	{  3, 2, "Morning" },
	{  4, 1,   "Night" },
	{  5, 4, "Morning" },
	{  6, 3, "Morning" },
	{  7, 3,    "Noon" },
	{  8, 2,   "Night" },
	{  9, 3,    "Noon" },
	{ 10, 4,   "Night" },
	{  1, 2,   "Night" }
};

struct T_broadcast_share
broadcast_share[] = {
	{ 1, 1,   "01,May", 3.1 },
	{ 2, 1,   "02,May", 1.8 },
	{ 3, 2,   "03,May", 2.8 },
	{ 4, 1, "04,April", 3.2 },
	{ 5, 4,   "01,May", 1.1 },
	{ 6, 3,   "03,May", 2.1 },
	{ 7, 3,   "10,Jun", 1.9 },
	{ 8, 2,   "11,May", 4.2 },
	{ 9, 3,   "13,May", 3.0 }
};

struct T_channel
channel[] = {
	{  1,                "CCTV-1",                "CCTV",  4.9, 0.54 },
	{  2,    "Hunan Satellite TV",                 "HBS", 4.81, 0.53 },
	{  3,                "CCTV-8",                "CCTV", 3.76, 0.41 },
	{  4,               "CCTV-13",                "CCTV", 2.91, 0.32 },
	{  5,                "CCTV-3",                "CCTV", 2.86, 0.31 },
	{  6,                "CCTV-6",                "CCTV", 2.73,  0.3 },
	{  7,               "CCTV-14",                "CCTV",  2.6, 0.29 },
	{  8,                "CCTV-4",                "CCTV", 2.33, 0.26 },
	{  9,    "Anhui Satellite TV",    "Anhui Television", 1.78,  0.2 },
	{ 10, "Shandong Satellite TV", "Shandong Television", 1.74, 0.19 }
};

struct T_program
program[] = {
	{ 1, "Aniworld",     "Hunan", 2005.0,         "Hunan Broadcasting System (HBS)" },
	{ 2,     "Kaku",   "Beijing", 2004.0,                "Beijing Television (BTV)" },
	{ 3,  "Toonmax",  "Shanghai", 2005.0,              "Shanghai Media Group (SMG)" },
	{ 4,   "Jiajia", "Guangdong", 2007.0,        "Southern Media Corporation (SMC)" },
	{ 5,   "Youman",   "Jiangsu", 2010.0, "Jiangsu Broadcasting Corporation (JSBC)" }
};

#endif