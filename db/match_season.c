/*
Database "match_season" contains tables:
	country
	match_season
	player
	team
*/

#ifndef MATCH_SEASON
#define MATCH_SEASON

struct T_country {
	double country_id;
	char country_name[14];
	char capital[11];
	char official_native_language[33];
};

struct T_match_season {
	double season;
	char player[49];
	char position[11];
	double country;	// --> country.country_id
	double team;	// --> team.team_id
	double draft_pick_number;
	char draft_class[32];
	char college[22];
};

struct T_player {
	double player_id;
	char player[22];
	char years_played[25];
	char total_wl[4];
	char singles_wl[4];
	char doubles_wl[4];
	double team;	// --> team.team_id
};

struct T_team {
	double team_id;
	char name[19];
};

struct T_country
country[] = {
	{ 1,     "Indonesia",    "Jakarta",                 "Bahasa Indonesia" },
	{ 2,          "Iran",     "Tehran",        "Persian ( Arabic script )" },
	{ 3,          "Iraq",    "Baghdad", "Arabic ( Arabic script ) Kurdish" },
	{ 4,       "Ireland",     "Dublin",                    "Irish English" },
	{ 5,   "Isle of Man",    "Douglas",                     "English Manx" },
	{ 6, "United States", "Washington",                          "English" }
};

struct T_match_season
match_season[] = {
	{ 1996.0,      "Steve Ralston Category:Articles with hCards", "Midfielder", 6,  1, 18,          "1996 MLS College Draft", "Florida International" },
	{ 1997.0,       "Mike Duhaney Category:Articles with hCards",   "Defender", 6,  2, 87, "1996 MLS Inaugural Player Draft",                  "UNLV" },
	{ 1998.0,          "Ben Olsen Category:Articles with hCards", "Midfielder", 4,  3,  2,                      "Project-40",              "Virginia" },
	{ 1999.0,          "Jay Heaps Category:Articles with hCards",   "Defender", 5,  4,  5,          "1999 MLS College Draft",                  "Duke" },
	{ 2000.0,   "Carlos Bocanegra Category:Articles with hCards",   "Defender", 5,  5,  4,             "2000 MLS SuperDraft",                  "UCLA" },
	{ 2001.0,      "Rodrigo Faria Category:Articles with hCards",    "Forward", 4,  5, 13,             "2001 MLS SuperDraft",     "Concordia College" },
	{ 2002.0,       "Kyle Martino Category:Articles with hCards", "Midfielder", 6,  3,  8,             "2002 MLS SuperDraft",              "Virginia" },
	{ 2003.0,       "Damani Ralph Category:Articles with hCards",    "Forward", 1,  2, 18,             "2003 MLS SuperDraft",           "Connecticut" },
	{ 2004.0,      "Clint Dempsey Category:Articles with hCards", "Midfielder", 6,  3,  8,             "2004 MLS SuperDraft",                "Furman" },
	{ 2005.0,  "Michael Parkhurst Category:Articles with hCards",   "Defender", 6,  4,  9,             "2005 MLS SuperDraft",           "Wake Forest" },
	{ 2006.0, "Jonathan Bornstein Category:Articles with hCards",   "Defender", 6, 10, 37,             "2006 MLS SuperDraft",                  "UCLA" },
	{ 2007.0,        "Maurice Edu Category:Articles with hCards", "Midfielder", 4,  9,  1,             "2007 MLS SuperDraft",              "Maryland" },
	{ 2008.0,      "Sean Franklin Category:Articles with hCards",   "Defender", 6,  5,  4,             "2008 MLS SuperDraft",  "Cal State Northridge" },
	{ 2009.0,      "Omar Gonzalez Category:Articles with hCards",   "Defender", 6,  5,  3,             "2009 MLS SuperDraft",              "Maryland" },
	{ 2010.0,         "Andy Najar Category:Articles with hCards", "Midfielder", 4,  5,  6,             "D.C. United Academy",                  "none" },
	{ 2011.0,       "C. J. Sapong Category:Articles with hCards",    "Forward", 6,  3, 10,             "2011 MLS SuperDraft",         "James Madison" }
};

struct T_player
player[] = {
	{  1,   "Cho Soong-Jae (630)",                 "1 (2011)", "2–0", "1–0", "1–0", 1 },
	{  2,      "Chung Hong (717)",                 "1 (2011)", "0–0", "0–0", "0–0", 1 },
	{  3,      "Im Kyu-tae (492)", "8 (2003–2005, 2007–2011)", "6–9", "5–7", "1–2", 1 },
	{  4, "Jeong Suk-Young (793)",            "2 (2010–2011)", "1–2", "1–2", "0–0", 1 },
	{  5,   "Kim Hyun-Joon (908)",            "2 (2010–2011)", "3–4", "2–1", "1–3", 2 },
	{  6,   "Kim Young-Jun (474)", "4 (2003–2004, 2010–2011)", "6–4", "6–3", "0–1", 4 },
	{  7,    "Lim Yong-Kyu (288)",            "3 (2009–2011)", "7–6", "5–6", "2–0", 6 },
	{  8,   "Seol Jae-Min (none)",            "2 (2010-2011)", "2–2", "0–0", "2–2", 1 },
	{  9,           "An Jae-Sung",      "3 (2005, 2007–2008)", "4–3", "3–2", "1–1", 1 },
	{ 10,            "Bae Nam-Ju",           "2 (1988, 1990)", "1–3", "0–2", "1–1", 8 }
};

struct T_team
team[] = {
	{  1,      "Columbus Crew" },
	{  2,        "Evalyn Feil" },
	{  3,    "Anais VonRueden" },
	{  4,       "Miami Fusion" },
	{  5,    "Enrique Osinski" },
	{  6,       "Brown Erdman" },
	{  7, "Los Angeles Galaxy" },
	{  8,      "Berneice Hand" },
	{  9,      "Ryley Goldner" },
	{ 10,        "D.C. United" }
};

#endif