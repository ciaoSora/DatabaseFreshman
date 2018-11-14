/*
Database "manufacturer" contains tables:
	furniture
	furniture_manufacte
	manufacturer
*/

#ifndef MANUFACTURER
#define MANUFACTURER

struct T_furniture {
	double furniture_id;
	char name[16];
	double num_of_component;
	double market_rate;
};

struct T_furniture_manufacte {
	double manufacturer_id;	// --> manufacturer.manufacturer_id
	double furniture_id;	// --> furniture.furniture_id
	double price_in_dollar;
};

struct T_manufacturer {
	double manufacturer_id;
	double open_year;
	char name[16];
	double num_of_factories;
	double num_of_shops;
};

struct T_furniture
furniture[] = {
	{ 1,  "Billiard table", 14, 52.5 },
	{ 2,        "Chabudai",  4, 40.0 },
	{ 3,        "Bookcase",  6,  1.0 },
	{ 4,        "Hatstand",  5,  0.5 },
	{ 5,           "Bench",  5,  3.5 },
	{ 6, "Four-poster bed",  3,  2.0 },
	{ 7,      "Dining set", 12,  0.5 }
};

struct T_furniture_manufacte
furniture_manufacte[] = {
	{ 1, 3,  239.0 },
	{ 4, 2,  450.0 },
	{ 7, 7, 2124.0 },
	{ 5, 1,  443.0 },
	{ 7, 4, 1234.0 }
};

struct T_manufacturer
manufacturer[] = {
	{ 1, 1980.0, "Chevrolet House", 36,  8 },
	{ 2, 1990.0,            "IKEA", 21, 19 },
	{ 3, 1991.0,       "Ford Make", 12,  2 },
	{ 4, 1992.0,           "Jiaju",  1, 35 },
	{ 5, 2000.0,       "Chevrolet", 38, 24 },
	{ 6, 2001.0,           "Dodge",  3,  7 },
	{ 7, 2008.0,        "Tomorrow", 12,  4 }
};

#endif