/*
Database "book_2" contains tables:
	book
	publication
*/

#ifndef BOOK_2
#define BOOK_2

struct T_book {
	double book_id;
	char title[30];
	double issues;
	char writer[20];
};

struct T_publication {
	double publication_id;
	double book_id;	// --> book.book_id
	char publisher[16];
	char publication_date[13];
	double price;
};

struct T_book
book[] = {
	{  1,                "The Black Lamb",  6.0,      "Timothy Truman" },
	{  2,                   "Bloody Mary",  4.0,         "Garth Ennis" },
	{  3,    "Bloody Mary : Lady Liberty",  4.0,         "Garth Ennis" },
	{  4,                     "BrainBanx",  6.0,          "Elaine Lee" },
	{  5,                     "Cyberella", 12.0,      "Howard Chaykin" },
	{  6,                    "Dead Corps",  4.0,    "Christopher Hinz" },
	{  7,         "The Dome: Ground Zero",  1.0,        "Dave Gibbons" },
	{  8,                  "Gemini Blood",  9.0,    "Christopher Hinz" },
	{  9, "Michael Moorcock's Multiverse", 12.0,    "Michael Moorcock" },
	{ 10,                   "Sheva's War",  5.0, "Christopher Moeller" }
};

struct T_publication
publication[] = {
	{ 1,  1,         "Pearson",  "August 2008", 15000000.0 },
	{ 2,  3, "Thomson Reuters",   "March 2008",  6000000.0 },
	{ 3,  4,           "Wiley",    "June 2006",  4100000.0 },
	{ 4,  5,           "Wiley", "October 2005",  3000000.0 },
	{ 5,  7, "Springer Nature",  "August 2008",  3000000.0 },
	{ 6,  9,         "Pearson",   "March 2007",  2000000.0 },
	{ 7, 10,     "Bertelsmann",   "April 2007",  2000000.0 }
};

#endif