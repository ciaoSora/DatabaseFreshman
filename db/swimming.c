/*
Database "swimming" contains tables:
	event
	record
	stadium
	swimmer
*/

#ifndef SWIMMING
#define SWIMMING

struct T_event {
	double id;
	char name[14];
	double stadium_id;	// --> stadium.id
	char year[5];
};

struct T_record {
	double id;
	char result[5];
	double swimmer_id;	// --> swimmer.id
	double event_id;	// --> event.id
};

struct T_stadium {
	double id;
	char name[35];
	double capacity;
	char city[17];
	char country[11];
	double opening_year;
};

struct T_swimmer {
	double id;
	char name[21];
	char nationality[10];
	double meter_100;
	char meter_200[8];
	char meter_300[8];
	char meter_400[8];
	char meter_500[8];
	char meter_600[8];
	char meter_700[8];
	char time[8];
};

struct T_event
event[] = {
	{ 1,          "FINA",  1, "2016" },
	{ 2,       "Pacific", 10, "2011" },
	{ 3,  "World Master",  2, "2012" },
	{ 4,  "World Junior",  3, "2013" },
	{ 5,           "IPC",  4, "2014" },
	{ 6, "European FINA",  8, "2017" }
};

struct T_record
record[] = {
	{  1,   "NC", 1, 1 },
	{  2,  "Win", 1, 2 },
	{  3, "Loss", 3, 3 },
	{  4,  "Win", 4, 3 },
	{  5, "Loss", 1, 3 },
	{  6,  "Win", 6, 3 },
	{  7,  "Win", 5, 3 },
	{  8,  "Win", 2, 1 },
	{  9,  "Win", 3, 1 },
	{ 10,  "Win", 4, 1 },
	{ 11,  "Win", 4, 2 },
	{ 12,  "Win", 3, 5 },
	{ 13, "Loss", 4, 4 }
};

struct T_stadium
stadium[] = {
	{  1,                       "Nou Mestalla", 75000,         "Valencia",      "Spain", 2004 },
	{  2,                      "Gazprom Arena", 69501, "Saint Petersburg",     "Russia", 2005 },
	{  3,               "Baku Olympic Stadium", 68000,             "Baku", "Azerbaijan", 2005 },
	{  4,                 "Estadio La Peineta", 67500,           "Madrid",      "Spain", 2005 },
	{  5,              "Ferenc Puskás Stadion", 65000,         "Budapest",    "Hungary", 2006 },
	{  6,                 "Stade des Lumières", 61556,             "Lyon",     "France", 2004 },
	{  7, "Northumberland Development Project", 56250,           "London",    "England", 2006 },
	{  8,              "Fisht Olympic Stadium", 47659,            "Sochi",     "Russia", 2004 },
	{  9,                      "Arena Baltika", 45015,      "Kaliningrad",     "Russia", 2007 },
	{ 10,                 "Yubileyniy Stadium", 45015,          "Saransk",     "Russia", 2005 }
};

struct T_swimmer
swimmer[] = {
	{ 7,  "Przemysław Stańczyk",    "Poland", 57.31, "1:57.10", "2:56.02", "3:55.36", "4:54.21", "5:52.59", "6:50.91", "7:47.91" },
	{ 4,        "Craig Stevens", "Australia", 57.35, "1:56.34", "2:55.90", "3:55.72", "4:55.08", "5:54.45", "6:52.69", "7:48.67" },
	{ 5, "Federico Colbertaldo",     "Italy", 57.66, "1:56.77", "2:56.04", "3:55.37", "4:54.48", "5:53.53", "6:52.58", "7:49.98" },
	{ 8,    "Sébastien Rouault",    "France", 55.67, "1:54.40", "2:53.46", "3:52.93", "4:52.85", "5:53.03", "6:53.34", "7:52.04" },
	{ 1,       "Sergiy Fesenko",   "Ukraine", 57.34, "1:57.26", "2:57.10", "3:57.12", "4:57.03", "5:56.31", "6:55.07", "7:53.43" },
	{ 2,        "Grant Hackett", "Australia", 57.34, "1:57.21", "2:56.95", "3:57.00", "4:56.96", "5:57.10", "6:57.44", "7:55.39" },
	{ 6,        "Ryan Cochrane",    "Canada", 57.84, "1:57.26", "2:56.64", "3:56.34", "4:56.15", "5:56.99", "6:57.69", "7:56.56" },
	{ 3,     "Oussama Mellouli",   "Tunisia", 57.31, "1:56.44", "2:55.94", "3:55.49", "4:54.19", "5:52.92", "6:50.80", "7:46.95" }
};

#endif