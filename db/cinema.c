/*
Database "cinema" contains tables:
	cinema
	film
	schedule
*/

#ifndef CINEMA
#define CINEMA

struct T_cinema {
	double cinema_id;
	char name[13];
	double openning_year;
	double capacity;
	char location[17];
};

struct T_film {
	double film_id;
	double rank_in_series;
	double number_in_season;
	char title[33];
	char directed_by[23];
	char original_air_date[29];
	char production_code[12];
};

struct T_schedule {
	double cinema_id;	// --> cinema.cinema_id
	double film_id;	// --> film.film_id
	char date[8];
	double show_times_per_day;
	double price;
};

struct T_cinema
cinema[] = {
	{  1,      "Codling", 2010, 1100,   "County Wicklow" },
	{  2,  "Carrowleagh", 2012,  368,      "County Cork" },
	{  3, "Dublin Array", 2015,  364,    "County Dublin" },
	{  4,     "Glenmore", 2009,  305,     "County Clare" },
	{  5,     "Glenough", 2010,  325, "County Tipperary" },
	{  6,    "Gortahile", 2010,  208,     "County Laois" },
	{  7, "Grouse Lodge", 2011,  203, "County Tipperary" },
	{  8,   "Moneypoint", 2011,  225,     "County Clare" },
	{  9, "Mount Callan", 2011,  908,     "County Clare" },
	{ 10,        "Oriel", 2013,  330,     "County Louth" }
};

struct T_film
film[] = {
	{ 1, 26, 1,  "The Case of the Mystery Weekend",         "Bill Schreiner",        "September 21–25, 1992", "50021–50025" },
	{ 2, 27, 2,      "The Case of the Smart Dummy",         "Bill Schreiner", "September 28–October 2, 1992", "50231–50235" },
	{ 3, 28, 3,         "The Case: Off the Record",         "Bill Schreiner",            "October 5–9, 1992", "50011–50015" },
	{ 4, 29, 4, "The Case of the Bermuda Triangle", "Jesus Salvador Treviño",          "October 12–16, 1992", "50251–50255" },
	{ 5, 30, 5,     "The Case of the Piggy Banker",         "Bill Schreiner",          "October 19–23, 1992", "50241–50245" }
};

struct T_schedule
schedule[] = {
	{  1, 1,  "21 May", 5, 12.99 },
	{  1, 2,  "21 May", 3, 12.99 },
	{  1, 3,  "21 Jun", 2,  8.99 },
	{  2, 1, "11 July", 5,  9.99 },
	{  6, 5,   "2 Aug", 4, 12.99 },
	{  9, 4,  "20 May", 5,  9.99 },
	{ 10, 1,  "19 May", 5, 15.99 }
};

#endif