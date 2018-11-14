/*
Database "debate" contains tables:
	debate
	debate_people
	people
*/

#ifndef DEBATE
#define DEBATE

struct T_debate {
	double debate_id;
	char date[18];
	char venue[17];
	double num_of_audience;
};

struct T_debate_people {
	double debate_id;	// --> debate.debate_id
	double affirmative;	// --> people.people_id
	double negative;	// --> people.people_id
	char if_affirmative_win[2];
};

struct T_people {
	double people_id;
	char district[12];
	char name[18];
	char party[24];
	double age;
};

struct T_debate
debate[] = {
	{ 1,  "October 21, 2011", "Manama , Bahrain", 342 },
	{ 2, "December 17, 2014",     "Doha , Qatar", 134 },
	{ 3,    "August 3, 2015", "Manama , Bahrain",  90 },
	{ 4,  "October 27, 2015", "Manama , Bahrain", 209 },
	{ 5,  "January 12, 2017",      "Dubai , UAE", 313 },
	{ 6,  "January 21, 2017",  "Abu Dhabi , UAE", 159 }
};

struct T_debate_people
debate_people[] = {
	{ 1, 1, 10, "F" },
	{ 5, 2,  8, "F" },
	{ 3, 4,  7, "T" },
	{ 6, 5,  6, "T" },
	{ 4, 5,  8, "F" }
};

struct T_people
people[] = {
	{  1,  "New York 1",  "Luther C. Carter",              "Republican", 35 },
	{  2,  "New York 2",    "James Humphrey",              "Republican", 38 },
	{  3,  "New York 3",    "Daniel Sickles",              "Democratic", 46 },
	{  4,  "New York 4",    "Thomas J. Barr",    "Independent Democrat", 48 },
	{  5,  "New York 5", "William B. Maclay",              "Democratic", 36 },
	{  6,  "New York 6",     "John Cochrane",              "Democratic", 46 },
	{  7,  "New York 7",     "George Briggs",              "Republican", 42 },
	{  8,  "New York 8",   "Horace F. Clark", "Anti-Lecompton Democrat", 45 },
	{  9,  "New York 9",    "John B. Haskin", "Anti-Lecompton Democrat", 43 },
	{ 10, "New York 10",  "Charles Van Wyck",              "Republican", 36 }
};

#endif