/*
Database "phone_market" contains tables:
	market
	phone
	phone_market
*/

#ifndef PHONE_MARKET
#define PHONE_MARKET

struct T_market {
	double market_id;
	char district[17];
	double num_of_employees;
	double num_of_shops;
	double ranking;
};

struct T_phone {
	char name[10];
	double phone_id;
	double memory_in_g;
	char carrier[8];
	double price;
};

struct T_phone_market {
	double market_id;	// --> market.market_id
	char phone_id[2];	// --> phone.phone_id
	double num_of_stock;
};

struct T_market
market[] = {
	{ 1,          "Alberta", 1966, 40.0,  1 },
	{ 2, "British Columbia", 1965, 49.0, 21 },
	{ 3,    "New Brunswick", 1978, 10.0,  4 },
	{ 4,      "Nova Scotia", 1968, 32.0,  5 },
	{ 5,          "Ontario", 1958, 54.0,  3 },
	{ 6,           "Quebec", 1958, 54.0,  8 }
};

struct T_phone
phone[] = {
	{ "IPhone 5s", 1,  32,  "Sprint",  320.0 },
	{  "IPhone 6", 5, 128,  "Sprint",  480.0 },
	{ "IPhone 6s", 2, 128, "TMobile",  699.0 },
	{  "IPhone 7", 4,  16, "TMobile",  899.0 },
	{  "IPhone X", 3,  64, "TMobile", 1000.0 }
};

struct T_phone_market
phone_market[] = {
	{ 1, "1", 2232 },
	{ 2, "2", 4324 },
	{ 1, "4",  874 },
	{ 5, "1",  682 },
	{ 2, "3",  908 },
	{ 6, "3", 1632 }
};

#endif