/*
Database "roller_coaster" contains tables:
	country
	roller_coaster
*/

#ifndef ROLLER_COASTER
#define ROLLER_COASTER

struct T_country {
	double country_id;
	char name[8];
	double population;
	double area;
	char languages[16];
};

struct T_roller_coaster {
	double roller_coaster_id;
	char name[17];
	char park[16];
	double country_id;	// --> country.country_id
	double length;
	double height;
	char speed[5];
	char opened[16];
	char status[10];
};

struct T_country
country[] = {
	{ 1, "Austria", 8206524,  83871,          "German" },
	{ 2, "Finland", 5261008, 338145, "Finnish Swedish" },
	{ 3,  "Sweden", 9047752, 449964,         "Swedish" }
};

struct T_roller_coaster
roller_coaster[] = {
	{ 1, "Boardwalk Bullet", "Kemah Boardwalk", 1, 3236.0,  96.0,   "51", "August 31, 2007", "Operating" },
	{ 2,   "Dauling Dragon",    "Happy Valley", 1, 3914.0, 105.0,   "55",            "2012", "Operating" },
	{ 3,        "Hades 360",     "Mt. Olympus", 1, 4726.0, 136.0,   "70",    "May 14, 2005", "Operating" },
	{ 4,  "Ravine Flyer II",       "Waldameer", 2, 2900.0, 120.0,   "57",    "May 17, 2008", "Operating" },
	{ 5,          "Twister",      "Gröna Lund", 2, 1574.0,  50.0, "37.9",            "2011", "Operating" },
	{ 6,       "The Voyage",   "Holiday World", 3, 6442.0, 163.0,   "67",     "May 6, 2006", "Operating" }
};

#endif