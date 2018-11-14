/*
Database "epinions_1" contains tables:
	item
	review
	trust
	useracct
*/

#ifndef EPINIONS_1
#define EPINIONS_1

struct T_item {
	double item_id;
	char title[12];
};

struct T_review {
	double a_id;
	double user_id;	// --> useracct.user_id
	double item_id;	// --> item.item_id
	double rating;
	double rank;
};

struct T_trust {
	double source_user_id;	// --> useracct.user_id
	double target_user_id;	// --> useracct.user_id
	double trust;
};

struct T_useracct {
	double user_id;
	char name[6];
};

struct T_item
item[] = {
	{ 0,        "pear" },
	{ 1,      "orange" },
	{ 2,       "apple" },
	{ 3,     "shampoo" },
	{ 4,     "avocado" },
	{ 5,        "comb" },
	{ 6, "blue hoodie" },
	{ 7,         "cup" }
};

struct T_review
review[] = {
	{ 1, 1, 1, 10, 1 },
	{ 2, 2, 1,  5, 2 },
	{ 3, 1, 4,  7, 3 },
	{ 4, 2, 7, 10, 7 },
	{ 5, 2, 5,  7, 4 },
	{ 6, 1, 3,  5, 5 },
	{ 7, 2, 7,  6, 6 }
};

struct T_trust
trust[] = {
	{ 1, 2, 10 },
	{ 1, 3,  6 },
	{ 2, 4,  8 },
	{ 3, 6, 10 },
	{ 7, 2,  3 },
	{ 7, 5,  2 },
	{ 7, 3,  4 },
	{ 6, 2,  1 },
	{ 1, 5,  7 }
};

struct T_useracct
useracct[] = {
	{ 1, "Helen" },
	{ 2,  "Mark" },
	{ 3, "Terry" },
	{ 4, "Nancy" },
	{ 5, "Rosie" },
	{ 6,  "Roxi" },
	{ 7, "Emily" }
};

#endif