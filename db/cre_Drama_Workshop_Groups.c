/*
Database "cre_Drama_Workshop_Groups" contains tables:
	addresses
	bookings
	bookings_services
	clients
	customer_orders
	customers
	drama_workshop_groups
	invoice_items
	invoices
	marketing_regions
	order_items
	performers
	performers_in_bookings
	products
	reference_payment_methods
	reference_service_types
	services
	stores
*/

#ifndef CRE_DRAMA_WORKSHOP_GROUPS
#define CRE_DRAMA_WORKSHOP_GROUPS

struct T_addresses {
	char address_id[4];
	char line_1[31];
	char line_2[10];
	char city_town[18];
	char state_county[14];
	char other_details[5];
};

struct T_bookings {
	double booking_id;
	double customer_id;	// --> clients.client_id
	char workshop_group_id[4];	// --> drama_workshop_groups.workshop_group_id
	char status_code[5];
	double store_id;
	char order_date[20];
	char planned_delivery_date[20];
	char actual_delivery_date[20];
	char other_order_details[5];
};

struct T_bookings_services {
	double order_id;	// --> bookings.booking_id
	double product_id;	// --> services.service_id
};

struct T_clients {
	double client_id;
	double address_id;	// --> addresses.address_id
	char customer_email_address[30];
	char customer_name[9];
	char customer_phone[21];
	char other_details[10];
};

struct T_customer_orders {
	double order_id;
	double customer_id;	// --> customers.customer_id
	double store_id;	// --> stores.store_id
	char order_date[20];
	char planned_delivery_date[20];
	char actual_delivery_date[20];
	char other_order_details[5];
};

struct T_customers {
	char customer_id[4];
	double address_id;	// --> addresses.address_id
	char customer_name[9];
	char customer_phone[20];
	char customer_email_address[26];
	char other_details[5];
};

struct T_drama_workshop_groups {
	double workshop_group_id;
	double address_id;	// --> addresses.address_id
	char currency_code[4];
	char marketing_region_code[3];
	char store_name[20];
	char store_phone[21];
	char store_email_address[31];
	char other_details[5];
};

struct T_invoice_items {
	double invoice_item_id;
	double invoice_id;	// --> invoices.invoice_id
	double order_id;	// --> bookings_services.order_id
	double order_item_id;	// --> order_items.order_item_id
	double product_id;	// --> bookings_services.product_id
	double order_quantity;
	char other_item_details[13];
};

struct T_invoices {
	double invoice_id;
	double order_id;	// --> customer_orders.order_id
	char payment_method_code[11];	// --> reference_payment_methods.payment_method_code
	double product_id;
	char order_quantity[2];
	char other_item_details[5];
	double order_item_id;
};

struct T_marketing_regions {
	char marketing_region_code[3];
	char marketing_region_name[14];
	char marketing_region_descriptrion[19];
	char other_details[5];
};

struct T_order_items {
	double order_item_id;
	double order_id;	// --> customer_orders.order_id
	double product_id;	// --> products.product_id
	char order_quantity[2];
	char other_item_details[5];
};

struct T_performers {
	double performer_id;
	double address_id;	// --> addresses.address_id
	char customer_name[9];
	char customer_phone[21];
	char customer_email_address[32];
	char other_details[14];
};

struct T_performers_in_bookings {
	double order_id;	// --> bookings.booking_id
	double performer_id;	// --> performers.performer_id
};

struct T_products {
	char product_id[4];
	char product_name[8];
	double product_price;
	char product_description[5];
	char other_product_service_details[5];
};

struct T_reference_payment_methods {
	char payment_method_code[11];
	char payment_method_description[7];
};

struct T_reference_service_types {
	char service_type_code[2];
	char parent_service_type_code[2];
	char service_type_description[30];
};

struct T_services {
	double service_id;
	char service_type_code[2];	// --> reference_service_types.service_type_code
	double workshop_group_id;	// --> drama_workshop_groups.workshop_group_id
	char product_description[5];
	char product_name[8];
	double product_price;
	char other_product_service_details[5];
};

struct T_stores {
	char store_id[4];
	double address_id;	// --> addresses.address_id
	char marketing_region_code[3];	// --> marketing_regions.marketing_region_code
	char store_name[13];
	char store_phone[20];
	char store_email_address[24];
	char other_details[8];
};

struct T_addresses
addresses[] = {
	{ "110",              "4753 Dach Highway", "Suite 846",       "Feliciaberg",       "Florida", "None" },
	{ "124",   "391 Vandervort Fall Apt. 446",  "Apt. 107", "West Sherwoodstad",       "Indiana", "None" },
	{ "148",           "809 Izabella Islands", "Suite 271",      "Schadenville",          "Ohio", "None" },
	{  "15",        "3720 Vito View Apt. 148",  "Apt. 584", "New Jaquelinmouth",          "Ohio", "None" },
	{ "180",              "8835 Boehm Greens",  "Apt. 741",         "Chrisside",      "Maryland", "None" },
	{  "19",    "77667 Nathan Union Apt. 606",  "Apt. 114",       "Desireefort",  "WestVirginia", "None" },
	{ "192",               "545 Lula Mission", "Suite 311",      "East Aracely",      "Oklahoma", "None" },
	{ "201", "2893 Jenkins Station Suite 815", "Suite 570",      "Monahanshire",      "Kentucky", "None" },
	{ "207",  "87789 Reilly Canyon Suite 872",  "Apt. 136",      "Rueckermouth",      "Maryland", "None" },
	{ "230",            "0855 Ziemann Island",  "Apt. 597",        "Purdyville", "SouthCarolina", "None" },
	{ "266",         "2082 Runolfsson Cliffs",  "Apt. 460", "Macejkovicchester",        "Alaska", "None" },
	{ "286",             "51237 Maiya Center", "Suite 714",    "New Lonzoville",      "Nebraska", "None" },
	{ "314", "70561 Vicenta Islands Apt. 873",  "Apt. 352",      "Cronaborough",          "Ohio", "None" },
	{ "362",        "384 Fahey Flat Apt. 886", "Suite 583",      "South Birdie",  "Pennsylvania", "None" },
	{ "369",              "899 Okuneva Haven",  "Apt. 615",         "Jasthaven",      "Delaware", "None" },
	{ "374",                "956 Aliyah Cape", "Suite 226",     "South Eugenia",    "Washington", "None" },
	{ "383",  "788 Flossie Junction Apt. 770",  "Apt. 861",      "Nataliamouth",  "WestVirginia", "None" },
	{  "39",              "9799 Andres Shoal",  "Apt. 012",    "North Antonina",   "SouthDakota", "None" },
	{  "74",                "8682 Boyle Glen",  "Apt. 012",          "Lindberg",       "Alabama", "None" },
	{  "98",              "32128 Klocko Oval", "Suite 184",   "Port Maximeview",       "Arizona", "None" }
};

struct T_bookings
bookings[] = {
	{  1, 938, "140", "good", 8, "2016-12-12 10:43:01", "2013-03-10 18:47:05", "1997-11-21 10:07:40", "None" },
	{  2, 868, "838", "stop", 7, "1976-08-20 00:33:08", "2009-07-09 09:18:38", "1976-01-08 07:19:23", "None" },
	{  3, 735, "176", "good", 9, "1975-11-23 06:28:47", "1989-01-05 19:24:45", "1990-03-16 19:38:47", "None" },
	{  4, 527, "708", "stop", 6, "1995-02-02 15:52:57", "2017-04-27 00:16:00", "1996-10-24 21:15:27", "None" },
	{  5, 591, "176", "good", 9, "1995-05-10 14:49:47", "1979-07-19 19:44:01", "1971-01-13 13:24:52", "None" },
	{  6, 953, "735", "good", 1, "1992-11-26 18:11:10", "2016-06-06 20:35:14", "2016-04-30 11:45:39", "None" },
	{  7, 735, "954", "stop", 4, "1975-12-30 14:12:32", "2008-07-18 18:15:40", "1983-10-09 10:48:48", "None" },
	{  8, 605, "176", "good", 2, "1992-05-11 23:22:41", "1973-04-02 03:10:21", "1983-07-01 22:10:19", "None" },
	{  9, 508, "405", "good", 4, "1971-05-11 06:53:01", "1974-05-07 21:40:39", "1986-10-04 13:31:10", "None" },
	{ 10, 938, "735", "good", 4, "1982-05-19 05:37:51", "1999-05-11 01:26:06", "1989-11-17 00:32:13", "None" },
	{ 11, 423, "136", "good", 4, "1991-10-11 17:24:15", "1978-04-10 12:23:59", "1983-02-07 20:27:10", "None" },
	{ 12, 776, "954", "good", 5, "1984-12-17 12:53:51", "2014-06-05 10:19:46", "1985-09-02 11:34:39", "None" },
	{ 13, 605, "685", "good", 6, "1996-09-14 10:17:55", "1993-04-17 23:53:01", "1982-04-18 02:59:08", "None" },
	{ 14, 426, "954", "stop", 6, "2007-08-05 15:46:29", "1971-06-29 03:04:47", "1995-12-21 05:01:38", "None" },
	{ 15, 426, "176", "stop", 8, "1976-10-24 07:40:47", "1972-06-25 15:51:34", "2004-02-22 04:37:14", "None" }
};

struct T_bookings_services
bookings_services[] = {
	{  1, 396 },
	{  1, 779 },
	{  4, 191 },
	{  4, 414 },
	{  5, 773 },
	{  7, 191 },
	{  7, 640 },
	{  8, 414 },
	{  9, 630 },
	{ 12, 597 },
	{ 13, 396 },
	{ 14, 525 }
};

struct T_clients
clients[] = {
	{ 423, 201,         "branson94@example.net", "Clifford",   "(042)912-3404x5135",       "VIP" },
	{ 426, 383,            "alba04@example.com",   "Bettye",        "(604)849-0214",      "None" },
	{ 478,  15,         "westley30@example.net", "Reinhold", "1-048-214-4640x64380",      "None" },
	{ 508,  98,   "hudson.kristina@example.net",     "Jack",   "(966)022-6448x3428", "Super VIP" },
	{ 509, 286,       "white.alysa@example.com",  "Rosanna",  "(651)611-6111x61144",      "None" },
	{ 527,  74,           "buddy98@example.org",   "Kelton",         "581.457.6800",      "None" },
	{ 591,  98, "considine.shyanne@example.net",   "Connor", "1-479-550-1510x89172",      "None" },
	{ 605,  15,     "strosin.keara@example.com", "Garfield",     "+63(3)8897932425",      "None" },
	{ 628, 383,             "cconn@example.net",    "Urban",         "405.225.1435",      "None" },
	{ 631, 374,       "qaltenwerth@example.com",     "Vita",  "1-299-766-5382x3122",       "VIP" },
	{ 699,  98,       "lbalistreri@example.net",     "Rory",  "1-431-563-2576x9849",      "None" },
	{ 735, 110,      "dina.gutmann@example.net",    "Arvid",    "(745)818-8559x747",      "None" },
	{ 768, 369,    "rempel.jamison@example.com", "Consuelo",   "(729)754-0764x6020",      "None" },
	{ 775, 383,           "jklocko@example.net",    "Alvis",     "+12(5)4915316228",      "None" },
	{ 776, 374,            "lacy92@example.com",    "Tevin",          "08761812417",      "None" },
	{ 868,  74,    "boyer.carleton@example.com",   "Krista",        "(066)903-6363",      "None" },
	{ 887,  39,           "vparker@example.net",  "Genesis",       "1-121-643-1101",      "None" },
	{ 938, 180,    "cleora.strosin@example.org",   "Horace",   "935-161-0948x33010",      "None" },
	{ 943,  39,           "kbailey@example.com",  "Marquis",    "398-003-6983x1691",      "None" },
	{ 953, 362,      "conn.josiane@example.com",  "Malcolm",        "(995)964-6385",      "None" }
};

struct T_customer_orders
customer_orders[] = {
	{  1, 516, 231, "1994-08-03 12:34:58", "1977-03-11 03:58:19", "1992-07-21 22:11:11", "None" },
	{  2, 418, 229, "2014-07-10 10:56:01", "1996-08-26 19:19:59", "1998-08-22 17:57:32", "None" },
	{  3, 712, 229, "1981-06-20 16:29:43", "1980-12-19 05:49:35", "2011-04-13 07:15:35", "None" },
	{  4, 240, 229, "1999-11-20 18:48:05", "1973-08-20 08:52:39", "2004-03-27 23:30:12", "None" },
	{  5, 418, 150, "1973-02-16 19:28:34", "1990-09-25 07:14:01", "2004-04-23 21:19:39", "None" },
	{  6, 556, 344, "1988-11-13 15:42:13", "2012-05-19 00:38:52", "2015-06-20 20:51:17", "None" },
	{  7, 546, 291, "1998-03-10 14:01:00", "2014-06-18 09:42:23", "1972-08-15 19:12:14", "None" },
	{  8, 240, 231, "1979-09-01 06:29:01", "1996-05-17 09:10:57", "1996-02-16 04:20:17", "None" },
	{  9, 240, 344, "1993-11-22 14:56:28", "1984-05-07 12:05:33", "1976-05-20 03:24:23", "None" },
	{ 10, 546, 518, "1985-05-29 01:20:18", "1977-07-08 16:35:46", "2003-12-16 23:37:19", "None" },
	{ 11, 304, 421, "2000-07-03 21:41:50", "1994-08-08 03:08:23", "1990-11-14 03:53:06", "None" },
	{ 12, 516, 231, "2011-01-05 08:01:07", "2004-04-24 01:52:57", "1993-09-16 23:20:05", "None" },
	{ 13, 240, 512, "2003-06-24 11:44:51", "1979-05-15 03:00:09", "2011-04-23 06:39:09", "None" },
	{ 14, 546, 444, "1971-05-12 10:12:46", "1987-03-21 18:50:27", "2016-10-18 16:11:20", "None" },
	{ 15, 712, 231, "2008-04-02 18:00:15", "1994-11-12 04:49:11", "1996-04-13 19:05:34", "None" }
};

struct T_customers
customers[] = {
	{ "240", 286,   "Harold",        "624-096-7791",  "jerde.harmon@example.com", "None" },
	{ "267",  98, "Federico",        "914-915-7483",     "johnson27@example.com", "None" },
	{ "304", 369,   "Samson",  "1-463-121-4086x655",      "dalton75@example.com", "None" },
	{ "418", 369,    "Daryl",  "(191)727-6065x6351", "hickle.jazmyn@example.org", "None" },
	{ "516", 110,   "Robert",    "903.657.6967x467",    "fheathcote@example.com",  "VIP" },
	{ "518", 180,  "Jacques",         "02902266118",      "eleannon@example.org", "None" },
	{ "546", 266,  "Davonte", "(941)313-1839x94608",       "keanu70@example.net",  "VIP" },
	{ "556",  19,    "Blake",        "056.568.7725",     "clemens43@example.org", "None" },
	{ "633", 148,    "Elwyn",   "388.863.3459x0915",        "ggrant@example.com", "None" },
	{ "712", 266,     "Alek",        "398.352.1753",    "terry.nels@example.com", "None" },
	{ "714", 230, "Adelbert", "(514)659-1318x46123",  "hermann.veum@example.org", "None" },
	{ "793",  74,   "Isaiah",        "347.178.3326",      "dudley08@example.net", "None" },
	{ "823", 383,  "Ephraim",         "03189033909",    "gage.johns@example.org", "None" },
	{ "957", 207,  "Cedrick",        "620-987-5897",      "nschmidt@example.org", "None" },
	{ "998", 201,     "Wade",    "+46(5)7576252034",  "cassin.cielo@example.org", "None" }
};

struct T_drama_workshop_groups
drama_workshop_groups[] = {
	{ 136, 383,  "EU", "FR",          "Amely Cafe",         "122-084-8029",      "amely.ruecker@example.com", "None" },
	{ 140, 180,  "EU", "DE",           "Veda Film",    "793-966-9311x5303",   "breitenberg.veda@example.com", "None" },
	{ 176, 286,  "EU", "RU",           "Queen Art",         "492-463-5967",      "quigley.queen@example.org", "Good" },
	{ 314, 369,  "EU", "RU",          "Kole Photo",        "(256)743-0310",          "kole.torp@example.org", "None" },
	{ 382, 266, "USD", "US",            "WAT Food",        "(411)133-9128",     "watsica.hettie@example.com", "None" },
	{ 405, 207,  "EU", "ES",        "Hansen Print",       "1-764-337-3453",      "hansen.krista@example.net", "Good" },
	{ 415, 383,  "EU", "RU",           "Roo Place",        "(422)705-5633",        "roosevelt61@example.com", "None" },
	{ 431, 110, "USD", "MX",        "Uhuels Fruit",        "(636)443-4067",             "uhuels@example.net", "None" },
	{ 470, 369, "USD", "DE",          "Harry Beef",   "(904)958-9909x0087",      "harry.nicolas@example.org", "None" },
	{ 685, 201,  "EU", "RU",        "Welch Flower",     "334-591-4561x465",        "welch.colby@example.net",  "Bad" },
	{ 708, 230,  "EU", "RU",      "Kling Workshop",         "499-032-2149",    "katherine.kling@example.org", "None" },
	{ 735, 286,  "EU", "FR",            "Orn News",     "+60(6)8081312118",         "arturo.orn@example.org", "None" },
	{ 838, 124,  "EU", "RU",         "Bednar Film", "1-351-773-1587x95545",     "bednar.michael@example.org", "None" },
	{ 942,  98,  "EU", "IE", "Kessler Exploration",    "(020)161-0983x567", "kessler.maximillia@example.net", "None" },
	{ 954, 374,  "EU", "PT",        "Warino Photo",       "1-811-875-3222",         "waino.king@example.com", "None" }
};

struct T_invoice_items
invoice_items[] = {
	{ 1, 128, 1, 5, 396, 2,         "None" },
	{ 2, 162, 4, 6, 191, 6, "Good quality" }
};

struct T_invoices
invoices[] = {
	{ 128, 14, "MasterCard", 4, "2", "None", 1 },
	{ 162, 13, "MasterCard", 9, "2", "None", 9 },
	{ 164,  7,       "Visa", 7, "2", "None", 1 },
	{ 212,  8,       "Visa", 4, "2", "None", 8 },
	{ 272, 10, "American E", 3, "2", "None", 5 },
	{ 398,  3, "American E", 4, "1", "None", 5 },
	{ 406, 14, "MasterCard", 7, "2", "None", 1 },
	{ 483,  7,       "Visa", 8, "1", "None", 3 },
	{ 548,  4, "MasterCard", 3, "1", "None", 1 },
	{ 587,  1, "American E", 4, "2", "None", 1 },
	{ 612,  6, "American E", 3, "1", "None", 8 },
	{ 633, 11,       "Visa", 2, "1", "None", 7 },
	{ 679, 12, "MasterCard", 9, "2", "None", 8 },
	{ 733, 11,       "Visa", 6, "1", "None", 4 },
	{ 777,  7, "MasterCard", 6, "2", "None", 7 }
};

struct T_marketing_regions
marketing_regions[] = {
	{ "CA",        "Canada",  "Our target market", "None" },
	{ "CN",         "China", "Our largest market", "None" },
	{ "ES",         "Spain",                   "", "None" },
	{ "FR",        "France",                   "", "None" },
	{ "IN",         "India",                   "", "None" },
	{ "MX",        "Mexico",                   "", "None" },
	{ "RU",        "Russia",                   "", "None" },
	{ "US", "United States",    "Our main market", "None" }
};

struct T_order_items
order_items[] = {
	{  1,  3, 233, "1", "None" },
	{  2, 15, 300, "2", "None" },
	{  3, 12, 300, "1", "None" },
	{  4,  4, 273, "1", "None" },
	{  5,  3,  46, "2", "None" },
	{  6,  5,  83, "2", "None" },
	{  7, 10, 179, "2", "None" },
	{  8,  4, 156, "1", "None" },
	{  9, 12, 216, "1", "None" },
	{ 10, 11,  46, "1", "None" },
	{ 11,  2, 300, "1", "None" },
	{ 12, 12, 156, "2", "None" },
	{ 13,  6, 233, "1", "None" },
	{ 14,  1,  81, "1", "None" },
	{ 15,  7, 300, "2", "None" }
};

struct T_performers
performers[] = {
	{ 153, 124,   "Shawna",         "664.495.1939",             "krogahn@example.com",          "None" },
	{ 211, 124,   "Ashley",         "893-536-8857",           "preston45@example.net",          "None" },
	{ 313,  39,     "Oren", "1-952-052-6685x28082",      "ferry.carolina@example.net",          "None" },
	{ 341, 110,    "Issac",          "08639382978",         "wisozk.john@example.org",          "None" },
	{ 360, 207,  "Shaniya",    "472.072.6649x4161",          "wschroeder@example.org",          "None" },
	{ 376, 180,   "Peyton",         "905.705.9514",          "clotilde04@example.net",          "None" },
	{ 379, 192,   "Trudie",         "782-118-0067",              "trey88@example.net",          "None" },
	{ 415, 110,     "Gwen",     "342-389-0010x682",                "okub@example.org",          "None" },
	{ 433, 110,    "Doyle",         "547.535.3455",        "otilia.ortiz@example.net",          "None" },
	{ 448, 192,    "Fritz",         "858.603.7004",     "cummings.matteo@example.com",   "Did not pay" },
	{ 466, 374,  "Tyrique",       "1-417-019-8634",            "cokuneva@example.com",          "None" },
	{ 650,  15,    "Keanu",  "(654)496-1642x31167",    "hudson.cristobal@example.net",   "Did not pay" },
	{ 656, 148,  "Dariana",    "320.705.7190x0354",        "hbreitenberg@example.com",          "None" },
	{ 798, 266,      "Sid",       "1-260-605-6483",            "kellen89@example.com",          "None" },
	{ 808, 374,   "Vernon",     "+11(1)8172674604",           "ianderson@example.com", "Pay good tips" },
	{ 832, 124,  "Marques",     "087-833-4617x095",              "joel24@example.com",          "None" },
	{ 882, 207, "Destiney",        "(054)005-5168",          "jennyfer81@example.com",          "None" },
	{ 904, 314,   "Jeanie",   "323-787-3435x31522",          "anderson34@example.net",          "None" },
	{ 954, 362,  "Joannie",  "1-856-024-7910x2017",             "chaim10@example.com",          "None" },
	{ 976,  19,    "Elyse",    "483.180.0168x1288", "myrtice.satterfield@example.net",          "None" }
};

struct T_performers_in_bookings
performers_in_bookings[] = {
	{  1, 153 },
	{  1, 341 },
	{  2, 466 },
	{  3, 798 },
	{  4, 313 },
	{  7, 882 },
	{  8, 650 },
	{  8, 976 },
	{  9, 376 },
	{  9, 656 },
	{  9, 954 },
	{ 11, 360 },
	{ 13, 313 },
	{ 13, 808 },
	{ 15, 313 },
	{ 15, 656 },
	{ 15, 832 },
	{ 15, 904 }
};

struct T_products
products[] = {
	{  "11",   "photo",  4448536, "None", "None" },
	{ "154",    "film",     2302, "None", "None" },
	{ "156",    "film", 17622723, "None", "None" },
	{ "179",    "film",  1432324, "None", "None" },
	{ "188",    "film", 49097627, "None", "None" },
	{  "21",   "photo", 22082866, "None", "None" },
	{ "216",    "film",   157216, "None", "None" },
	{ "232",   "photo",       22, "None", "None" },
	{ "233",   "photo",  4082352, "None", "None" },
	{ "250",   "photo",      797, "None", "None" },
	{ "273",   "photo",     1577, "None", "None" },
	{ "300", "dinning",    30625, "None", "None" },
	{  "46", "dinning",    50828, "None", "None" },
	{  "81", "dinning",   634660, "None", "None" },
	{  "83",    "film",      900, "None", "None" }
};

struct T_reference_payment_methods
reference_payment_methods[] = {
	{ "American E", "credit" },
	{ "MasterCard",  "debit" },
	{       "Visa",   "Visa" }
};

struct T_reference_service_types
reference_service_types[] = {
	{ "1", "1",         "provide photo service" },
	{ "2", "1",       "provide dinning service" },
	{ "3", "1",       "provide filming service" },
	{ "4", "1", "provide adv promoting service" }
};

struct T_services
services[] = {
	{ 191, "1", 415, "None",    "film", 58932775.8822, "None" },
	{ 219, "2", 838, "None",    "film",     2704.4719, "None" },
	{ 220, "1", 708, "None", "dinning",     6888.8306, "None" },
	{ 396, "3", 735, "None",   "photo",    31862.0853, "None" },
	{ 414, "2", 954, "None",   "photo",      213.9459, "None" },
	{ 421, "3", 470, "None",   "photo",      8004.988, "None" },
	{ 525, "4", 838, "None",   "photo",  3499362.8145, "None" },
	{ 597, "2", 735, "None",   "photo",     5396.2935, "None" },
	{ 630, "4", 176, "None",   "photo", 19845767.8923, "None" },
	{ 640, "2", 382, "None", "dinning",     7299.6747, "None" },
	{ 662, "2", 954, "None", "dinning",   641544.2835, "None" },
	{ 773, "3", 314, "None", "dinning",   827055.7309, "None" },
	{ 779, "1", 431, "None",    "film",     9130.7326, "None" },
	{ 798, "1", 176, "None",    "film", 84063402.4351, "None" },
	{ 840, "1", 405, "None",    "film",   187358.6469, "None" }
};

struct T_stores
stores[] = {
	{ "150", 286, "IN",  "FJA Filming",    "+65(1)3590790358",   "fjacobson@example.com",    "None" },
	{ "229", 266, "CA",  "Rob Dinning",      "1-327-185-9368",      "rborer@example.org", "5 stars" },
	{ "231", 230, "ES", "Adan Dinning",    "896-931-9633x869",      "adan93@example.com",    "None" },
	{ "236",  74, "CA", "Fred Dinning",   "893-457-3102x4293",  "frederik37@example.org",    "None" },
	{ "291", 266, "RU",  "Ewi Filming",    "+46(1)1411714927",     "ewisoky@example.org",    "None" },
	{ "344", 369, "ES",  "Shery Photo", "1-678-902-9434x1148",   "shirley07@example.net", "4 stars" },
	{ "421", 192, "FR", "Carmol Photo",  "(941)444-7666x7089",    "carmel04@example.com", "3 stars" },
	{ "444", 110, "CN",   "FK Filming",        "086-705-8793",    "fkuvalis@example.net",    "None" },
	{ "512", 369, "CA",   "Adam Photo",  "127.870.0753x54565", "adams.miles@example.net", "5 stars" },
	{ "518", 110, "ES",    "Lur Photo",        "605-319-8245",   "lurline24@example.org",    "None" }
};

#endif