/*
Database "journal_committee" contains tables:
	editor
	journal
	journal_committee
*/

#ifndef JOURNAL_COMMITTEE
#define JOURNAL_COMMITTEE

struct T_editor {
	double editor_id;
	char name[18];
	double age;
};

struct T_journal {
	double journal_id;
	char date[19];
	char theme[24];
	double sales;
};

struct T_journal_committee {
	double editor_id;	// --> editor.editor_id
	double journal_id;	// --> journal.journal_id
	char work_type[8];
};

struct T_editor
editor[] = {
	{ 1,    "Kamila Porczyk", 34.0 },
	{ 2,     "Anna Powierza", 35.0 },
	{ 3,      "Marek Siudym", 21.0 },
	{ 4,   "Piotr Pręgowski", 43.0 },
	{ 5,      "Szymon Wydra", 20.0 },
	{ 6, "Władysław Grzywna", 24.0 },
	{ 7,  "Mariusz Zalejski", 25.0 },
	{ 8, "Grażyna Wolszczak", 54.0 },
	{ 9,   "Maria Góralczyk", 38.0 }
};

struct T_journal
journal[] = {
	{  1,  "September 9, 2001",          "Miami Dolphins",  798 },
	{  2, "September 23, 2001", "at Jacksonville Jaguars",  994 },
	{  4,    "October 7, 2001",     "at Baltimore Ravens", 7494 },
	{  5,   "October 14, 2001",    "Tampa Bay Buccaneers", 4798 },
	{  6,   "October 21, 2001",        "at Detroit Lions", 2940 },
	{  7,   "October 29, 2001",  "at Pittsburgh Steelers", 1763 },
	{  8,   "November 4, 2001",    "Jacksonville Jaguars", 1232 },
	{  9,  "November 12, 2001",        "Baltimore Ravens", 6532 },
	{ 10,  "November 18, 2001",   "at Cincinnati Bengals", 3421 },
	{ 11,  "November 25, 2001",     "Pittsburgh Steelers", 3342 },
	{ 12,   "December 2, 2001",     "at Cleveland Browns", 3534 },
	{ 13,   "December 9, 2001",    "at Minnesota Vikings", 4271 },
	{ 14,  "December 16, 2001",       "Green Bay Packers", 2804 },
	{ 15,  "December 22, 2001",      "at Oakland Raiders", 1934 },
	{ 16,  "December 30, 2001",        "Cleveland Browns", 3798 },
	{ 17,    "January 6, 2002",      "Cincinnati Bengals", 5342 }
};

struct T_journal_committee
journal_committee[] = {
	{ 1, 13,   "Photo" },
	{ 8, 17, "Article" },
	{ 6, 11,   "Photo" },
	{ 4,  2, "Article" },
	{ 3,  6,   "Title" },
	{ 9, 12,   "Photo" },
	{ 8,  4,   "Photo" }
};

#endif