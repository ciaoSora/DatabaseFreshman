/*
Database "customers_and_products_contacts" contains tables:
	addresses
	contacts
	customer_address_history
	customer_orders
	customers
	order_items
	products
*/

#ifndef CUSTOMERS_AND_PRODUCTS_CONTACTS
#define CUSTOMERS_AND_PRODUCTS_CONTACTS

struct T_addresses {
	double address_id;
	char line_1_number_building[31];
	char city[19];
	char zip_postcode[4];
	char state_province_county[21];
	char country[4];
};

struct T_contacts {
	double contact_id;
	double customer_id;
	char gender[7];
	char first_name[9];
	char last_name[10];
	char contact_phone[19];
};

struct T_customer_address_history {
	double customer_id;	// --> customers.customer_id
	double address_id;	// --> addresses.address_id
	char date_from[20];
	char date_to[20];
};

struct T_customer_orders {
	double order_id;
	double customer_id;	// --> customers.customer_id
	char order_date[20];
	char order_status_code[10];
};

struct T_customers {
	double customer_id;
	char payment_method_code[13];
	char customer_number[4];
	char customer_name[9];
	char customer_address[34];
	char customer_phone[20];
	char customer_email[30];
};

struct T_order_items {
	double order_item_id;
	double order_id;	// --> customer_orders.order_id
	double product_id;	// --> products.product_id
	char order_quantity[5];
};

struct T_products {
	double product_id;
	char product_type_code[9];
	char product_name[6];
	double product_price;
};

struct T_addresses
addresses[] = {
	{  1,   "4315 Kerluke Canyon Apt. 800",          "Hertafurt", "740",               "Nevada", "USA" },
	{  2,    "319 Kozey Highway Suite 973",        "Edgardoberg", "282",             "Colorado", "USA" },
	{  3,           "592 Frederique Ridge",       "Gilbertmouth", "167",             "Virginia", "USA" },
	{  4,            "01868 Laverna Green",         "Lake Floyd", "041",             "Oklahoma", "USA" },
	{  5,              "6017 Price Greens",         "Gibsonfurt", "873", "District of Columbia", "USA" },
	{  6,                "037 Luella Path",        "North Jairo", "126",             "Maryland", "USA" },
	{  7,           "044 Greenfelder Fort",        "East Rickey", "564",            "Louisiana", "USA" },
	{  8, "2676 Connelly Islands Apt. 199",      "West Kaiatown", "770",               "Oregon", "USA" },
	{  9,   "6830 Alexanne Forks Apt. 925",        "Agustinstad", "248",             "Illinois", "USA" },
	{ 10,               "918 Lauren Drive",        "Gleasonland", "116",             "Kentucky", "USA" },
	{ 11,    "70345 Marvin Glens Apt. 669",      "Lake Katheryn", "505",             "Kentucky", "USA" },
	{ 12,          "65854 McKenzie Tunnel", "North Lisandroport", "202",                "Maine", "USA" },
	{ 13,      "494 Bruen Radial Apt. 723",           "Estaland", "381",                "Idaho", "USA" },
	{ 14,        "794 Doyle Lake Apt. 531",        "West Muriel", "571",              "Vermont", "USA" },
	{ 15,     "9590 Rogahn Point Apt. 466",     "Port Montytown", "037",          "SouthDakota", "USA" }
};

struct T_contacts
contacts[] = {
	{  1,  4,   "male",   "Cierra",   "Collins",   "+73(2)0854391820" },
	{  2,  6,   "male", "Jennifer",     "Doyle", "482-949-1364x17500" },
	{  3,  8, "female",    "Carli",     "Blick",  "(608)868-5069x554" },
	{  4, 14, "female",  "Gustave",     "Ebert",        "00414184198" },
	{  5,  3,   "male",   "Danika",     "Bauch",     "1-368-227-6322" },
	{  6,  9, "female", "Rachelle",     "Stamm",  "048-342-0880x5170" },
	{  7, 10,   "male",      "Sid",    "Legros",  "658.850.7946x9993" },
	{  8,  7, "female",   "Adella",   "Streich",     "1-613-226-7727" },
	{  9,  4,   "male",     "Etha",    "Raynor",       "385-123-4556" },
	{ 10, 15, "female",     "Skye",     "Ratke",   "+62(3)0497423927" },
	{ 11, 10, "female",     "Leif", "Buckridge",   "+96(5)1807022818" },
	{ 12,  6, "female",   "Shyann",     "Hills",  "(842)564-7057x121" },
	{ 13,  3,   "male",   "Darion",   "Leannon",     "1-279-181-8737" },
	{ 14,  8, "female",    "Amani",     "Kunze",       "405-058-1659" },
	{ 15, 14, "female",   "Hellen",    "Little",       "136.724.5322" }
};

struct T_customer_address_history
customer_address_history[] = {
	{ 12,  7, "2015-07-23 14:37:18", "2018-03-07 12:04:20" },
	{ 12,  2, "2016-11-06 14:33:12", "2018-03-14 21:36:28" },
	{  3,  9, "2011-11-19 12:17:36", "2018-03-22 10:20:16" },
	{ 13, 15, "2009-02-16 23:04:20", "2018-03-07 17:47:47" },
	{  3, 12, "2008-06-22 21:50:44", "2018-03-13 00:08:29" },
	{ 11, 10, "2012-04-09 18:10:36", "2018-03-11 20:16:56" },
	{ 11, 10, "2014-11-17 15:11:26", "2018-03-08 23:31:30" },
	{  2, 13, "2011-01-02 21:42:29", "2018-02-25 19:55:00" },
	{ 13, 11, "2015-05-01 12:44:46", "2018-03-24 06:20:36" },
	{ 12,  3, "2011-06-02 02:53:28", "2018-03-10 00:47:18" },
	{  6,  1, "2013-06-14 23:07:04", "2018-03-16 14:49:28" },
	{ 14, 12, "2008-10-13 04:37:27", "2018-03-19 10:10:53" },
	{ 13,  5, "2012-03-16 17:42:30", "2018-02-27 07:31:19" },
	{  7, 13, "2012-11-19 09:20:49", "2018-03-11 20:11:21" },
	{  7,  3, "2012-11-09 07:15:16", "2018-03-09 12:03:31" },
	{  2,  4, "2011-11-02 17:31:41", "2018-03-07 05:29:10" },
	{  9, 13, "2010-03-25 08:23:20", "2018-03-09 16:41:55" },
	{  6, 12, "2017-10-25 07:35:59", "2018-03-11 21:40:52" },
	{  7,  3, "2009-05-22 04:42:28", "2018-03-18 11:13:27" },
	{ 12,  9, "2016-12-23 04:42:07", "2018-03-20 01:13:38" }
};

struct T_customer_orders
customer_orders[] = {
	{  1,  2, "2009-07-19 13:40:49", "Completed" },
	{  2,  2, "1976-05-28 15:02:44",      "Part" },
	{  3,  6, "1979-03-29 02:47:13", "Completed" },
	{  4,  4, "2003-01-17 00:06:12",      "Part" },
	{  5, 13, "1992-04-19 21:42:58", "Completed" },
	{  6,  4, "1972-03-17 21:42:29",      "Part" },
	{  7, 10, "2002-01-20 01:52:53",      "Part" },
	{  8,  2, "1985-01-03 05:22:09",      "Part" },
	{  9,  9, "2016-09-17 03:00:47", "Completed" },
	{ 10,  5, "1971-12-04 19:14:18", "Completed" },
	{ 11, 10, "1993-05-08 14:12:06", "Completed" },
	{ 12, 10, "1998-06-14 21:22:53", "Completed" },
	{ 13,  9, "1997-08-02 09:44:57",      "Part" },
	{ 14,  3, "1979-07-13 17:19:40",      "Part" },
	{ 15,  1, "2007-01-19 07:54:50", "Completed" }
};

struct T_customers
customers[] = {
	{  1,  "Credit Card", "456",   "Kayley",        "636 Chanelle Isle Apt. 846",    "+87(9)5279161988",       "antonette73@example.com" },
	{  2,  "Credit Card", "553", "Sterling",             "12174 Boyer Crossroad",   "896.685.8228x2786",     "stroman.chadd@example.net" },
	{  3,  "Credit Card", "951",   "Buford",          "650 Spencer Way Apt. 584",       "(192)144-4687",      "pattie.mayer@example.net" },
	{  4, "Direct Debit", "497", "Caterina",             "075 Skiles Expressway",        "387.053.1225",           "dbeahan@example.net" },
	{  5, "Direct Debit", "752",  "Raymond",               "8497 Huel Stravenue",      "1-513-427-0125",   "bergnaum.ashton@example.com" },
	{  6, "Direct Debit", "838", "Cheyenne",           "058 Ben Street Apt. 034",  "009-136-4509x19635",            "rhayes@example.org" },
	{  7, "Direct Debit", "429",  "Cecelia",        "4065 Forest Vista Apt. 103",   "672-559-0630x7875",      "caesar.lemke@example.net" },
	{  8,  "Credit Card", "564",   "Brenna",                   "440 Aiden Ports", "1-271-345-4681x1131",         "macy.huel@example.org" },
	{  9,  "Credit Card", "525",     "Lela", "13256 Valentina Valleys Suite 292",  "838.718.8618x23239", "vandervort.helena@example.org" },
	{ 10,  "Credit Card", "795",     "Cleo",     "91702 Hilpert Pines Suite 177",      "1-202-928-5395",        "xrosenbaum@example.org" },
	{ 11, "Direct Debit", "233",    "Shany",      "55270 Carter Street Apt. 214",        "936.929.9929",       "kling.jesus@example.com" },
	{ 12,  "Credit Card", "586", "Madaline",         "8428 Cecile Land Apt. 192",        "097-514-4641",      "brady.ernser@example.net" },
	{ 13, "Direct Debit", "445",  "Melissa",    "251 Botsford Harbors Suite 399",        "529.148.1926",          "howard27@example.com" },
	{ 14, "Direct Debit", "735",    "Orion",                 "10823 Rollin Spur",  "479-171-6355x66065",     "kip.abernathy@example.com" },
	{ 15, "Direct Debit", "523",  "Ottilie",      "4098 Kreiger Knoll Suite 758",  "393-750-2077x72779",          "morton06@example.net" }
};

struct T_order_items
order_items[] = {
	{  1,  9, 15,    "3" },
	{  2,  8, 12,    "7" },
	{  3, 11,  9,    "9" },
	{  4, 15,  2, "male" },
	{  5, 13,  3,    "3" },
	{  6,  3,  6,    "4" },
	{  7,  7,  4,    "8" },
	{  8,  6,  2,    "7" },
	{  9,  3, 15,    "2" },
	{ 10,  4, 12,    "5" },
	{ 11, 14, 11,    "8" },
	{ 12,  6,  2,    "7" },
	{ 13,  7,  5,    "9" },
	{ 14,  5, 13,    "4" },
	{ 15,  7,  3,    "8" }
};

struct T_products
products[] = {
	{  1, "Hardware", "Apple", 54753982.574522 },
	{  2,  "Clothes", "jcrew", 30590929.528306 },
	{  3, "Hardware", "Apple",  10268.85297069 },
	{  4, "Hardware", "Apple", 22956668.699482 },
	{  5,  "Clothes", "jcrew", 5927021.8748021 },
	{  6, "Hardware", "Apple", 77.109961147471 },
	{  7, "Hardware", "Apple", 450.39232520498 },
	{  8, "Hardware",  "Sony", 4446237.9177554 },
	{  9,  "Clothes", "jcrew", 622.79275984494 },
	{ 10, "Hardware",  "Sony", 7171.5933353284 },
	{ 11,  "Clothes", "jcrew", 149.95519076938 },
	{ 12,  "Clothes", "gucci", 593.80519929985 },
	{ 13,  "Clothes", "gucci",  11388.26282462 },
	{ 14, "Hardware",  "Sony", 389.91542644329 },
	{ 15,  "Clothes", "gucci", 310488248.48788 }
};

#endif