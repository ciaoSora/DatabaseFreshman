/*
Database "museum_visit" contains tables:
	customer
	museum
	visit
*/

#ifndef MUSEUM_VISIT
#define MUSEUM_VISIT

struct T_customer {
	double customer_id;
	char name[21];
	double level_of_membership;
	double age;
};

struct T_museum {
	double museum_id;
	char name[41];
	double num_of_staff;
	char open_year[5];
};

struct T_visit {
	double museum_id;	// --> museum.museum_id
	char customer_id[2];	// --> customer.customer_id
	double num_of_ticket;
	double total_spent;
};

struct T_customer
customer[] = {
	{ 1,     "Gonzalo Higuaín ", 8, 35 },
	{ 2,      "Guti Midfielder", 5, 28 },
	{ 3,         "Arjen Robben", 1, 27 },
	{ 4,           "Raúl Brown", 2, 56 },
	{ 5,        "Fernando Gago", 6, 36 },
	{ 6, "Rafael van der Vaart", 1, 25 }
};

struct T_museum
museum[] = {
	{ 1,                             "Plaza Museum", 62, "2000" },
	{ 2,                     "Capital Plaza Museum", 25, "2012" },
	{ 3,             "Jefferson Development Museum", 18, "2010" },
	{ 4,                     "Willow Grande Museum", 17, "2011" },
	{ 5,                         "RiverPark Museum", 16, "2008" },
	{ 6,                       "Place Tower Museum", 16, "2008" },
	{ 7, "Central City District Residential Museum", 15, "2010" },
	{ 8,                    "ZirMed Gateway Museum", 12, "2009" }
};

struct T_visit
visit[] = {
	{ 1, "5", 20, 320.14 },
	{ 2, "5",  4,  89.98 },
	{ 4, "3", 10, 320.44 },
	{ 2, "3", 24, 209.98 },
	{ 4, "6",  3,  20.44 },
	{ 8, "6",  2,  19.98 }
};

#endif