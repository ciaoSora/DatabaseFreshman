/*
Database "school_bus" contains tables:
	driver
	school
	school_bus
*/

#ifndef SCHOOL_BUS
#define SCHOOL_BUS

struct T_driver {
	double driver_id;
	char name[16];
	char party[4];
	char home_city[14];
	double age;
};

struct T_school {
	double school_id;
	char grade[24];
	char school[35];
	char location[25];
	char type[17];
};

struct T_school_bus {
	double school_id;	// --> school.school_id
	double driver_id;	// --> driver.driver_id
	double years_working;
	char if_full_time[2];
};

struct T_driver
driver[] = {
	{  1,  "Matthew Ritter", "Dem",      "Hartford", 40 },
	{  2,      "Dan Carter", "Rep",        "Bethel", 30 },
	{  3, "Minnie Gonzalez", "Dem",      "Hartford", 46 },
	{  4,      "Angel Acre", "Dem",      "Hartford", 42 },
	{  5,   "Brandon McGee", "Dem",      "Hartford", 45 },
	{  6,    "Edwin Vargas", "Dem",      "Hartford", 52 },
	{  7, "Douglas McCrory", "Dem",      "Hartford", 36 },
	{  8,  "Timothy Ackert", "Rep",      "Coventry", 35 },
	{  9,     "Jason Rojas", "Dem", "East Hartford", 38 },
	{ 10,     "Henry Genga", "Dem", "East Hartford", 37 },
	{ 11,      "Tim Larson", "Dem", "East Hartford", 36 },
	{ 12, "Geoff Luxenberg", "Dem",    "Manchester", 52 }
};

struct T_school
school[] = {
	{ 1,            "Kindergarten",          "Noelani Elementary School",         "Honolulu, Hawaii",           "Public" },
	{ 2,           "1st-3rd grade",                 "St. Francis Assisi",       "Jakarta, Indonesia", "Private Catholic" },
	{ 3,               "4th grade", "State Elementary School Menteng 01",       "Jakarta, Indonesia",           "Public" },
	{ 4,          "5th-12th grade",                     "Punahou School",         "Honolulu, Hawaii",          "Private" },
	{ 5, "Freshman–Sophomore year",                 "Occidental College",  "Los Angeles, California",          "Private" },
	{ 6,      "Junior–Senior year",                "Columbia University",            "New York City",          "Private" },
	{ 7,                 "College",                 "Harvard Law School", "Cambridge, Massachusetts",          "Private" }
};

struct T_school_bus
school_bus[] = {
	{ 1, 10, 10, "F" },
	{ 5,  7,  8, "T" },
	{ 3,  4,  6, "T" },
	{ 7,  9,  2, "T" },
	{ 4,  3,  3, "T" }
};

#endif