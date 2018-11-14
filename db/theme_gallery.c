/*
Database "theme_gallery" contains tables:
	artist
	exhibition
	exhibition_record
*/

#ifndef THEME_GALLERY
#define THEME_GALLERY

struct T_artist {
	double artist_id;
	char name[13];
	char country[14];
	double year_join;
	double age;
};

struct T_exhibition {
	double exhibition_id;
	double year;
	char theme[47];
	double artist_id;	// --> artist.artist_id
	double ticket_price;
};

struct T_exhibition_record {
	double exhibition_id;	// --> exhibition.exhibition_id
	char date[12];
	double attendance;
};

struct T_artist
artist[] = {
	{ 1,  "Vijay Singh",          "Fiji", 1998, 45 },
	{ 2,    "John Daly", "United States", 1991, 46 },
	{ 3, "Paul Azinger", "United States", 1993, 47 },
	{ 4,  "Jeff Sluman", "United States", 1988, 57 },
	{ 5,  "Mark Brooks", "United States", 1996, 48 },
	{ 6,   "Nick Price",      "Zimbabwe", 1994, 48 },
	{ 7, "Larry Nelson", "United States", 1981, 50 }
};

struct T_exhibition
exhibition[] = {
	{ 1, 2004,                                    "Santa Claus", 1, 19.95 },
	{ 2, 2005,                             "Christmas stocking", 2, 19.95 },
	{ 3, 2006, "Santa Claus and Rudolph the Red-Nosed Reindeer", 4, 14.95 },
	{ 4, 2007,                                 "Christmas Tree", 1, 16.95 },
	{ 5, 2008,                                         "Spring", 6, 29.95 },
	{ 6, 2009,                                         "Summer", 3,  9.95 }
};

struct T_exhibition_record
exhibition_record[] = {
	{ 1,  "December 2",   965 },
	{ 1,  "December 5",  1098 },
	{ 1,  "December 7",  2983 },
	{ 2,  "December 9",  1239 },
	{ 2, "December 12",  1313 },
	{ 2, "December 13", 10908 },
	{ 3, "December 16",  1134 },
	{ 3, "February 19",  1233 },
	{ 3, "February 21",  9089 },
	{ 4, "February 23",  3139 },
	{ 5, "February 25", 24808 },
	{ 5, "February 26", 13142 },
	{ 5, "February 28",  4231 }
};

#endif