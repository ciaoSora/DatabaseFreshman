/*
Database "singer" contains tables:
	singer
	song
*/

#ifndef SINGER
#define SINGER

struct T_singer {
	double singer_id;
	char name[20];
	double birth_year;
	double net_worth_millions;
	char citizenship[14];
};

struct T_song {
	double song_id;
	char title[32];
	double singer_id;	// --> singer.singer_id
	double sales;
	double highest_position;
};

struct T_singer
singer[] = {
	{ 1, "Liliane Bettencourt", 1944.0, 30.0,        "France" },
	{ 2,      "Christy Walton", 1948.0, 28.8, "United States" },
	{ 3,        "Alice Walton", 1949.0, 26.3, "United States" },
	{ 4,       "Iris Fontbona", 1942.0, 17.4,         "Chile" },
	{ 5,     "Jacqueline Mars", 1940.0, 17.8, "United States" },
	{ 6,       "Gina Rinehart", 1953.0, 17.0,     "Australia" },
	{ 7,     "Susanne Klatten", 1962.0, 14.3,       "Germany" },
	{ 8,     "Abigail Johnson", 1961.0, 12.7, "United States" }
};

struct T_song
song[] = {
	{ 1,     "Do They Know It's Christmas", 1, 1094000.0, 1.0 },
	{ 2, "F**k It (I Don't Want You Back)", 1,  552407.0, 1.0 },
	{ 3,                   "Cha Cha Slide", 2,  351421.0, 1.0 },
	{ 4,                      "Call on Me", 4,  335000.0, 1.0 },
	{ 5,                            "Yeah", 2,  300000.0, 1.0 },
	{ 6,                   "All This Time", 6,  292000.0, 1.0 },
	{ 7,              "Left Outside Alone", 5,  275000.0, 3.0 },
	{ 8,                 "Mysterious Girl", 7,  261000.0, 1.0 }
};

#endif