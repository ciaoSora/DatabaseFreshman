/*
Database "entertainment_awards" contains tables:
	artwork
	festival_detail
	nomination
*/

#ifndef ENTERTAINMENT_AWARDS
#define ENTERTAINMENT_AWARDS

struct T_artwork {
	double artwork_id;
	char type[29];
	char name[16];
};

struct T_festival_detail {
	double festival_id;
	char festival_name[17];
	char chair_name[14];
	char location[14];
	double year;
	double num_of_audience;
};

struct T_nomination {
	double artwork_id;	// --> artwork.artwork_id
	double festival_id;	// --> festival_detail.festival_id
	char result[10];
};

struct T_artwork
artwork[] = {
	{ 1,   "Program Music/Variety Show", "Indonesian Idol" },
	{ 2,   "Program Music/Variety Show",          "I Know" },
	{ 3, "Presenter Music/Variety Show",      "Loving you" },
	{ 4,   "Program Music/Variety Show",             "Why" },
	{ 5, "Presenter Music/Variety Show",            "Boys" },
	{ 6,          "Program Talent Show",            "Cats" },
	{ 7,        "Presenter Talent Show",  "Daniel Mananta" },
	{ 8,          "Program Talent Show",          "Martin" },
	{ 9,        "Presenter Talent Show",       "Back Home" }
};

struct T_festival_detail
festival_detail[] = {
	{ 1, "Panasonic Awards", "Raymond Floyd", "United States", 2006, 152 },
	{ 2,    "Flower Awards", "Charles Coody", "United States", 2007, 155 },
	{ 3,    "Cherry Awards",     "Doug Ford", "United States", 2007, 160 },
	{ 4,     "Gobel Awards", "Arnold Palmer", "United States", 2008, 160 },
	{ 5,        "LA Awards",       "Lucy Lu", "United States", 2010, 161 }
};

struct T_nomination
nomination[] = {
	{ 1, 2, "Nominated" },
	{ 2, 2,       "Won" },
	{ 3, 1, "Nominated" },
	{ 4, 1,       "Won" },
	{ 8, 5, "Nominated" },
	{ 9, 5, "Nominated" }
};

#endif