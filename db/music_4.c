/*
Database "music_4" contains tables:
	artist
	music_festival
	volume
*/

#ifndef MUSIC_4
#define MUSIC_4

struct T_artist {
	double artist_id;
	char artist[12];
	double age;
	char famous_title[40];
	char famous_release_date[17];
};

struct T_music_festival {
	double id;
	char music_festival[28];
	char date_of_ceremony[17];
	char category[16];
	double volume;	// --> volume.volume_id
	char result[10];
};

struct T_volume {
	double volume_id;
	char volume_issue[9];
	char issue_date[30];
	double weeks_on_top;
	char song[30];
	double artist_id;	// --> artist.artist_id
};

struct T_artist
artist[] = {
	{ 1,   "Gorgoroth", 34,                             "Bergen 1996",    "November 2007" },
	{ 2,  "Ophiolatry", 35,                           "Transmutation", "January 21, 2008" },
	{ 3,  "Ophiolatry", 22, "Antievangelistical Process (re-release)",             "2009" },
	{ 4, "Black Flame", 18,                                "Imperivm",    "June 23, 2008" },
	{ 5, "Tangorodrim", 35,           "Unholy Metal Way (re-release)",             "2009" },
	{ 6, "Tangorodrim", 27,        "Those Who Unleashed (re-release)",             "2009" },
	{ 7,   "Triumfall", 49,                 "Antithesis of All Flesh",    "June 15, 2009" }
};

struct T_music_festival
music_festival[] = {
	{ 1,  "34th England Academy Prize", "18 February 2011",       "Best Song", 1, "Nominated" },
	{ 2,    "34th Japan Academy Prize", "18 February 2011",     "Best Lyrics", 2, "Nominated" },
	{ 3, "34th European Academy Prize", "18 February 2011",       "Best Song", 3,   "Awarded" },
	{ 4,    "36th Japan Academy Prize", "18 February 2011",       "Best Song", 4,   "Awarded" },
	{ 5,      "34th USA Academy Prize", "18 February 2011",       "Best Song", 5, "Nominated" },
	{ 6,    "40th Japan Academy Prize", "18 February 2011",       "Best Song", 6, "Nominated" },
	{ 7,   "37th Sweden Academy Prize", "18 February 2011",     "Best Lyrics", 7, "Nominated" },
	{ 8, "37th Canadian Academy Prize", "18 February 2011",     "Best Lyrics", 8, "Nominated" },
	{ 9,    "35th China Academy Prize", "18 February 2011", "Best Sound Song", 9,   "Awarded" }
};

struct T_volume
volume[] = {
	{  1,  "45:14 §", "27 December 1986 - 10 January", 3.0,                      " The Way", 1 },
	{  2,    "45:15",                    "17 January", 1.0,  " Everybody Have Fun Tonight ", 2 },
	{  3,    "45:16",                    "24 January", 1.0,       " Walk Like an Egyptian ", 1 },
	{  4, "45:21-22",         "28 February - 7 March", 2.0, " Touch Me (I Want Your Body) ", 2 },
	{  5,     "46:5",                         "9 May", 1.0,         " With or Without You ", 1 },
	{  6,   "46:6-8",               "16 May - 30 May", 3.0,  " (I Just) Died in Your Arms ", 1 },
	{  7,     "46:9",                        "6 June", 1.0,              " La Isla Bonita ", 4 },
	{  8,    "46:10",                       "13 June", 1.0,        "Looking for a New Love", 5 },
	{  9, "46:14-15",             "11 July - 18 July", 2.0,                      " Always ", 6 },
	{ 10,    "46:16",                       "25 July", 1.0,                  "Head to Toe ", 5 }
};

#endif