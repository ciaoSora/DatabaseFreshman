/*
Database "party_host" contains tables:
	host
	party
	party_host
*/

#ifndef PARTY_HOST
#define PARTY_HOST

struct T_host {
	double host_id;
	char name[15];
	char nationality[14];
	char age[3];
};

struct T_party {
	double party_id;
	char party_theme[22];
	char location[50];
	char first_year[5];
	char last_year[5];
	double number_of_hosts;
};

struct T_party_host {
	double party_id;	// --> party.party_id
	double host_id;	// --> host.host_id
	char is_main_in_charge[2];
};

struct T_host
host[] = {
	{  1,    "Austin Daye", "United States", "43" },
	{  2,  "Lloyd Daniels", "United States", "37" },
	{  3,   "Kornel David",       "Hungary", "31" },
	{  4,  "Antonio Davis", "United States", "26" },
	{  5,       "Ed Davis", "United States", "45" },
	{  6,   "Hubert Davis", "United States", "47" },
	{  7, "Carlos Delfino",     "Argentina", "30" },
	{  8, "Justin Dentmon", "United States", "40" },
	{  9,  "DeMar DeRozan", "United States", "31" },
	{ 10,   "Derrick Dial", "United States", "60" }
};

struct T_party
party[] = {
	{ 1,                "Spring",                                "Hemkade 48 Zaandam", "2000", "2001",  5 },
	{ 2,           "Club Q-BASE",                                "Hemkade 48 Zaandam", "2002", "2002", 23 },
	{ 3, "Hardcore Resurrection",                                 "Various locations", "2000", "2003",  4 },
	{ 4,             "Teqnology",                     "Heineken Music Hall Amsterdam", "2002", "2004",  6 },
	{ 5,             "Qlubtempo", "Hemkade 48 Zaandam, Heineken Music Hall Amsterdam", "2001", "2007", 31 },
	{ 6,             "QrimeTime",                     "Heineken Music Hall Amsterdam", "2004", "2007",  4 },
	{ 7,            "In Qontrol",                                     "RAI Amsterdam", "2004", "2010",  7 },
	{ 8,         "Houseqlassics",                                 "Various locations", "1999", "2010", 18 }
};

struct T_party_host
party_host[] = {
	{ 1,  1, "T" },
	{ 8,  7, "T" },
	{ 6, 10, "F" },
	{ 4,  2, "T" },
	{ 2,  5, "F" },
	{ 6,  3, "T" }
};

#endif