/*
Database "workshop_paper" contains tables:
	acceptance
	submission
	workshop
*/

#ifndef WORKSHOP_PAPER
#define WORKSHOP_PAPER

struct T_acceptance {
	double submission_id;	// --> submission.submission_id
	double workshop_id;	// --> workshop.workshop_id
	char result[9];
};

struct T_submission {
	double submission_id;
	double scores;
	char author[15];
	char college[17];
};

struct T_workshop {
	double workshop_id;
	char date[17];
	char venue[16];
	char name[20];
};

struct T_acceptance
acceptance[] = {
	{ 2, 5, "Accepted" },
	{ 2, 3, "Rejected" },
	{ 3, 2, "Rejected" },
	{ 4, 6, "Rejected" },
	{ 5, 6, "Rejected" },
	{ 1, 1, "Accepted" }
};

struct T_submission
submission[] = {
	{  1, 72.0,  "Steve Niehaus",       "Notre Dame" },
	{  2, 79.0,    "Sammy Green",          "Florida" },
	{  3, 78.0,  "Sherman Smith",       "Miami (OH)" },
	{  4, 79.0,   "Steve Raible",     "Georgia Tech" },
	{  5, 82.0,     "Jeff Lloyd", "West Texas State" },
	{  6, 89.0,    "Rick Engles",            "Tulsa" },
	{  7, 92.0, "Don Bitterlich",           "Temple" },
	{  8, 93.0,     "Steve Myer",       "New Mexico" },
	{  9, 82.0,  "Randy Johnson",          "Georgia" },
	{ 10, 83.0,    "Andy Bolton",             "Fisk" }
};

struct T_workshop
workshop[] = {
	{ 1,  "August 18, 2007",       "London UK",            "ABC 2007" },
	{ 2,  "August 21, 2007",       "London UK",     "Conference 2007" },
	{ 3,  "August 25, 2007",  "New Jersey USA",       "Workshop 2007" },
	{ 4,  "October 8, 2007",    "New York USA",  "2007 qualification" },
	{ 5, "January 14, 2008",    "New York USA",  "2008 qualification" },
	{ 6,     "July 5, 2011", "Istanbul Turkey", "Anual Workshop 2011" }
};

#endif