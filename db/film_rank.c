/*
Database "film_rank" contains tables:
	film
	film_market_estimation
	market
*/

#ifndef FILM_RANK
#define FILM_RANK

struct T_film {
	double film_id;
	char title[36];
	char studio[20];
	char director[21];
	double gross_in_dollar;
};

struct T_film_market_estimation {
	double estimation_id;
	double low_estimate;
	double high_estimate;
	double film_id;	// --> film.film_id
	char type[21];
	double market_id;	// --> market.market_id
	double year;
};

struct T_market {
	double market_id;
	char country[7];
	double number_cities;
};

struct T_film
film[] = {
	{  1,            "ET the Extra-Terrestrial",           "Universal",     "Steven Spielberg", 435110554 },
	{  2,                             "Tootsie",            "Columbia",       "Sydney Pollack", 177200000 },
	{  3,          "An Officer and a Gentleman", "Paramount / Lorimar",      "Taylor Hackford", 129795554 },
	{  4,                           "Rocky III",      "United Artists",   "Sylvester Stallone", 125049125 },
	{  5,                             "Porky's",    "20th Century Fox",            "Bob Clark", 109492484 },
	{  6,     "Star Trek II: The Wrath of Khan",           "Paramount",       "Nicholas Meyer",  79912963 },
	{  7,                              "48 Hrs",           "Paramount",          "Walter Hill",  78868508 },
	{  8,                         "Poltergeist",                 "MGM",          "Tobe Hooper",  76606280 },
	{  9, "The Best Little Whorehouse in Texas",     "Universal / RKO",        "Colin Higgins",  69701637 },
	{ 10,                               "Annie",   "Columbia / Rastar",          "John Huston",  57059003 },
	{ 11,                         "The Verdict",    "20th Century Fox",         "Sidney Lumet",  53977250 },
	{ 12,                              "Gandhi",            "Columbia", "Richard Attenborough",  52767889 },
	{ 13,                         "First Blood",     "Orion / Carolco",         "Ted Kotcheff",  47212904 }
};

struct T_film_market_estimation
film_market_estimation[] = {
	{ 1, 80000.0, 80400.0, 1,  "Mass suicide murder", 1, 1945 },
	{ 2,  8000.0,  8000.0, 2,         "Mass suicide", 2, 1944 },
	{ 3,  3000.0, 80400.0, 3, "Mass human sacrifice", 3, 1487 },
	{ 4,   960.0,   960.0, 4,         "Mass suicide", 2, 1973 },
	{ 5,   913.0,   913.0, 4,  "Mass suicide murder", 1, 1978 },
	{ 6,   300.0,  1000.0, 4,         "Mass suicide", 1, 2000 },
	{ 7,    53.0,    53.0, 4,         "Mass suicide", 1, 1994 },
	{ 8,    39.0,    39.0, 1,         "Mass suicide", 2, 1997 },
	{ 9,    16.0,    16.0, 1,         "Mass suicide", 3, 1995 }
};

struct T_market
market[] = {
	{ 1,  "Japan", 209 },
	{ 2,  "China", 540 },
	{ 3,    "USA", 700 },
	{ 4, "Russia", 231 },
	{ 5, "France", 212 },
	{ 6, "Poland", 453 }
};

#endif