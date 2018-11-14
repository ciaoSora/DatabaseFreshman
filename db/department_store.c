/*
Database "department_store" contains tables:
	addresses
	customer_addresses
	customer_orders
	customers
	department_store_chain
	department_stores
	departments
	order_items
	product_suppliers
	products
	staff
	staff_department_assignments
	supplier_addresses
	suppliers
*/

#ifndef DEPARTMENT_STORE
#define DEPARTMENT_STORE

struct T_addresses {
	double address_id;
	char address_details[58];
};

struct T_customer_addresses {
	double customer_id;	// --> customers.customer_id
	double address_id;	// --> addresses.address_id
	char date_from[20];
	char date_to[20];
};

struct T_customer_orders {
	double order_id;
	double customer_id;	// --> customers.customer_id
	char order_status_code[11];
	char order_date[20];
};

struct T_customers {
	double customer_id;
	char payment_method_code[13];
	char customer_code[4];
	char customer_name[10];
	char customer_address[60];
	char customer_phone[21];
	char customer_email[32];
};

struct T_department_store_chain {
	double department_store_chain_id;
	char department_store_chain_name[6];
};

struct T_department_stores {
	double department_store_id;
	double department_store_chain_id;	// --> department_store_chain.department_store_chain_id
	char store_name[11];
	char store_address[60];
	char store_phone[21];
	char store_email[30];
};

struct T_departments {
	double department_id;
	double department_store_id;	// --> department_stores.department_store_id
	char department_name[15];
};

struct T_order_items {
	double order_item_id;
	double order_id;	// --> customer_orders.order_id
	double product_id;	// --> products.product_id
};

struct T_product_suppliers {
	double product_id;	// --> products.product_id
	double supplier_id;	// --> suppliers.supplier_id
	char date_supplied_from[20];
	char date_supplied_to[20];
	char total_amount_purchased[9];
	double total_value_purchased;
};

struct T_products {
	double product_id;
	char product_type_code[9];
	char product_name[15];
	double product_price;
};

struct T_staff {
	double staff_id;
	char staff_gender[2];
	char staff_name[10];
};

struct T_staff_department_assignments {
	double staff_id;	// --> staff.staff_id
	double department_id;	// --> departments.department_id
	char date_assigned_from[20];
	char job_title_code[19];
	char date_assigned_to[20];
};

struct T_supplier_addresses {
	double supplier_id;	// --> suppliers.supplier_id
	double address_id;	// --> addresses.address_id
	char date_from[20];
	char date_to[20];
};

struct T_suppliers {
	double supplier_id;
	char supplier_name[9];
	char supplier_phone[20];
};

struct T_addresses
addresses[] = {
	{  1,            "28481 Crist Circle
East Burdettestad, IA 21232" },
	{  2,             "0292 Mitchel Pike
Port Abefurt, IA 84402-4249" },
	{  3,              "4062 Mante Place
West Lindsey, DE 76199-8015" },
	{  4,           "99666 Julie Junction
Marvinburgh, OH 16085-1623" },
	{  5,                       "195 Mara Rue
Jenkinsmouth, OK 22345" },
	{  6,                     "11784 Stehr Road
Port Isaac, NV 61159" },
	{  7,   "69482 Renner Ville Suite 653
Langworthborough, OH 95195" },
	{  8,                     "36594 O'Keefe Lock
New Cali, RI 42319" },
	{  9,      "7181 Wuckert Port Apt. 571
Lake Zariaburgh, IL 98085" },
	{ 10,              "92594 Marvin Trafficway
Pourosfurt, IA 98649" },
	{ 11, "0258 Kessler Mountains Suite 688
Mooreside, ME 41586-5022" },
	{ 12,             "69275 Mose Drive
Wilkinsonstad, CO 79055-7622" },
	{ 13,             "8207 Morissette Lakes
East Rheaview, ID 47493" },
	{ 14,                    "145 Alice Corners
Willmsport, NV 36680" },
	{ 15,     "521 Molly Harbors Apt. 567
Reingerland, HI 97099-1005" }
};

struct T_customer_addresses
customer_addresses[] = {
	{  2,  9, "2017-12-11 05:00:22", "2018-03-20 20:52:34" },
	{  1,  6, "2017-10-07 23:00:26", "2018-02-28 14:53:52" },
	{ 10,  8, "2017-04-04 20:00:27", "2018-02-27 20:08:33" },
	{  1,  9, "2017-12-14 07:40:08", "2018-03-24 14:31:59" },
	{  1,  2, "2017-07-31 20:18:52", "2018-03-12 05:32:28" },
	{  8,  2, "2018-01-27 06:27:34", "2018-03-23 17:49:51" },
	{  1, 14, "2017-08-06 20:57:36", "2018-03-05 21:19:53" },
	{  6, 13, "2017-09-07 04:41:01", "2018-02-27 23:10:07" },
	{  7,  7, "2017-10-02 19:56:27", "2018-03-22 17:22:34" },
	{  8,  4, "2018-01-15 12:05:39", "2018-03-13 21:49:51" },
	{  7,  4, "2018-02-22 04:46:48", "2018-02-26 00:52:25" },
	{  2,  4, "2017-11-28 23:36:20", "2018-03-02 17:46:11" },
	{ 12, 14, "2017-11-01 04:21:41", "2018-03-05 16:18:34" },
	{  7, 10, "2018-01-07 13:31:08", "2018-03-09 07:06:56" },
	{  4, 12, "2017-08-27 13:38:37", "2018-03-17 15:44:10" }
};

struct T_customer_orders
customer_orders[] = {
	{  1, 12,  "Completed", "2018-02-10 15:44:48" },
	{  2,  4,        "New", "2018-01-31 17:49:18" },
	{  3,  1, "PartFilled", "2018-02-26 12:39:33" },
	{  4,  4,    "Pending", "2018-03-07 16:55:17" },
	{  5,  4,        "New", "2018-02-12 19:34:12" },
	{  6, 11, "PartFilled", "2018-03-06 16:35:51" },
	{  7,  1,  "Cancelled", "2018-02-15 02:25:32" },
	{  8, 13,    "Pending", "2018-03-05 23:17:54" },
	{  9,  7,    "Pending", "2018-02-09 11:16:46" },
	{ 10, 11,  "Cancelled", "2018-03-22 10:49:25" },
	{ 11,  8,  "Cancelled", "2018-02-16 19:42:39" },
	{ 12,  4,        "New", "2018-02-02 23:42:01" },
	{ 13, 15, "PartFilled", "2018-02-26 05:34:18" },
	{ 14,  6,  "Completed", "2018-03-18 15:12:39" },
	{ 15, 10,    "Pending", "2018-03-16 22:42:46" }
};

struct T_customers
customers[] = {
	{  1,  "Credit Card", "401",     "Ahmed",     "75099 Tremblay Port Apt. 163
South Norrisland, SC 80546",   "254-072-4068x33935", "margarett.vonrueden@example.com" },
	{  2,  "Credit Card", "665",  "Chauncey",            "8408 Lindsay Court
East Dasiabury, IL 72656-3552",     "+41(8)1897032009",   "stiedemann.sigrid@example.com" },
	{  3, "Direct Debit", "844",     "Lukas",    "7162 Rodolfo Knoll Apt. 502
Lake Annalise, TN 35791-8871",         "197-417-3557",      "joelle.monahan@example.com" },
	{  4, "Direct Debit", "662",     "Lexus",        "9581 Will Flat Suite 272
East Cathryn, WY 30751-4404",     "+08(3)8056580281",             "gbrekke@example.com" },
	{  5,  "Credit Card", "848",      "Tara",              "5065 Mraz Fields Apt. 041
East Chris, NH 41624",   "1-064-498-6609x051",          "nicholas44@example.com" },
	{  6,  "Credit Card", "916",       "Jon",                 "841 Goyette Unions
South Dionbury, NC 62021",    "(443)013-3112x528",             "cconroy@example.net" },
	{  7,  "Credit Card", "172", "Cristobal",   "8327 Christiansen Lakes Suite 409
Schneiderland, IA 93624",   "877-150-8674x63517",    "shawna.cummerata@example.net" },
	{  8, "Direct Debit", "927",      "Adah",                      "5049 Hand Land
Coymouth, IL 97300-7731", "1-695-364-7586x59256",           "kathlyn24@example.org" },
	{  9,  "Credit Card", "808",   "Yasmeen", "3558 Witting Meadow Apt. 483
Lake Moriahbury, OH 91556-2122",   "587.398.2400x31176",            "ludwig54@example.net" },
	{ 10,  "Credit Card", "887",    "Karson",               "7308 Joan Lake Suite 346
Lizethtown, DE 56522",   "857-844-9339x40140",            "moriah91@example.com" },
	{ 11, "Direct Debit", "611",   "Cordell",        "362 Fisher Forge Apt. 900
New Mckenna, CA 98525-5674",        "(730)934-8249",             "qstokes@example.org" },
	{ 12,  "Credit Card", "182",    "Darron",                      "84445 Elinor Glens
Port Zita, SD 39410",         "117.822.3577",             "gwisozk@example.net" },
	{ 13,  "Credit Card", "589",     "Kenya",        "338 Floy Mountains Suite 589
Yesseniaville, TN 60847",          "08023680831",            "maxime86@example.net" },
	{ 14, "Direct Debit", "240",     "Abbie",           "983 Elinore Passage
Darrionborough, SC 53915-0479",          "07594320656",        "celine.bogan@example.com" },
	{ 15,  "Credit Card", "980",     "Lyric",                         "649 Ocie Lights
Wyatttown, UT 12697",       "1-472-036-0434",     "schultz.arnoldo@example.net" }
};

struct T_department_store_chain
department_store_chain[] = {
	{ 1, "South" },
	{ 2,  "West" },
	{ 3,  "East" },
	{ 4, "North" }
};

struct T_department_stores
department_stores[] = {
	{  1, 1, "store_name",     "01290 Jeremie Parkway Suite 753
North Arielle, MS 51249",   "(948)944-5099x2027",           "bmaggio@example.com" },
	{  2, 3, "store_name",               "082 Purdy Expressway
O'Connellshire, IL 31732",         "877-917-5029",         "larissa10@example.org" },
	{  3, 4, "store_name",              "994 Travis Plains
North Wadeton, WV 27575-3951",       "1-216-312-0375", "alexandro.mcclure@example.net" },
	{  4, 2, "store_name",           "93472 Mayert Shore Apt. 360
Mitchellton, TN 84209",         "670-466-6367",           "bryon24@example.org" },
	{  5, 3, "store_name",                 "88112 Parisian Lights
Sporermouth, MN 25962",          "01399327266",          "creola23@example.org" },
	{  6, 4, "store_name",        "49708 Marcella Valleys Suite 181
Ninamouth, WA 86667",       "1-859-843-1957",    "jerod.reynolds@example.net" },
	{  7, 4, "store_name",                  "41924 Alfredo Cliff
New Eviestad, NY 17573", "1-109-872-9142x77078",           "ihamill@example.org" },
	{  8, 4, "store_name",                "7081 Shanna Cape
West Zacheryshire, NC 17408",     "+67(5)4983519062",     "casper.adolfo@example.org" },
	{  9, 4, "store_name",                    "5288 Kaia Street
Devonton, NJ 61782-9006",    "(723)503-7086x356", "selmer.stiedemann@example.org" },
	{ 10, 3, "store_name",    "00578 Lisa Gateway Suite 476
Strosinville, VA 03998-3292",          "07126036440",           "luisa57@example.org" },
	{ 11, 2, "store_name",             "34894 Everett Road
South Jeremiehaven, GA 08730",         "611-037-9309",    "vonrueden.vern@example.org" },
	{ 12, 4, "store_name",          "2676 Cruickshank Gardens
North Ginahaven, CT 85046",        "(626)763-7031",         "freda.toy@example.org" },
	{ 13, 2, "store_name",     "29297 West Road Suite 210
West Dulceside, UT 58085-8998",  "1-764-126-7567x0795",         "katlynn62@example.com" },
	{ 14, 1, "store_name", "16650 Lysanne River Apt. 281
North Garettton, AL 84756-4375",         "319.331.3397",        "mohr.elwin@example.net" },
	{ 15, 3, "store_name",        "82470 Hansen Squares Suite 190
Wehnermouth, NC 76791",   "(587)993-3604x3077",           "kelly30@example.com" }
};

struct T_departments
departments[] = {
	{ 1,  5, "human resource" },
	{ 2, 11,     "purchasing" },
	{ 3,  4,      "marketing" },
	{ 4, 11,    "advertising" },
	{ 5,  4,       "managing" }
};

struct T_order_items
order_items[] = {
	{  1,  9,  7 },
	{  2,  1,  3 },
	{  3,  5,  2 },
	{  4, 14, 10 },
	{  5, 15,  4 },
	{  6, 14, 13 },
	{  7,  6, 13 },
	{  8, 12,  8 },
	{  9, 13, 12 },
	{ 10, 14, 13 },
	{ 11,  7, 11 },
	{ 12, 14, 14 },
	{ 13, 15,  5 },
	{ 14,  8, 10 },
	{ 15,  5,  4 }
};

struct T_product_suppliers
product_suppliers[] = {
	{  4, 3, "2017-06-19 00:49:05", "2018-03-24 19:29:18", "89366.05",  36014.6 },
	{  8, 4, "2017-07-02 00:35:12", "2018-03-25 07:30:49", "25085.57", 36274.56 },
	{  3, 3, "2017-10-14 19:15:37", "2018-03-24 02:29:44", "15752.45",  7273.74 },
	{  7, 1, "2017-08-22 00:58:42", "2018-03-24 02:38:31", "22332.08",  8042.78 },
	{ 15, 4, "2017-12-08 09:14:05", "2018-03-24 23:03:30", "25318.21", 29836.26 },
	{ 11, 1, "2017-12-01 19:46:53", "2018-03-24 05:22:36", "35149.74", 67216.31 },
	{ 11, 3, "2017-07-13 15:02:24", "2018-03-24 23:01:03", "31862.59", 76992.42 },
	{  5, 2, "2017-07-28 19:23:39", "2018-03-24 09:17:15", "85922.86", 82524.95 },
	{  6, 2, "2017-12-20 07:07:31", "2018-03-24 23:25:58", "64444.18", 97371.12 },
	{  4, 1, "2017-09-19 02:14:02", "2018-03-25 09:15:30", "32881.38", 29987.71 },
	{ 15, 2, "2017-08-07 12:08:00", "2018-03-23 19:21:12", "13712.91", 48100.23 },
	{  4, 4, "2017-06-09 01:30:40", "2018-03-24 12:35:08", "79316.31",  98086.8 },
	{  8, 2, "2017-06-25 14:59:40", "2018-03-24 12:27:13", "83873.58", 99049.01 },
	{  7, 4, "2017-11-17 08:23:16", "2018-03-25 12:03:33", "20689.78", 61800.95 },
	{ 14, 1, "2017-08-09 21:26:38", "2018-03-24 18:16:47", "20447.99",  27257.6 }
};

struct T_products
products[] = {
	{  1,  "Clothes",      "red jeans", 734.73 },
	{  2,  "Clothes",   "yellow jeans", 687.23 },
	{  3,  "Clothes",    "black jeans", 695.16 },
	{  4,  "Clothes",     "blue jeans", 939.57 },
	{  5,  "Clothes",      "red jeans", 534.52 },
	{  6,  "Clothes",    "red topping", 408.82 },
	{  7,  "Clothes",  "black topping", 916.53 },
	{  8,  "Clothes", "yellow topping", 918.41 },
	{  9,  "Clothes",   "blue topping", 604.86 },
	{ 10, "Hardware",        "monitor", 813.76 },
	{ 11, "Hardware",          "mouse", 803.74 },
	{ 12, "Hardware",          "drive", 944.96 },
	{ 13, "Hardware",       "keyboard", 629.89 },
	{ 14, "Hardware",        "speaker", 612.46 },
	{ 15, "Hardware",            "mic", 971.44 }
};

struct T_staff
staff[] = {
	{  1, "1",       "Tom" },
	{  2, "1",    "Malika" },
	{  3, "1",  "Katelynn" },
	{  4, "1",   "Vanessa" },
	{  5, "0",   "Maximus" },
	{  6, "1",     "Tyson" },
	{  7, "1",   "Yolanda" },
	{  8, "1",      "Vito" },
	{  9, "1",    "Zakary" },
	{ 10, "1",   "Sabrina" },
	{ 11, "1",    "Dannie" },
	{ 12, "1",    "Melody" },
	{ 13, "1", "Archibald" },
	{ 14, "1",  "Adrienne" },
	{ 15, "1",    "Kristy" }
};

struct T_staff_department_assignments
staff_department_assignments[] = {
	{  5, 4, "2017-06-11 22:55:20", "Department Manager", "2018-03-23 21:59:11" },
	{ 10, 5, "2017-12-18 19:12:15",       "Sales Person", "2018-03-23 20:25:24" },
	{  1, 5, "2018-02-14 03:15:29",     "Clerical Staff", "2018-03-24 19:57:56" },
	{  8, 1, "2017-05-14 12:30:33",     "Clerical Staff", "2018-03-25 03:15:31" },
	{ 15, 2, "2017-03-31 23:07:54", "Department Manager", "2018-03-24 09:11:14" },
	{  2, 5, "2017-11-14 04:38:44",     "Administration", "2018-03-24 07:04:28" },
	{  9, 4, "2016-09-20 02:59:15",       "Sales Person", "2018-03-24 20:13:13" },
	{  8, 2, "2017-05-10 02:32:17",     "Administration", "2018-03-24 02:36:57" },
	{  3, 5, "2016-10-19 08:11:39",     "Clerical Staff", "2018-03-25 15:34:31" },
	{  6, 1, "2017-12-26 06:34:20", "Department Manager", "2018-03-25 09:53:37" },
	{  6, 2, "2016-09-15 11:00:41",     "Administration", "2018-03-25 02:29:08" },
	{  8, 5, "2017-06-06 22:22:17",     "Clerical Staff", "2018-03-24 13:02:22" },
	{ 12, 5, "2016-11-12 14:10:55",       "Sales Person", "2018-03-25 02:59:19" },
	{  7, 3, "2016-05-17 07:02:37",     "Clerical Staff", "2018-03-24 10:45:21" },
	{  2, 3, "2016-06-24 17:31:24",     "Administration", "2018-03-25 13:32:57" }
};

struct T_supplier_addresses
supplier_addresses[] = {
	{ 4,  5, "2016-09-22 16:41:31", "2018-03-14 20:06:37" },
	{ 3,  9, "2014-11-07 19:18:49", "2018-03-16 16:39:58" },
	{ 3,  2, "2008-11-22 12:01:25", "2018-03-02 19:50:22" },
	{ 2, 11, "2015-03-16 19:30:29", "2018-03-24 00:14:45" }
};

struct T_suppliers
suppliers[] = {
	{ 1,     "Lidl",       "(692)009-5928" },
	{ 2, "AB Store",      "1-483-283-4742" },
	{ 3,    "Tesco",    "287-071-1153x254" },
	{ 4,     "Audi", "1-432-960-2402x1734" }
};

#endif