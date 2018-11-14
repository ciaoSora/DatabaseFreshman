/*
Database "customers_and_invoices" contains tables:
	accounts
	customers
	financial_transactions
	invoice_line_items
	invoices
	order_items
	orders
	product_categories
	products
*/

#ifndef CUSTOMERS_AND_INVOICES
#define CUSTOMERS_AND_INVOICES

struct T_accounts {
	double account_id;
	double customer_id;	// --> customers.customer_id
	char date_account_opened[20];
	char account_name[4];
	char other_account_details[8];
};

struct T_customers {
	double customer_id;
	char customer_first_name[9];
	char customer_middle_initial[2];
	char customer_last_name[9];
	char gender[2];
	char email_address[30];
	char login_name[16];
	char login_password[21];
	char phone_number[21];
	char town_city[19];
	char state_county_province[13];
	char country[4];
};

struct T_financial_transactions {
	double transaction_id;
	double account_id;	// --> accounts.account_id
	double invoice_number;	// --> invoices.invoice_number
	char transaction_type[8];
	char transaction_date[20];
	double transaction_amount;
	char transaction_comment[5];
	char other_transaction_details[5];
};

struct T_invoice_line_items {
	double order_item_id;	// --> order_items.order_item_id
	double invoice_number;	// --> invoices.invoice_number
	double product_id;	// --> products.product_id
	char product_title[10];
	char product_quantity[2];
	double product_price;
	double derived_product_cost;
	double derived_vat_payable;
	double derived_total_cost;
};

struct T_invoices {
	double invoice_number;
	double order_id;	// --> orders.order_id
	char invoice_date[20];
};

struct T_order_items {
	double order_item_id;
	double order_id;	// --> orders.order_id
	double product_id;	// --> products.product_id
	char product_quantity[2];
	char other_order_item_details[5];
};

struct T_orders {
	double order_id;
	double customer_id;	// --> customers.customer_id
	char date_order_placed[20];
	char order_details[5];
};

struct T_product_categories {
	char production_type_code[12];
	char product_type_description[19];
	double vat_rating;
};

struct T_products {
	double product_id;
	double parent_product_id;
	char production_type_code[12];	// --> product_categories.production_type_code
	double unit_price;
	char product_name[17];
	char product_color[7];
	char product_size[7];
};

struct T_accounts
accounts[] = {
	{  1,  8, "2016-07-30 22:22:24", "900", "Regular" },
	{  2,  3, "2017-05-29 16:45:17", "520",     "VIP" },
	{  3,  8, "2012-05-04 18:50:32", "323", "Regular" },
	{  4, 15, "2011-03-29 15:06:59", "390",     "VIP" },
	{  5, 15, "2014-08-11 18:15:14", "935", "Regular" },
	{  6, 12, "2014-05-30 12:16:52", "371", "Regular" },
	{  7, 13, "2015-11-03 08:04:15", "398",     "VIP" },
	{  8,  9, "2009-06-13 11:41:52", "710", "Regular" },
	{  9,  8, "2010-10-22 13:33:45", "337", "Regular" },
	{ 10, 15, "2016-04-25 21:49:17", "429",     "VIP" },
	{ 11, 13, "2012-07-09 23:40:15", "191",     "VIP" },
	{ 12,  8, "2015-02-02 09:47:08", "601", "Regular" },
	{ 13, 13, "2010-06-16 09:35:00", "272", "Regular" },
	{ 14, 13, "2014-12-28 07:29:42", "861",     "VIP" },
	{ 15,  6, "2008-05-04 22:15:56", "662",     "VIP" }
};

struct T_customers
customers[] = {
	{  1,      "Dee", "A",   "Larkin", "1",      "thora.torphy@example.org",       "xhartmann", "77789d292604ea04406f",   "241.796.1219x37862",       "North Nellie", "WestVirginia", "USA" },
	{  2,  "Brennon", "H",  "Weimann", "0", "roosevelt.collier@example.org",    "shayne.lesch", "ce97a3e4539347daab96",    "(943)219-4234x415",      "South Isabell",     "Oklahoma", "USA" },
	{  3,   "Joesph", "K", "Schaefer", "0",  "homenick.ambrose@example.net", "feeney.lauriane", "a6c7a7064c36b038d402",        "(488)524-5345",        "New Nikolas",     "Arkansas", "USA" },
	{  4,     "Zita", "L",  "Trantow", "0",        "destinee06@example.com",   "rubye.padberg", "eb32d2933362d38faff7",   "(193)465-6674x4952",          "Ellaburgh",     "Colorado", "USA" },
	{  5,     "Murl", "B", "Shanahan", "1",          "jovani64@example.com",      "jankunding", "398c1603aec3e9de2684", "1-546-447-9843x13741",   "North Helmerbury",        "Idaho", "USA" },
	{  6,    "Vesta", "E", "Leuschke", "1",          "philip94@example.org",         "zdeckow", "bdbc3c18cf28303c4f6a",     "+69(0)7149212554",      "North Devonte",  "Mississippi", "USA" },
	{  7,  "Dangelo", "M",   "Spinka", "1",          "zullrich@example.net", "camilla.dubuque", "180a37476c537e78d3de",       "1-904-787-7320",    "West Khaliltown",       "Kansas", "USA" },
	{  8,  "Meaghan", "M",  "Keeling", "0",            "pyundt@example.org",     "lowe.wilber", "e67856613cd71f1b2884",          "06015518212",           "Kenshire",  "Mississippi", "USA" },
	{  9,    "Abbey", "B",  "Ruecker", "0",       "anastacio45@example.org",    "dubuque.gina", "d7629de5171fe29106c8",   "1-344-593-4896x425",       "Bruenchester",   "California", "USA" },
	{ 10,    "Devin", "V",   "Glover", "0",           "udeckow@example.com",      "ypowlowski", "604f9062a5a0de83ef9d",         "197-955-3766",  "Lake Eusebiomouth",      "Florida", "USA" },
	{ 11,    "Neoma", "G",    "Hauck", "1",          "michel92@example.org",   "ahmad.hagenes", "035f2ba1e2a675c4f426",     "+95(0)1523064649",   "New Rachellefort",      "Alabama", "USA" },
	{ 12,   "Jensen", "M",   "Muller", "0",       "lew.nicolas@example.org",         "pbecker", "5fe7c12dc3176ddf67c4",        "(650)406-8761",         "Carleefort",      "Montana", "USA" },
	{ 13,   "Kieran", "A",     "Auer", "0",            "nnolan@example.org",        "sophia97", "d4ade599672bccdabeee",  "(157)046-6255x98627",  "Lake Freemanville",     "Kentucky", "USA" },
	{ 14, "Percival", "B",  "Kessler", "1",     "jacobi.shanon@example.org",       "lucy.jast", "178613c20728eec256db",  "(791)562-7792x45732",        "Port Hollie",    "Louisiana", "USA" },
	{ 15,     "Ruby", "K",    "Boyle", "0",            "gwolff@example.net",          "dthiel", "eff2c0dbf972481ba23c",       "1-546-302-5676", "East Stephaniafort",  "SouthDakota", "USA" }
};

struct T_financial_transactions
financial_transactions[] = {
	{  1, 13, 12, "Payment", "2018-03-15 21:13:57",  613.96, "None", "None" },
	{  2,  9,  1, "Payment", "2018-03-13 13:27:46",  368.46, "None", "None" },
	{  3,  6,  1,  "Refund", "2018-03-03 01:50:25", 1598.25, "None", "None" },
	{  4,  9, 12, "Payment", "2018-03-10 13:46:48",  540.73, "None", "None" },
	{  5,  9,  2, "Payment", "2018-03-23 04:56:12", 1214.22, "None", "None" },
	{  6, 12,  3,  "Refund", "2018-03-22 21:58:37", 1903.41, "None", "None" },
	{  7, 13, 14, "Payment", "2018-03-12 03:06:52", 1585.03, "None", "None" },
	{  8, 14, 15, "Payment", "2018-03-11 21:57:47", 1425.41, "None", "None" },
	{  9,  8, 12, "Payment", "2018-03-07 04:32:54", 1517.77, "None", "None" },
	{ 10,  6, 15, "Payment", "2018-03-14 19:09:07", 1477.57, "None", "None" },
	{ 11,  6, 13,  "Refund", "2018-03-12 22:51:05", 1567.64, "None", "None" },
	{ 12,  9,  6,  "Refund", "2018-03-05 19:55:23", 1781.24, "None", "None" },
	{ 13, 13, 12,  "Refund", "2018-03-24 12:05:11",  899.87, "None", "None" },
	{ 14, 11,  5,  "Refund", "2018-03-13 03:51:59", 1462.62, "None", "None" },
	{ 15,  4, 14,  "Refund", "2018-02-27 14:58:30", 1979.66, "None", "None" }
};

struct T_invoice_line_items
invoice_line_items[] = {
	{ 14,  9,  5, "prod_name", "4", 742.37, 191.11, None, 69.82 },
	{  3,  9, 15, "prod_name", "1", 814.87, 176.29, None, 59.56 },
	{  4, 10, 15, "prod_name", "8", 943.07,  73.14, None, 59.93 },
	{  6, 15, 14, "prod_name", "2",  749.6, 197.06, None, 82.77 },
	{  8, 11, 10, "prod_name", "2", 942.99,  88.43, None, 86.56 },
	{  9, 11,  9, "prod_name", "6", 486.69,  64.67, None,  83.4 },
	{  8, 14,  3, "prod_name", "3", 995.34,  28.18, None, 58.24 },
	{ 11,  1,  6, "prod_name", "9", 429.05, 254.08, None, 79.48 },
	{ 15,  9,  3, "prod_name", "4", 727.41,     66, None, 53.53 },
	{  7,  9, 14, "prod_name", "9", 559.95,  89.16, None, 45.66 },
	{  5,  7,  8, "prod_name", "6", 787.61, 150.04, None, 51.27 },
	{ 10, 10,  1, "prod_name", "9", 781.46, 256.84, None, 71.22 },
	{ 10, 14, 11, "prod_name", "7",  884.4, 249.19, None, 78.26 },
	{ 10,  5, 11, "prod_name", "5", 556.36, 295.26, None,    61 },
	{  8, 12,  6, "prod_name", "8", 597.28, 188.71, None, 98.77 }
};

struct T_invoices
invoices[] = {
	{  1,  9, "2018-03-01 16:40:48" },
	{  2,  9, "2018-03-20 00:21:41" },
	{  3,  3, "2018-03-05 08:47:33" },
	{  4,  9, "2018-02-28 19:01:06" },
	{  5, 13, "2018-03-07 02:04:32" },
	{  6,  8, "2018-03-16 21:57:43" },
	{  7, 10, "2018-03-13 07:27:38" },
	{  8, 10, "2018-03-19 17:06:30" },
	{  9, 12, "2018-03-16 11:01:06" },
	{ 10, 11, "2018-03-01 01:44:08" },
	{ 11,  5, "2018-03-23 04:59:28" },
	{ 12,  3, "2018-03-15 21:24:13" },
	{ 13,  3, "2018-03-03 20:44:06" },
	{ 14,  4, "2018-03-19 22:38:10" },
	{ 15, 14, "2018-03-15 09:38:49" }
};

struct T_order_items
order_items[] = {
	{  1,  4,  4, "6", "None" },
	{  2,  4, 10, "7", "None" },
	{  3, 15,  5, "4", "None" },
	{  4,  1,  3, "9", "None" },
	{  5,  2, 14, "3", "None" },
	{  6, 13, 12, "8", "None" },
	{  7,  1, 15, "3", "None" },
	{  8, 10,  4, "4", "None" },
	{  9, 14,  5, "1", "None" },
	{ 10, 13,  9, "2", "None" },
	{ 11, 15,  7, "5", "None" },
	{ 12,  4, 14, "4", "None" },
	{ 13, 12, 13, "1", "None" },
	{ 14, 13, 14, "2", "None" },
	{ 15, 13, 14, "6", "None" }
};

struct T_orders
orders[] = {
	{  1, 12, "2012-06-27 20:49:56", "None" },
	{  2, 12, "2012-08-25 07:51:54", "None" },
	{  3,  8, "2017-11-05 15:32:38", "None" },
	{  4,  5, "2017-11-27 21:50:58", "None" },
	{  5, 15, "2015-05-17 03:05:32", "None" },
	{  6,  5, "2015-11-25 22:55:41", "None" },
	{  7,  3, "2016-04-15 03:33:59", "None" },
	{  8,  3, "2010-01-28 03:43:26", "None" },
	{  9,  2, "2017-03-08 05:42:10", "None" },
	{ 10, 11, "2017-12-04 02:59:10", "None" },
	{ 11, 14, "2010-10-22 06:45:16", "None" },
	{ 12,  1, "2017-05-24 19:26:44", "None" },
	{ 13, 10, "2015-08-06 22:40:40", "None" },
	{ 14, 10, "2017-10-29 04:20:08", "None" },
	{ 15,  6, "2013-10-25 17:40:25", "None" }
};

struct T_product_categories
product_categories[] = {
	{        "Food",               "Food", 15.84 },
	{        "DVDs",       "Dvd products",  11.4 },
	{       "Books",              "Books", 13.95 },
	{ "Electronics", "Electrical devices",  17.9 }
};

struct T_products
products[] = {
	{  1, 4,        "Food", 617.95,      "Coffee Bean",    "Red", "Medium" },
	{  2, 4,       "Books", 558.49,  "Learning French", "Yellow", "Medium" },
	{  3, 8, "Electronics", 563.58,             "Fans",  "Black", "Medium" },
	{  4, 8, "Electronics", 985.78,       "Hard Drive",  "Black",  "Small" },
	{  5, 7,        "DVDs", 682.06,             "Arts", "Yellow",  "Small" },
	{  6, 7,       "Books", 469.71,      "Art History", "Yellow",  "Small" },
	{  7, 5,       "Books", 409.83, "Learning English",    "Red",  "Large" },
	{  8, 1,       "Books",  49.62,            "Menus",  "Black",  "Small" },
	{  9, 8,        "Food", 694.31,       "Beer Menus",  "Black",  "Small" },
	{ 10, 9, "Electronics", 937.85,               "TV",    "Red", "Medium" },
	{ 11, 8,        "DVDs",  52.88,   "Harry Potter 1",  "Black",  "Small" },
	{ 12, 1,        "DVDs", 729.09,   "Harry Potter 2",    "Red", "Medium" },
	{ 13, 6,        "Food", 639.76,        "Chocolate", "Yellow",  "Small" },
	{ 14, 1,        "DVDs", 469.87,   "Harry Potter 3", "Yellow",  "Small" },
	{ 15, 2,        "DVDs",  82.96,   "Harry Potter 4", "Yellow",  "Large" }
};

#endif