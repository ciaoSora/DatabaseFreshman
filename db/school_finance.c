/*
Database "school_finance" contains tables:
	budget
	endowment
	school
*/

#ifndef SCHOOL_FINANCE
#define SCHOOL_FINANCE

struct T_budget {
	double school_id;	// --> school.school_id
	double year;
	double budgeted;
	double total_budget_percent_budgeted;
	double invested;
	double total_budget_percent_invested;
	char budget_invested_percent[6];
};

struct T_endowment {
	double endowment_id;
	double school_id;	// --> school.school_id
	char donator_name[28];
	double amount;
};

struct T_school {
	char school_id[2];
	char school_name[17];
	char location[13];
	char mascot[10];
	double enrollment;
	char ihsaa_class[4];
	char ihsaa_football_class[5];
	char county[25];
};

struct T_budget
budget[] = {
	{ 2, 1999,   4979, 2.0,   2134, 2.0,  "42.9" },
	{ 2, 2000,   3666, 2.0,   5840, 2.0, "159.3" },
	{ 2, 2001,   6803, 2.0,   8335, 2.0, "122.5" },
	{ 3, 2002,   6803, 2.0,   8335, 2.0, "146.9" },
	{ 1, 2003, 119527, 2.4,  85249, 2.2,  "71.3" },
	{ 4, 2004,  74849, 2.0,  95542, 2.2, "127.6" },
	{ 5, 2005,  61283, 1.3, 140102, 2.7, "228.8" },
	{ 5, 2006, 113531, 2.0, 146102, 2.7, "228.6" }
};

struct T_endowment
endowment[] = {
	{  1, 1,                 "Monte Plata", 9.51 },
	{  2, 2,            "San José de Ocoa", 9.83 },
	{  3, 3,           "Distrito Nacional", 9.55 },
	{  4, 3,                    "Valverde", 9.73 },
	{  5, 3,               "San Cristóbal", 9.05 },
	{  6, 4,          "Santo Domingo Este", 8.99 },
	{  7, 4,                    "Santiago", 8.85 },
	{  8, 5,                      "Duarte", 8.53 },
	{  9, 6, "Com. Dom. En Estados Unidos", 8.43 },
	{ 10, 7,                     "La Vega", 8.82 },
	{ 11, 8,                     "Peravia", 8.33 }
};

struct T_school
school[] = {
	{ "1",           "Bremen",       "Bremen",     "Lions", 495,  "AA",   "AA",              "50 Marshall" },
	{ "2", "Culver Community",       "Culver", "Cavaliers", 287,   "A",    "A",              "50 Marshall" },
	{ "3",            "Glenn",    "Walkerton",   "Falcons", 605, "AAA",  "AAA",            "71 St. Joseph" },
	{ "4",          "Jimtown",      "Elkhart",   "Jimmies", 601, "AAA",  "AAA",               "20 Elkhart" },
	{ "5",   "Knox Community",         "Knox",  "Redskins", 620, "AAA",  "AAA",                "75 Starke" },
	{ "6",          "LaVille",    "Lakeville",   "Lancers", 379,  "AA",    "A",            "71 St. Joseph" },
	{ "7",    "New Prairie 1", "New Carlisle",   "Cougars", 852, "AAA", "AAAA", "46 LaPorte 71 St. Joseph" },
	{ "8",           "Triton",      "Bourbon",   "Trojans", 316,   "A",    "A",              "50 Marshall" }
};

#endif