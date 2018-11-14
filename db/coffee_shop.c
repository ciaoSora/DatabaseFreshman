/*
Database "coffee_shop" contains tables:
	happy_hour
	happy_hour_member
	member
	shop
*/

#ifndef COFFEE_SHOP
#define COFFEE_SHOP

struct T_happy_hour {
	double hh_id;
	double shop_id;	// --> shop.shop_id
	char month[6];
	double num_of_shaff_in_charge;
};

struct T_happy_hour_member {
	double hh_id;
	double member_id;	// --> member.member_id
	double total_amount;
};

struct T_member {
	double member_id;
	char name[22];
	char membership_card[6];
	double age;
	double time_of_purchase;
	double level_of_membership;
	char address[11];
};

struct T_shop {
	double shop_id;
	char address[22];
	char num_of_staff[4];
	double score;
	char open_year[5];
};

struct T_happy_hour
happy_hour[] = {
	{  1,  1,   "May", 10 },
	{  2,  1, "April", 12 },
	{  3, 10,  "June", 15 },
	{  4,  5,  "July",  5 },
	{  5,  1,   "May", 10 },
	{  6,  1, "April", 12 },
	{  7,  2,  "June",  5 },
	{  8,  3,  "July", 15 },
	{  9,  3,   "May",  3 },
	{ 10,  3, "April",  4 }
};

struct T_happy_hour_member
happy_hour_member[] = {
	{ 1, 3,  20.9 },
	{ 4, 3, 20.92 },
	{ 7, 9,   4.9 },
	{ 2, 5,  16.9 },
	{ 5, 5, 16.92 },
	{ 8, 9,   4.2 }
};

struct T_member
member[] = {
	{  1,         "Ashby, Lazale", "Black", 29, 18,  5,   "Hartford" },
	{  2,        "Breton, Robert", "White", 67, 41,  4,  "Waterbury" },
	{  3,      "Campbell, Jessie", "Black", 34, 20,  6,   "Hartford" },
	{  4,         "Cobb, Sedrick", "Black", 51, 27,  2,  "Waterbury" },
	{  5,         "Hayes, Steven", "White", 50, 44,  3,   "Cheshire" },
	{  6, "Komisarjevsky, Joshua", "White", 33, 26,  2,   "Cheshire" },
	{  7,       "Peeler, Russell", "Black", 42, 26,  6, "Bridgeport" },
	{  8,     "Reynolds, Richard", "Black", 45, 24,  1,  "Waterbury" },
	{  9,           "Rizzo, Todd", "White", 35, 18,  4,  "Waterbury" },
	{ 10,          "Webb, Daniel", "Black", 51, 27, 22,   "Hartford" }
};

struct T_shop
shop[] = {
	{  1,      "1200 Main Street",  "13", 42.0, "2010" },
	{  2,      "1111 Main Street",  "19", 38.0, "2008" },
	{  3, "1330 Baltimore Street",  "42", 36.0, "2010" },
	{  4,     "909 Walnut Street",  "27", 32.0, "2010" },
	{  5,    "414 E. 12th Street",  "24", 30.0, "2011" },
	{  6,    "1201 Walnut Street",  "34", 30.0, "2010" },
	{  7,     "2345 McGee Street", "425", 40.0, "2008" },
	{  8,       "909 Main Street",  "28", 30.0, "2011" },
	{  9,      "1100 Main Street",  "23", 30.0, "2006" },
	{ 10,    "324 E. 11th Street",  "16", 28.0, "2008" }
};

#endif