/*
Database "wedding" contains tables:
	church
	people
	wedding
*/

#ifndef WEDDING
#define WEDDING

struct T_church {
	double church_id;
	char name[51];
	char organized_by[17];
	double open_date;
	char continuation_of[44];
};

struct T_people {
	double people_id;
	char name[16];
	char country[17];
	char is_male[2];
	double age;
};

struct T_wedding {
	double church_id;	// --> church.church_id
	double male_id;	// --> people.people_id
	double female_id;	// --> people.people_id
	double year;
};

struct T_church
church[] = {
	{ 1,                              "Pure Church of Christ",      "Wycam Clark", 1831,                            "Church of Christ" },
	{ 2,                                 "Independent Church",          "– Hoton", 1832,                            "Church of Christ" },
	{ 3,                                   "Church of Christ",       "Ezra Booth", 1836,             "Church of the Latter Day Saints" },
	{ 4,                      "Church of Christ (Parrishite)",   "Warren Parrish", 1837,             "Church of the Latter Day Saints" },
	{ 5,                                      "Alston Church",    "Isaac Russell", 1839, "Church of Jesus Christ of Latter Day Saints" },
	{ 6,                                   "Church of Christ",   "William Chubby", 1830, "Church of Jesus Christ of Latter Day Saints" },
	{ 7, "Church of Jesus Christ, the Bride, the Lamb's Wife", "George M. Hinkle", 1840, "Church of Jesus Christ of Latter Day Saints" },
	{ 8,                                   "Church of Christ",       "Hiram Page", 1842, "Church of Jesus Christ of Latter Day Saints" },
	{ 9,   "True Church of Jesus Christ of Latter Day Saints",      "William Law", 1844, "Church of Jesus Christ of Latter Day Saints" }
};

struct T_people
people[] = {
	{  1,       "Mike Weir",           "Canada", "T", 34 },
	{  2,     "Juli Hanson",           "Sweden", "F", 32 },
	{  3,    "Ricky Barnes",    "United States", "T", 30 },
	{  4,    "Summer Duval",    "United States", "F", 30 },
	{  5,   "Todd Hamilton",    "United States", "T", 27 },
	{  6,   "Annie Mediate",    "United States", "F", 26 },
	{  7,    "Lucas Glover",    "United States", "T", 31 },
	{  8,      "Joe O'Hair",    "United States", "F", 31 },
	{  9, "Graeme McDowell", "Northern Ireland", "T", 34 },
	{ 10, "Jamie Mickelson",    "United States", "F", 36 },
	{ 11,      "Adam Scott",        "Australia", "T", 26 },
	{ 12,      "Danny Toms",    "United States", "F", 25 }
};

struct T_wedding
wedding[] = {
	{ 1, 1, 2, 2014 },
	{ 3, 3, 4, 2015 },
	{ 5, 5, 6, 2016 },
	{ 4, 7, 8, 2016 }
};

#endif