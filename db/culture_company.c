/*
Database "culture_company" contains tables:
	book_club
	culture_company
	movie
*/

#ifndef CULTURE_COMPANY
#define CULTURE_COMPANY

struct T_book_club {
	double book_club_id;
	double year;
	char author_or_editor[20];
	char book_title[31];
	char publisher[25];
	char category[11];
	char result[9];
};

struct T_culture_company {
	char company_name[45];
	char type[14];
	char incorporated_in[10];
	double group_equity_shareholding;
	char book_club_id[2];	// --> book_club.book_club_id
	char movie_id[2];	// --> movie.movie_id
};

struct T_movie {
	double movie_id;
	char title[24];
	double year;
	char director[20];
	double budget_million;
	double gross_worldwide;
};

struct T_book_club
book_club[] = {
	{  1, 1989,        "Michael Nava",                      "Goldenboy",                   "Alyson",   "Gay M/SF", "Won [A ]" },
	{  2, 1989,         "Donald Ward",          "Death Takes the Stage",       "St. Martin's Press",   "Gay M/SF",      "Nom" },
	{  3, 1989,      "Michael Bishop",               "Unicorn Mountain",           "William Morrow",   "Gay M/SF",      "Nom" },
	{  4, 1989,       "Joseph Hansen",                      "Obedience",         "Mysterious Press",   "Gay M/SF",      "Nom" },
	{  5, 1989,         "George Baxt",                      "Whoӳ Next", "International Polygonics",   "Gay M/SF",      "Nom" },
	{  6, 1989, "Antoinette Azolakov",                      "Skiptrace",             "Banned Books", "Lesb. M/SF",      "Won" },
	{  7, 1989,        "Claire McNab",              "Lessons In Murder",              "Naiad Press", "Lesb. M/SF",      "Nom" },
	{  8, 1989,          "Judy Grahn",                 "Mundaneӳ World",           "Crossing Press", "Lesb. M/SF",      "Nom" },
	{  9, 1989,      "Dolores Klaich",                     "Heavy Gilt",              "Naiad Press", "Lesb. M/SF",      "Nom" },
	{ 10, 1989,         "Sandy Bayer",            "The Crystal Curtain",                   "Alyson", "Lesb. M/SF",      "Nom" },
	{ 11, 1990,  "Jeffrey N. McMahan",         "Somewhere in the Night",                   "Alyson",   "Gay SF/F", "Won [B ]" },
	{ 12, 1990,        "Thom Nickels", "Walking Water / After All This",             "Banned Books",   "Gay SF/F",      "Nom" }
};

struct T_culture_company
culture_company[] = {
	{                                "Culture China",     "Corporate",     "China", 18.77, "1", "2" },
	{                          "Culture China Cargo", "Joint Venture",     "China",  49.0, "2", "3" },
	{                            "Culture Hong Kong", "Joint Venture", "Hong Kong",  60.0, "3", "4" },
	{                                    "Dragonair",    "Subsidiary", "Hong Kong", 100.0, "5", "7" },
	{                       "Cathay Pacific Culture",    "Subsidiary", "Hong Kong", 100.0, "5", "5" },
	{ "Cathay Pacific Culture Services (HK) Limited",    "Subsidiary", "Hong Kong", 100.0, "6", "6" }
};

struct T_movie
movie[] = {
	{  1,     "The Boondock Saints", 1999,          "Troy Duffy",  6.0,     30471 },
	{  2,          "The Big Kahuna", 1999,       "John Swanbeck",  7.0,   3728888 },
	{  3,           "Storm Catcher", 1999,      "Anthony Hickox",  5.0,     40500 },
	{  4,               "Jill Rips", 2000,      "Anthony Hickox",  4.0,    456774 },
	{  5,    "The Whole Nine Yards", 2000,       "Jonathan Lynn", 41.3, 106371651 },
	{  6,       "Battlefield Earth", 2000,     "Roger Christian", 44.0,  29725663 },
	{  7,              "Get Carter", 2000,         "Stephen Kay", 63.6,  19412993 },
	{  8,          "The Art of War", 2000,    "Christian Duguay", 60.0,  40400425 },
	{  9,               "Agent Red", 2000,          "Damian Lee", 47.0,    543356 },
	{ 10, "3000 Miles to Graceland", 2001, "Demian Lichtenstein", 62.0,  18720175 }
};

#endif