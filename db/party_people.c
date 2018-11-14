/*
Database "party_people" contains tables:
	member
	party
	party_events
	region
*/

#ifndef PARTY_PEOPLE
#define PARTY_PEOPLE

struct T_member {
	double member_id;
	char member_name[18];
	char party_id[2];	// --> party.party_id
	char in_office[21];
};

struct T_party {
	double party_id;
	char minister[24];
	char took_office[5];
	char left_office[5];
	double region_id;	// --> region.region_id
	char party_name[25];
};

struct T_party_events {
	double event_id;
	char event_name[17];
	double party_id;	// --> party.party_id
	double member_in_charge_id;	// --> member.member_id
};

struct T_region {
	double region_id;
	char region_name[15];
	char date[13];
	char label[12];
	char format[11];
	char catalogue[11];
};

struct T_member
member[] = {
	{  1,   "Hon Tony Abbott", "3",         "1994–present" },
	{  2,    "Hon Dick Adams", "2",            "1993–2013" },
	{  3,  "Anthony Albanese", "2",         "1996–present" },
	{  4, "Hon John Anderson", "1",            "1989–2007" },
	{  5,      "Peter Andren", "3",            "1996–2007" },
	{  6, "Hon Kevin Andrews", "3",         "1991–present" },
	{  7,   "Hon Fran Bailey", "3", "1990–1993, 1996–2010" },
	{  8,   "Hon Bruce Baird", "3",            "2001–2007" },
	{  9,        "Mark Baker", "3",            "2004–2007" },
	{ 10,   "Hon Bob Baldwin", "3",         "2001–present" },
	{ 11,      "Phil Barresi", "3",            "1996–2007" },
	{ 12,    "Kerry Bartlett", "1",            "1996–2007" },
	{ 13,   "Hon Kim Beazley", "2",            "1980–2007" },
	{ 14,    "Hon Arch Bevis", "2",            "1990–2010" },
	{ 15, "Hon Bruce Billson", "3",         "1996–present" }
};

struct T_party
party[] = {
	{ 1,  "Dr. Kwame Nkrumah (MP)", "1957", "1958", 1, "Convention Peoples Party" },
	{ 2,        "Kojo Botsio (MP)", "1958", "1959", 2,           "Progress Party" },
	{ 3, "Ebenezer Ako-Adjei (MP)", "1959", "1960", 3,                        "3" },
	{ 4,        "Imoru Egala (MP)", "1960", "1961", 4,   "Convention Union Party" },
	{ 5, "Ebenezer Ako-Adjei (MP)", "1961", "1962", 5,           "Sinefine Party" }
};

struct T_party_events
party_events[] = {
	{ 1,  "Annaual Meeting", 1,  4 },
	{ 2,       "Conference", 1, 12 },
	{ 3,  "Annaual Meeting", 2,  2 },
	{ 4,   "Budget Meeting", 2,  3 },
	{ 5,  "Annaual Meeting", 3, 10 },
	{ 6, "Election Meeting", 3, 11 },
	{ 7,   "Budget Meeting", 3, 15 },
	{ 8, "Election Meeting", 1,  4 }
};

struct T_region
region[] = {
	{ 1, "United Kingdom",  "1 July 2002",  "Parlophone",         "CD",   "540 3622" },
	{ 2, "United Kingdom",  "1 July 2002",  "Parlophone",      "2× LP",   "539 9821" },
	{ 3,          "Japan",  "3 July 2002", "Toshiba-EMI",         "CD", "TOCP-66045" },
	{ 4,  "United States", "16 July 2002", "Astralwerks",         "CD",  "ASW 40362" },
	{ 5,  "United States", "16 July 2002", "Astralwerks", "CD digipak",  "ASW 40522" }
};

#endif