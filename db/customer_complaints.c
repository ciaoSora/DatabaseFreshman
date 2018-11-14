/*
Database "customer_complaints" contains tables:
	complaints
	customers
	products
	staff
*/

#ifndef CUSTOMER_COMPLAINTS
#define CUSTOMER_COMPLAINTS

struct T_complaints {
	double complaint_id;
	double product_id;	// --> products.product_id
	double customer_id;	// --> customers.customer_id
	char complaint_outcome_code[3];
	char complaint_status_code[7];
	char complaint_type_code[17];
	char date_complaint_raised[20];
	char date_complaint_closed[20];
	double staff_id;	// --> staff.staff_id
};

struct T_customers {
	double customer_id;
	char customer_type_code[21];
	char address_line_1[31];
	char address_line_2[10];
	char town_city[19];
	char state[13];
	char email_address[30];
	char phone_number[19];
};

struct T_products {
	double product_id;
	double parent_product_id;
	char product_category_code[9];
	char date_product_first_available[20];
	char date_product_discontinued[20];
	char product_name[17];
	char product_description[19];
	double product_price;
};

struct T_staff {
	double staff_id;
	char gender[2];
	char first_name[7];
	char last_name[12];
	char email_address[30];
	char phone_number[20];
};

struct T_complaints
complaints[] = {
	{  1, 117, 120, "OK", "Closed",  "Product Failure", "2002-07-18 10:59:35", "1976-04-19 11:03:06", 114 },
	{  2, 118, 113, "OK",    "New", "Product Unusable", "1973-02-10 22:55:56", "2013-09-14 02:59:10", 120 },
	{  3, 119, 114, "OK",    "New", "Product Unusable", "2006-10-29 07:08:46", "1995-09-11 14:48:46", 115 },
	{  4, 120, 114, "OK", "Closed", "Product Unusable", "1977-08-06 00:31:19", "1970-10-14 00:57:25", 114 },
	{  5, 117, 118, "OK",   "Open",  "Product Failure", "2007-10-14 21:50:43", "2000-08-17 17:02:48", 116 },
	{  6, 118, 114, "OK",   "Open", "Product Unusable", "1987-07-11 14:40:30", "1975-10-11 05:54:30", 114 },
	{  7, 117, 117, "OK",    "New", "Product Unusable", "2002-07-18 10:59:35", "1976-04-19 11:03:06", 118 },
	{  8, 117, 114, "OK",    "New", "Product Unusable", "1973-02-10 22:55:56", "2013-09-14 02:59:10", 117 },
	{  9, 117, 116, "OK",    "New", "Product Unusable", "2006-10-29 07:08:46", "1995-09-11 14:48:46", 120 },
	{ 10, 118, 115, "OK",    "New", "Product Unusable", "1977-08-06 00:31:19", "1970-10-14 00:57:25", 114 },
	{ 11, 118, 116, "OK",   "Open", "Product Unusable", "2007-10-14 21:50:43", "2000-08-17 17:02:48", 115 },
	{ 12, 117, 116, "OK",   "Open", "Product Unusable", "1987-07-11 14:40:30", "1975-10-11 05:54:30", 114 }
};

struct T_customers
customers[] = {
	{ 113,   "Good Credit Rating",             "144 Legros Landing",  "Apt. 551",         "Maryamport",       "Kansas",          "hsteuber@example.org",        "06963347450" },
	{ 114,   "Good Credit Rating",  "039 Jedidiah Estate Suite 537",  "Apt. 245",          "Sauerberg",       "Hawaii", "cayla.satterfield@example.net",       "470-803-0244" },
	{ 115,   "Good Credit Rating", "92189 Gulgowski Ranch Apt. 683",  "Apt. 828",        "Tyreekhaven",    "Tennessee",            "vida86@example.com",   "997.698.4779x882" },
	{ 116,   "Good Credit Rating",   "72144 Katlynn Flat Suite 512", "Suite 959",         "Hansenbury",    "Tennessee",         "vbogisich@example.org", "548.373.3603x59134" },
	{ 117,   "Good Credit Rating",  "1566 Ramona Overpass Apt. 464", "Suite 151",   "North Alisaville",      "Florida",            "ubeier@example.org",       "044-468-4549" },
	{ 118, "Defaults on payments",               "425 Roman Tunnel",  "Apt. 495",           "Funkstad",     "Colorado",     "lavonne.frami@example.com",   "+38(3)9011433816" },
	{ 119,   "Good Credit Rating",          "05355 Marcelle Radial", "Suite 054",       "Port Joshuah", "Pennsylvania",       "paige.hyatt@example.com", "1-369-302-7623x576" },
	{ 120, "Defaults on payments",                  "518 Mann Park", "Suite 035", "West Annamariestad",         "Iowa",           "rzulauf@example.org",   "578.019.7943x328" }
};

struct T_products
products[] = {
	{ 117, 4,     "Food", "1988-09-29 17:54:50", "1987-12-20 13:46:16",        "Chocolate", "Handmade chocolate",   2.88 },
	{ 118, 3,     "Book", "1974-06-25 12:26:47", "1991-08-20 05:22:31", "The Great Gatsby",     "American novel",     35 },
	{ 119, 8, "Hardware", "1994-12-18 15:13:19", "1997-07-02 18:26:16",         "Keyboard", "Designed for games", 109.99 },
	{ 120, 9, "Hardware", "1998-06-20 15:04:11", "1980-06-26 10:40:19",            "Mouse",   "Blue tooth mouse",  23.35 }
};

struct T_staff
staff[] = {
	{ 114, "0",   "Ward",       "Boehm",  "marcelle.ritchie@example.com",   "(379)551-0838x146" },
	{ 115, "1",  "Lucie",        "Lowe",            "ohintz@example.org",    "142-311-6503x206" },
	{ 116, "0", "Dagmar",      "Erdman",              "wrau@example.com",        "345-656-5571" },
	{ 117, "0", "Bradly",        "Hahn",           "brett99@example.net",  "1-132-839-9409x288" },
	{ 118, "0", "Austin",       "Zieme",    "reichel.armani@example.org", "(383)553-1035x20399" },
	{ 119, "0", "Dorian", "Oberbrunner", "richard.gutkowski@example.com",        "155-811-6153" },
	{ 120, "0",  "Mikel",       "Lynch",        "glen.borer@example.com",    "751-262-8424x575" }
};

#endif