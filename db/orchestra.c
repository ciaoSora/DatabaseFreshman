/*
Database "orchestra" contains tables:
	conductor
	orchestra
	performance
	show
*/

#ifndef ORCHESTRA
#define ORCHESTRA

struct T_conductor {
	double conductor_id;
	char name[22];
	double age;
	char nationality[7];
	double year_of_work;
};

struct T_orchestra {
	double orchestra_id;
	char orchestra[33];
	double conductor_id;	// --> conductor.conductor_id
	char record_company[29];
	double year_of_founded;
	char major_record_format[8];
};

struct T_performance {
	double performance_id;
	double orchestra_id;	// --> orchestra.orchestra_id
	char type[19];
	char date[8];
	double official_ratings_(millions);
	char weekly_rank[4];
	char share[6];
};

struct T_show {
	double show_id;
	double performance_id;	// --> performance.performance_id
	char if_first_show[16];
	char result[2];
	double attendance;
};

struct T_conductor
conductor[] = {
	{  1,          "Antal Doráti", 40,    "USA", 10 },
	{  2,       "Igor Stravinsky", 41,     "UK", 11 },
	{  3,           "Colin Davis", 42,    "USA",  6 },
	{  4,        "Paul Jorgensen", 43,     "UK", 11 },
	{  5,           "Antal Brown", 43,    "USA", 20 },
	{  6,        "Charles Dutoit", 43, "France", 12 },
	{  7,        "Gerard Schwarz", 50,    "USA", 20 },
	{  8,         "Pierre Boulez", 49,     "UK", 11 },
	{  9,        "Valeri Gergiev", 47,    "USA", 16 },
	{ 10,          "Robert Craft", 63,     "UK", 21 },
	{ 11,           "Seiji Ozawa", 43,    "USA", 10 },
	{ 12, "Michael Tilson Thomas", 42, "France", 12 }
};

struct T_orchestra
orchestra[] = {
	{  1,        "London Symphony Orchestra",  1,              "Mercury Records", 2003.0,      "CD" },
	{  2,      "Columbia Symphony Orchestra",  2,         "Columbia Masterworks", 2009.0, "CD / LP" },
	{  3,    "Royal Concertgebouw Orchestra",  3,                      "Philips", 2008.0,      "CD" },
	{  4,           "Royal Danish Orchestra",  4,                       "Kultur", 2002.0,     "DVD" },
	{  5,       "Detroit Symphony Orchestra",  5,                "Decca Records", 2002.0,      "CD" },
	{  6,      "Montreal Symphony Orchestra",  6,                "Decca Records", 2004.0,      "CD" },
	{  7,       "Seattle Symphony Orchestra",  7,                "Delos Records", 2002.0,      "CD" },
	{  8,       "Chicago Symphony Orchestra",  8,          "Deutsche Grammophon", 2003.0,      "CD" },
	{  9,                  "Kirov Orchestra",  9,     "Philips Classics Records", 2008.0,      "CD" },
	{ 10,           "Philharmonia Orchestra", 10, "Koch Records / Naxos Records", 2006.0,      "CD" },
	{ 11,               "Orchestre de Paris", 11,                          "EMI", 2007.0,      "CD" },
	{ 12, "San Francisco Symphony Orchestra", 12,                          "RCA", 2008.0,      "CD" }
};

struct T_performance
performance[] = {
	{  1,  1,        "Auditions 1",  "9 June",   5.2,  "12", "22.7%" },
	{  2,  2,        "Auditions 2", "10 June",  6.73,   "8", "28.0%" },
	{  3,  3,        "Auditions 3", "11 June",  7.28,  "15", "29.4%" },
	{  4,  4,        "Auditions 4", "12 June",  7.39,  "13", "29.3%" },
	{  5,  5,        "Auditions 5", "13 June",  7.51,  "11", "29.2%" },
	{ 11, 11,       "Semi-final 1", "14 June",  8.36,   "9", "34.0%" },
	{  6,  6,       "Semi-final 2", "15 June",  9.28,   "8", "38.1%" },
	{  7,  7,       "Semi-final 3", "16 June",  9.29,   "7", "40.9%" },
	{  8,  8,         "Live final", "17 June", 11.58,   "1", "43.7%" },
	{  9,  9, "Live final results", "17 June", 11.45,   "2", "44.7%" },
	{ 10, 10,     "Series average",    "2007",  8.38, "TBC",   "34%" }
};

struct T_show
show[] = {
	{ 1, 1,      "Glebe Park", "T", 1026.0 },
	{ 2, 2,        "Fir Park", "T",  695.0 },
	{ 3, 3, "St. Mirren Park", "F",  555.0 },
	{ 4, 4, "St. Mirren Park", "F", 1925.0 },
	{ 5, 5,    "Hampden Park", "T", 2431.0 }
};

#endif