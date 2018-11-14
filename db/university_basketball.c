/*
Database "university_basketball" contains tables:
	basketball_match
	university
*/

#ifndef UNIVERSITY_BASKETBALL
#define UNIVERSITY_BASKETBALL

struct T_basketball_match {
	double team_id;
	double school_id;	// --> university.school_id
	char team_name[15];
	char acc_regular_season[5];
	char acc_percent[5];
	char acc_home[4];
	char acc_road[4];
	char all_games[6];
	double all_games_percent;
	char all_home[5];
	char all_road[5];
	char all_neutral[4];
};

struct T_university {
	double school_id;
	char school[27];
	char location[18];
	double founded;
	char affiliation[18];
	double enrollment;
	char nickname[19];
	char primary_conference[38];
};

struct T_basketball_match
basketball_match[] = {
	{ 1, 1, "North Carolina", "14–2", ".875", "6–2", "8–0",  "35–2", 0.946, "14–2", "13–0", "9–1" },
	{ 2, 2,           "Duke", "13–3", ".813", "7–1", "6–2",  "28–6", 0.824, "15–1",  "8–2", "5–3" },
	{ 3, 4,        "Clemson", "10–6", ".625", "7–1", "3–5", "24–10", 0.706, "14–2",  "6–5", "4–3" },
	{ 4, 5,  "Virginia Tech",  "9–7", ".563", "6–2", "3–5", "21–14",   0.6, "14–3",  "4–8", "3–3" }
};

struct T_university
university[] = {
	{ 1,     "University of Delaware",        "Newark, DE", 1743.0,            "Public", 19067.0, "Fightin' Blue Hens", "Colonial Athletic Association ( D-I )" },
	{ 2,     "Lebanon Valley College",      "Annville, PA", 1866.0, "Private/Methodist",  2100.0,    "Flying Dutchmen", "MAC Commonwealth Conference ( D-III )" },
	{ 3, "University of Rhode Island",      "Kingston, RI", 1892.0,            "Public", 19095.0,               "Rams",        "Atlantic 10 Conference ( D-I )" },
	{ 4,         "Rutgers University", "New Brunswick, NJ", 1766.0,            "Public", 56868.0,    "Scarlet Knights",  "American Athletic Conference ( D-I )" },
	{ 5,     "Stony Brook University",   "Stony Brook, NY", 1957.0,            "Public", 23997.0,          "Seawolves",       "America East Conference ( D-I )" }
};

#endif