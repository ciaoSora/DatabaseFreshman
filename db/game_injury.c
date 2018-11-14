/*
Database "game_injury" contains tables:
	game
	injury_accident
	stadium
*/

#ifndef GAME_INJURY
#define GAME_INJURY

struct T_game {
	double stadium_id;	// --> stadium.id
	double id;
	double season;
	char date[18];
	char home_team[10];
	char away_team[10];
	char score[10];
	char competition[9];
};

struct T_injury_accident {
	double game_id;	// --> game.id
	double id;
	char player[22];
	char injury[50];
	char number_of_matches[7];
	char source[9];
};

struct T_stadium {
	double id;
	char name[27];
	double home_games;
	double average_attendance;
	double total_attendance;
	double capacity_percentage;
};

struct T_game
game[] = {
	{  1,  1, 2007,       "18 May 2007",  "Quruvchi", "Pakhtakor",       "1–1",   "League" },
	{  2,  2, 2007, "22 September 2007", "Pakhtakor",  "Quruvchi",       "0–0",   "League" },
	{  3,  3, 2007,   "9 December 2007", "Pakhtakor",  "Quruvchi", "0–0 (7:6)",      "Cup" },
	{  4,  4, 2008,      "10 July 2008", "Pakhtakor",  "Quruvchi",       "1–1",   "League" },
	{  5,  5, 2008,    "16 August 2008", "Bunyodkor", "Pakhtakor",       "1–1",   "League" },
	{  6,  6, 2008,   "31 October 2008", "Bunyodkor", "Pakhtakor",       "3–1",      "Cup" },
	{  7,  7, 2009,      "12 July 2009", "Bunyodkor", "Pakhtakor",       "2–1",   "League" },
	{  8,  8, 2009,   "14 October 2009", "Pakhtakor", "Bunyodkor",       "0–0",   "League" },
	{  9,  9, 2009,     "8 August 2009", "Pakhtakor", "Bunyodkor",       "1–0",      "Cup" },
	{ 10, 10, 2010,     "14 March 2010", "Bunyodkor", "Pakhtakor",       "2–1",   "League" },
	{ 10, 11, 2010,   "31 October 2010", "Pakhtakor", "Bunyodkor",       "0–0",   "League" },
	{ 10, 12, 2011,       "7 July 2011", "Pakhtakor", "Bunyodkor",       "0–0",   "League" },
	{  1, 13, 2011,    "21 August 2011", "Bunyodkor", "Pakhtakor",       "2–1",   "League" },
	{  2, 14, 2012,     "11 March 2012", "Bunyodkor", "Pakhtakor",         "–", "Supercup" },
	{  3, 15, 2012,      "26 June 2012", "Bunyodkor", "Pakhtakor",       "2–0",   "League" },
	{  4, 16, 2012,     "9 August 2012", "Pakhtakor", "Bunyodkor",       "1–1",   "League" },
	{  5, 17, 2012,    "22 August 2012", "Bunyodkor", "Pakhtakor",       "1–1",      "Cup" },
	{ 11, 18, 2012,  "25 November 2012", "Pakhtakor", "Bunyodkor",       "1–3",      "Cup" },
	{ 12, 19, 2013,      "30 June 2013", "Pakhtakor", "Bunyodkor",       "0–2",   "League" },
	{  7, 20, 2013,     "8 August 2013", "Bunyodkor", "Pakhtakor",       "1–2",   "League" }
};

struct T_injury_accident
injury_accident[] = {
	{  1,  1,         "Davide Santon",                "Clean-up surgery on his right knee",     "12", "inter.it" },
	{  2,  2,                "Maicon",                                      "Knee problem",      "2", "inter.it" },
	{  3,  3,       "Dejan Stanković",         "Hamstring muscle strain in his left thigh",      "2", "inter.it" },
	{  4,  4,       "Wesley Sneijder",                                       "Foot injury",      "1", "inter.it" },
	{  5,  5,          "Diego Milito",                  "Slight thigh strain in right leg",      "1", "inter.it" },
	{  5,  6,        "Javier Zanetti",                      "Post-traumatic pneumothrorax",      "4", "inter.it" },
	{  6,  7,         "Walter Samuel",                         "Right thigh muscle strain",      "3", "inter.it" },
	{  6,  8,          "Thiago Motta",                         "Surgery on his right knee",     "10", "inter.it" },
	{  6,  9,          "Goran Pandev",                                     "Ankle problem",      "3", "inter.it" },
	{  8, 10,          "Iván Córdoba", "Sustained a biceps femoris strain in his left leg",      "1", "inter.it" },
	{  9, 11,     "Esteban Cambiasso",        "First-degree strain left hamstring muscles",      "2", "inter.it" },
	{ 10, 12,   "Dejan Stanković (2)",                                 "Right calf strain",  "4 (6)", "inter.it" },
	{ 10, 13,   "Wesley Sneijder (2)",                          "Fainted during half time",  "1 (2)", "inter.it" },
	{ 11, 14, "Esteban Cambiasso (2)", "Sustained posterior thigh strains in his left leg",  "4 (6)", "inter.it" },
	{ 12, 15,      "Thiago Motta (2)",                                      "Knee problem", "7 (17)", "inter.it" }
};

struct T_stadium
stadium[] = {
	{  1,            "Cowboys Stadium", 8, 87047.0, 696377.0, 108.8 },
	{  2,                 "FedExField", 8, 83172.0, 665380.0,  90.7 },
	{  3,    "New Meadowlands Stadium", 8, 79019.0, 632156.0,  95.8 },
	{  4,    "New Meadowlands Stadium", 8, 78596.0, 628768.0,  95.3 },
	{  5, "Invesco Field at Mile High", 8, 74908.0, 599264.0,  98.4 },
	{  6,    "Bank of America Stadium", 8, 72620.0, 580965.0,  98.4 },
	{  7,           "M&T Bank Stadium", 8, 71227.0, 569817.0, 100.3 },
	{  8,            "Reliant Stadium", 8, 71080.0, 568643.0, 100.0 },
	{  9,              "Lambeau Field", 8, 70795.0, 566362.0,  97.1 },
	{ 10,        "Louisiana Superdome", 8, 70038.0, 560304.0,  96.0 },
	{ 11,    "Lincoln Financial Field", 8, 69144.0, 553152.0, 102.3 },
	{ 12,                   "LP Field", 8, 69143.0, 553144.0, 100.0 },
	{ 13,           "Gillette Stadium", 8, 68756.0, 550048.0, 100.0 }
};

#endif