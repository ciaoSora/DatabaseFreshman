/*
Database "body_builder" contains tables:
	body_builder
	people
*/

#ifndef BODY_BUILDER
#define BODY_BUILDER

struct T_body_builder {
	double body_builder_id;
	double people_id;	// --> people.people_id
	double snatch;
	double clean_jerk;
	double total;
};

struct T_people {
	double people_id;
	char name[14];
	double height;
	double weight;
	char birth_date[18];
	char birth_place[27];
};

struct T_body_builder
body_builder[] = {
	{ 1, 1, 142.5, 175.0, 317.5 },
	{ 2, 2, 137.5, 177.5, 315.0 },
	{ 3, 3, 140.0, 175.0, 315.0 },
	{ 4, 5, 137.5, 175.0, 312.5 },
	{ 5, 6, 130.0, 162.5, 292.5 }
};

struct T_people
people[] = {
	{ 1, "Jack Campbell", 182.0,  80.0,   "January 1, 1992",       "Port Huron, Michigan" },
	{ 2,    "Ty Conklin", 192.0,  90.0,    "March 30, 1976",          "Anchorage, Alaska" },
	{ 3,    "Al Montoya", 195.0, 100.0, "February 13, 1985",         "Glenview, Illinois" },
	{ 4,    "Mark Fayne", 215.0, 102.0,       "May 5, 1987",      "Nashua, New Hampshire" },
	{ 5,    "Cam Fowler", 196.0,  89.0,  "December 5, 1991", "Farmington Hills, Michigan" },
	{ 6, "Jake Gardiner", 205.0,  92.0,      "July 4, 1990",      "Minnetonka, Minnesota" }
};

#endif