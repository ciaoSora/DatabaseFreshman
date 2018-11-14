/*
Database "manufactory_1" contains tables:
	manufacturers
	products
*/

#ifndef MANUFACTORY_1
#define MANUFACTORY_1

struct T_manufacturers {
	double code;
	char name[16];
	char headquarter[12];
	char founder[7];
	double revenue;
};

struct T_products {
	double code;
	char name[16];
	double price;
	double manufacturer;	// --> manufacturers.code
};

struct T_manufacturers
manufacturers[] = {
	{ 1,            "Sony",       "Tokyo",   "Andy", 120.0 },
	{ 2,   "Creative Labs",      "Austin",   "Owen", 100.0 },
	{ 3, "Hewlett-Packard", "Los Angeles",  "James",  50.0 },
	{ 4,          "Iomega",     "Beijing",   "Mary", 200.0 },
	{ 5,         "Fujitsu",      "Taiwan",   "John", 130.0 },
	{ 6,      "Winchester",       "Paris", "Robert",  30.0 }
};

struct T_products
products[] = {
	{  1,      "Hard drive", 240, 5 },
	{  2,          "Memory", 120, 6 },
	{  3,       "ZIP drive", 150, 4 },
	{  4,     "Floppy disk",   5, 6 },
	{  5,         "Monitor", 240, 1 },
	{  6,       "DVD drive", 180, 2 },
	{  7,        "CD drive",  90, 2 },
	{  8,         "Printer", 270, 3 },
	{  9, "Toner cartridge",  66, 3 },
	{ 10,      "DVD burner", 180, 2 },
	{ 11,       "DVD drive", 150, 3 }
};

#endif