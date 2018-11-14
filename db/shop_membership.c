/*
Database "shop_membership" contains tables:
	branch
	member
	membership_register_branch
	purchase
*/

#ifndef SHOP_MEMBERSHIP
#define SHOP_MEMBERSHIP

struct T_branch {
	double branch_id;
	char name[16];
	char open_year[5];
	char address_road[15];
	char city[7];
	char membership_amount[5];
};

struct T_member {
	double member_id;
	char card_number[6];
	char name[17];
	char hometown[29];
	double level;
};

struct T_membership_register_branch {
	double member_id;	// --> member.member_id
	char branch_id[2];	// --> branch.branch_id
	char register_year[5];
};

struct T_purchase {
	double member_id;	// --> member.member_id
	char branch_id[2];	// --> branch.branch_id
	char year[5];
	double total_pounds;
};

struct T_branch
branch[] = {
	{ 1,       "Alexandre", "2001",  "Valleys Place", "London",  "112" },
	{ 2,          "Popert", "2009",  "Oaks Crescent", "London",   "11" },
	{ 3,         "Stanley", "2013",  "Abbott Street", "London",    "6" },
	{ 4,      "Zytogorski", "2009",     "Abbey Rise", "Oxford",    "7" },
	{ 5,        "Cochrane", "2012",  "Brampton Road", "London", "1418" },
	{ 6,        "Taverner", "2014", "Cecilia Avenue", "Oxford",   "56" },
	{ 7,     "Saint Amant", "2015",   "Concord Road", "London",   "91" },
	{ 8, "Brooke Greville", "2009",   "Glebe Street", "Oxford",   "31" }
};

struct T_member
member[] = {
	{  1,  "LE99",    "Jeremy Jarmon",      "Collierville, Tennessee", 6 },
	{  2,  "LT98",      "Myron Pryor",         "Louisville, Kentucky", 6 },
	{  3,  "RT91",     "Corey Peters",         "Louisville, Kentucky", 6 },
	{  4,  "RE95", "Ventrell Jenkins",     "Columbia, South Carolina", 6 },
	{  5, "OLB56",   "Braxton Kelley",            "LaGrange, Georgia", 6 },
	{  6,  "MLB4",    "Micah Johnson",      "Fort Campbell, Kentucky", 4 },
	{  7, "SLB51",  "Johnny Williams",        "Jacksonville, Florida", 6 },
	{  8, "RCB32",  "Trevard Lindley",               "Hiram, Georgia", 6 },
	{  9,  "LCB7",      "David Jones",    "Red Jacket, West Virginia", 6 },
	{ 10,  "FS10",       "Matt Lentz", "Simpsonville, South Carolina", 2 }
};

struct T_membership_register_branch
membership_register_branch[] = {
	{ 1, "1", "2016" },
	{ 2, "4", "2016" },
	{ 3, "1", "2017" },
	{ 4, "1", "2016" },
	{ 5, "5", "2016" },
	{ 6, "6", "2017" },
	{ 7, "2", "2016" },
	{ 8, "8", "2016" }
};

struct T_purchase
purchase[] = {
	{ 1, "3", "2018", 2013.32 },
	{ 2, "5", "2018",  321.13 },
	{ 3, "1", "2017",  988.09 },
	{ 4, "1", "2018",   20.99 },
	{ 3, "5", "2018",  343.76 },
	{ 6, "6", "2018",  232.09 },
	{ 2, "2", "2018",   402.1 },
	{ 2, "3", "2018",  430.29 }
};

#endif