/*
Database "customer_deliveries" contains tables:
	actual_order_products
	actual_orders
	addresses
	customer_addresses
	customers
	delivery_route_locations
	delivery_routes
	employees
	order_deliveries
	products
	regular_order_products
	regular_orders
	trucks
*/

#ifndef CUSTOMER_DELIVERIES
#define CUSTOMER_DELIVERIES

struct T_actual_order_products {
	double actual_order_id;	// --> actual_orders.actual_order_id
	double product_id;	// --> products.product_id
};

struct T_actual_orders {
	double actual_order_id;
	char order_status_code[8];
	double regular_order_id;	// --> regular_orders.regular_order_id
	char actual_order_date[20];
};

struct T_addresses {
	double address_id;
	char address_details[32];
	char city[18];
	char zip_postcode[4];
	char state_province_county[14];
	char country[4];
};

struct T_customer_addresses {
	double customer_id;	// --> customers.customer_id
	double address_id;	// --> addresses.address_id
	char date_from[20];
	char address_type[10];
	char date_to[20];
};

struct T_customers {
	double customer_id;
	char payment_method[11];
	char customer_name[19];
	char customer_phone[21];
	char customer_email[30];
	char date_became_customer[20];
};

struct T_delivery_route_locations {
	char location_code[14];
	double route_id;	// --> delivery_routes.route_id
	double location_address_id;	// --> addresses.address_id
	char location_name[36];
};

struct T_delivery_routes {
	double route_id;
	char route_name[32];
	char other_route_details[60];
};

struct T_employees {
	double employee_id;
	double employee_address_id;	// --> addresses.address_id
	char employee_name[9];
	char employee_phone[19];
};

struct T_order_deliveries {
	char location_code[12];	// --> delivery_route_locations.location_code
	double actual_order_id;	// --> actual_orders.actual_order_id
	char delivery_status_code[10];
	double driver_employee_id;	// --> employees.employee_id
	double truck_id;	// --> trucks.truck_id
	char delivery_date[20];
};

struct T_products {
	double product_id;
	char product_name[12];
	double product_price;
	char product_description[16];
};

struct T_regular_order_products {
	double regular_order_id;	// --> regular_orders.regular_order_id
	double product_id;	// --> products.product_id
};

struct T_regular_orders {
	double regular_order_id;
	double distributer_id;	// --> customers.customer_id
};

struct T_trucks {
	double truck_id;
	char truck_licence_number[6];
	char truck_details[9];
};

struct T_actual_order_products
actual_order_products[] = {
	{  2, 1 },
	{ 14, 5 },
	{ 13, 6 },
	{  9, 2 },
	{  3, 2 },
	{  2, 3 },
	{ 13, 2 },
	{  3, 1 },
	{  3, 1 },
	{ 10, 3 },
	{  6, 6 },
	{  5, 5 },
	{  7, 3 },
	{  5, 3 },
	{ 15, 4 }
};

struct T_actual_orders
actual_orders[] = {
	{  1, "Success",  8, "2018-03-02 23:26:19" },
	{  2,  "Cancel", 15, "2018-03-02 08:33:39" },
	{  3,  "Cancel",  4, "2018-02-25 10:13:36" },
	{  4,  "Cancel", 10, "2018-03-21 01:34:52" },
	{  5,  "Cancel", 14, "2018-02-28 15:31:06" },
	{  6, "Success", 12, "2018-03-12 05:33:57" },
	{  7, "Success",  1, "2018-03-06 12:20:31" },
	{  8,  "Cancel", 11, "2018-03-22 19:30:17" },
	{  9, "Success",  6, "2018-03-13 05:43:25" },
	{ 10, "Success", 13, "2018-03-05 17:31:36" },
	{ 11,  "Cancel",  4, "2018-03-16 00:28:09" },
	{ 12,  "Cancel", 12, "2018-02-26 01:55:52" },
	{ 13,  "Cancel",  8, "2018-03-11 10:45:05" },
	{ 14,  "Cancel",  4, "2018-03-12 11:24:59" },
	{ 15,  "Cancel",  7, "2018-03-10 18:22:34" }
};

struct T_addresses
addresses[] = {
	{  1,     "92283 Lora Forges Suite 322",         "Mohrville", "271",      "Nebraska", "USA" },
	{  2,      "17135 Jaida Fork Suite 798",        "East Brody", "940",      "Colorado", "USA" },
	{  3,   "41099 Crist Prairie Suite 507",       "Evelinebury", "003",         "Idaho", "USA" },
	{  4,          "615 Adams Rue Apt. 095",       "Sawaynville", "575",      "Kentucky", "USA" },
	{  5, "045 Marquardt Village Suite 484",        "Carterside", "827",    "California", "USA" },
	{  6,                "203 Joseph Hills",       "Giovannaton", "960",     "Tennessee", "USA" },
	{  7,    "6187 Feil Extension Apt. 749",     "East Frederic", "674",         "Maine", "USA" },
	{  8,     "185 Farrell Brooks Apt. 106",     "Mosciskimouth", "076",      "Illinois", "USA" },
	{  9,      "3720 Pagac Hollow Apt. 131",       "Alvertatown", "234",       "Wyoming", "USA" },
	{ 10,  "57136 Eichmann Ranch Suite 091",       "Gerholdtown", "297",      "Illinois", "USA" },
	{ 11,   "3020 Steuber Gardens Apt. 620",       "Flossiefurt", "460",      "Michigan", "USA" },
	{ 12,     "2060 Hilpert Forge Apt. 379",         "Annietown", "491",      "Michigan", "USA" },
	{ 13,                "469 Roberts Mews",        "Lake Abbey", "838",    "Washington", "USA" },
	{ 14,               "8701 Myrtis Ranch", "North Marquesfort", "940",          "Ohio", "USA" },
	{ 15,   "06959 Garett Meadows Apt. 259", "New Lizziechester", "934", "Massachusetts", "USA" }
};

struct T_customer_addresses
customer_addresses[] = {
	{  5,  6, "2016-09-06 19:23:46",     "House", "2018-02-25 15:34:58" },
	{ 14,  5, "2016-12-21 03:49:54",     "House", "2018-03-13 21:20:21" },
	{  2,  2, "2014-06-09 06:31:49",      "Flat", "2018-03-02 21:56:40" },
	{ 10,  6, "2011-05-24 21:49:34",     "House", "2018-03-18 12:45:44" },
	{ 14,  2, "2011-12-06 16:49:10",      "Flat", "2018-02-24 20:18:08" },
	{ 10,  1, "2012-05-24 11:47:54",     "House", "2018-03-14 20:26:33" },
	{  7,  3, "2016-08-17 17:45:20",      "Flat", "2018-03-16 14:09:24" },
	{  4,  9, "2009-08-03 03:17:03",     "House", "2018-03-15 23:45:59" },
	{  3,  7, "2010-12-29 11:01:39",     "House", "2018-03-22 02:54:10" },
	{ 12,  6, "2012-08-31 15:41:03",      "Flat", "2018-03-02 23:42:49" },
	{ 12, 11, "2008-04-02 08:23:13", "Apartment", "2018-03-17 12:51:37" },
	{ 14, 10, "2011-08-18 09:40:49",     "House", "2018-03-06 15:48:13" },
	{  1, 11, "2014-12-20 18:58:32",     "House", "2018-02-27 00:53:48" },
	{  8,  6, "2013-05-06 00:49:45",      "Flat", "2018-03-05 01:34:02" },
	{ 12,  5, "2017-11-01 10:59:35",      "Flat", "2018-03-09 05:05:17" }
};

struct T_customers
customers[] = {
	{  1,       "Visa",          "Ron Emard", "1-382-503-5179x53639",         "shaniya45@example.net", "2011-04-25 22:20:35" },
	{  2, "MasterCard",     "Gabe Schroeder",  "1-728-537-4293x0885",       "alexandra91@example.net", "2011-10-17 16:08:25" },
	{  3,   "Discover",  "Candace Schneider",    "940.575.3682x7959",         "tkassulke@example.com", "2012-01-11 21:17:01" },
	{  4,       "Visa",         "Jaden Lang",    "361.151.3489x7272",          "dedric17@example.org", "2009-12-29 17:38:10" },
	{  5,       "Visa",     "Geovanni Grady",       "1-005-644-2495",  "elmira.langworth@example.org", "2017-05-21 07:09:55" },
	{  6,       "Visa", "Dr. Karine Farrell",     "+49(2)0677806107", "reichel.winnifred@example.org", "2010-11-06 08:42:56" },
	{  7,   "Discover",    "Emmanuel Reilly",         "129.959.6420", "gleichner.ethelyn@example.net", "2013-11-29 06:15:22" },
	{  8, "MasterCard",       "Keenan Kuhic",     "686-517-9923x348",          "dallin76@example.org", "2013-04-09 18:17:05" },
	{  9,   "American",        "Rusty Morar",  "1-123-197-9677x7194",          "njenkins@example.org", "2015-09-09 09:29:06" },
	{ 10,       "Visa",          "Lila Howe",       "1-492-284-1097",      "leann.hamill@example.org", "2014-02-04 04:51:58" },
	{ 11,       "Visa",  "Amalia Hudson DDS",     "003-991-1506x483",          "danika49@example.com", "2014-02-25 19:39:51" },
	{ 12,   "Discover",      "Verda Streich",          "06730471330",           "xgraham@example.org", "2008-10-12 12:19:27" },
	{ 13,   "Discover",     "Patience Yundt",     "969-208-8932x715",            "kira82@example.com", "2017-03-25 18:48:04" },
	{ 14,       "Visa",     "Annabell Walsh",   "(881)096-1281x6448",         "adriana83@example.org", "2017-06-30 19:02:11" },
	{ 15,       "Visa",    "Aracely Borer V",         "531-617-3230",          "rollin95@example.net", "2015-09-13 22:39:50" }
};

struct T_delivery_route_locations
delivery_route_locations[] = {
	{    "27 City Rd", 11,  5,                      "Labadie-Crooks" },
	{     "30 Sam Rd",  7, 13,         "VonRueden, Schmeler and Fay" },
	{      "67 LV Rd", 11,  6, "Carter, Pfannerstill and Rutherford" },
	{ "38 Enisner Av", 10,  7,                      "Bradtke-Herman" },
	{   "73 Nancy Av", 14, 10,                       "Streich Group" },
	{      "84 OE Av", 14,  7,                     "Hessel and Sons" },
	{    "34 Benz St",  2, 15,         "Strosin, Hegmann and Abbott" },
	{   "15 Sixth Av",  8,  6,       "Pouros, Brakus and Konopelski" },
	{     "04 Elm Rd",  8,  8,          "Hermiston, Hand and Wisoky" },
	{  "79 Square St", 15,  5,        "Turner, Dietrich and Smitham" },
	{  "84 Temple Rd",  7,  2,       "Leannon, Erdman and Schneider" },
	{    "64 Kate Rd",  7, 12,                          "Dach Group" },
	{   "68 Denny St",  4,  7,                        "Ledner-Kozey" },
	{   "76 David St", 11,  3,        "Rosenbaum, Kiehn and Kilback" },
	{    "58 Roof Av", 13,  4,       "Bartoletti, Keebler and Crona" }
};

struct T_delivery_routes
delivery_routes[] = {
	{  1,                      "Torphy Ltd",      "16893 Wilderman Terrace
Port Lucasburgh, ND 55978-5550" },
	{  2,               "Heidenreich Group",      "6534 Cheyenne Trace Suite 242
Koryburgh, PA 21391-9164" },
	{  3,                     "Gerhold Inc",             "70469 Unique Crest
Katherynville, IA 92263-4974" },
	{  4,      "Huel, Armstrong and Senger",            "534 Lubowitz Terrace
Lake Tomfort, LA 52697-4998" },
	{  5,       "Nader, Leuschke and Huels",             "4627 Johnnie Centers
Lake Hipolitoton, RI 37305" },
	{  6,                     "Abshire Ltd",                 "36578 Kirsten Terrace
Krajcikside, NH 29063" },
	{  7,   "Adams, Macejkovic and Carroll",     "941 Ritchie Plains Suite 833
North Jerry, LA 32804-7405" },
	{  8,                "Schowalter Group",      "52417 Wiza Brook Apt. 000
Zechariahstad, WY 15885-3711" },
	{  9,                  "Gorczany Group",          "9608 Hoyt Extension
East Linnieview, GA 87356-5339" },
	{ 10,           "Grady, King and Price", "4989 Pfeffer Passage Suite 915
West Jacebury, SD 68079-3347" },
	{ 11,     "Streich, Spencer and Brakus",        "30335 Pacocha Burgs Apt. 400
North Onastad, OR 76419" },
	{ 12,   "Brekke, Powlowski and Fritsch",            "53685 Abshire Falls
Lake Destineyville, OK 91313" },
	{ 13, "Hermiston, Feeney and Daugherty",  "54645 Ziemann Skyway Suite 987
Lake Roderickstad, OH 77820" },
	{ 14,                  "Renner-Kovacek",          "809 Daija Radial Apt. 507
Kavonfort, MN 70034-2797" },
	{ 15,                  "Hegmann-Waters",                      "719 Vito Parks
Kassulkeville, NH 77748" }
};

struct T_employees
employees[] = {
	{  1,  4,    "Kacie",       "716-650-2081" },
	{  2, 12,   "Dejuan",       "211.289.9042" },
	{  3,  1,   "Leonie",       "816-890-2580" },
	{  4, 11,  "Rogelio", "(539)655-7194x3276" },
	{  5, 12, "Eriberto", "675.047.7555x13273" },
	{  6,  9,   "Matteo",  "620.905.4152x7146" },
	{  7,  4,    "Sasha",     "1-547-775-6049" },
	{  8, 11,     "Eino", "033.973.3729x07313" },
	{  9,  8,   "Cydney",  "191.702.4400x1018" },
	{ 10,  6, "Cristian",     "1-833-492-9430" },
	{ 11,  5,      "Lew",       "776.002.6775" },
	{ 12, 15,  "Anthony",   "+69(6)9999892744" },
	{ 13, 14,   "Jovani",   "+28(9)6180779782" },
	{ 14, 10,    "Dovie",       "944-507-0999" },
	{ 15, 12,  "Allison",   "+48(5)2807285053" }
};

struct T_order_deliveries
order_deliveries[] = {
	{  "27 City Rd", 11,     "Ready",  6, 11, "2018-03-21 00:57:22" },
	{  "27 City Rd",  1,   "On Road",  4, 10, "2018-02-26 01:32:49" },
	{  "27 City Rd",  3,     "Ready",  1,  2, "2018-03-08 17:17:12" },
	{ "73 Nancy Av",  2, "Delivered", 12, 10, "2018-03-17 19:42:08" },
	{ "73 Nancy Av",  2,   "On Road",  1,  6, "2018-03-05 03:03:24" },
	{  "34 Benz St", 14, "Delivered", 11,  6, "2018-03-12 20:45:27" },
	{ "73 Nancy Av",  6,   "On Road", 11, 11, "2018-03-22 22:09:56" },
	{  "34 Benz St",  6, "Delivered",  2, 10, "2018-03-06 22:39:17" },
	{  "34 Benz St",  5, "Delivered", 14,  6, "2018-03-02 09:03:13" },
	{ "73 Nancy Av",  8,     "Ready", 13,  4, "2018-03-17 09:09:06" },
	{  "58 Roof Av",  9,     "Ready",  3,  9, "2018-02-26 13:22:53" },
	{  "58 Roof Av",  5,     "Ready",  8,  1, "2018-03-20 20:36:44" },
	{  "58 Roof Av",  9,     "Ready", 14,  5, "2018-03-14 05:16:17" },
	{  "58 Roof Av", 10,     "Ready", 13, 11, "2018-03-18 02:35:08" },
	{  "34 Benz St",  4,   "On Road",  1,  2, "2018-03-01 00:50:45" }
};

struct T_products
products[] = {
	{ 1,        "dvds", 1322.78,  "good condition" },
	{ 2,       "cloth", 6402.09,  "good condition" },
	{ 3, "electronics", 2511.29, "great condition" },
	{ 4,       "books", 7111.68,  "good condition" },
	{ 5,        "food", 3644.45,  "good condition" },
	{ 6,        "gift", 5022.39,   "bad condition" }
};

struct T_regular_order_products
regular_order_products[] = {
	{  5, 3 },
	{  2, 3 },
	{ 10, 1 },
	{  8, 5 },
	{ 12, 2 },
	{  1, 4 },
	{  6, 3 },
	{  3, 6 },
	{  3, 1 },
	{  9, 6 },
	{  5, 5 },
	{  1, 1 },
	{  7, 4 },
	{  6, 4 },
	{ 13, 2 }
};

struct T_regular_orders
regular_orders[] = {
	{  1, 12 },
	{  2, 15 },
	{  3,  6 },
	{  4,  3 },
	{  5,  8 },
	{  6, 14 },
	{  7,  2 },
	{  8, 15 },
	{  9, 10 },
	{ 10,  7 },
	{ 11,  3 },
	{ 12,  1 },
	{ 13,  1 },
	{ 14, 15 },
	{ 15, 15 }
};

struct T_trucks
trucks[] = {
	{  1, "58110",    "Frida" },
	{  2, "33822",    "Randy" },
	{  3, "17106",  "Laverna" },
	{  4, "24474",     "Kaya" },
	{  5, "63359",    "Queen" },
	{  6, "25232",     "Deon" },
	{  7, "92426",    "Stacy" },
	{  8, "69863",   "Rebeka" },
	{  9, "78683",      "Bud" },
	{ 10, "47865",    "Holly" },
	{ 11, "49160", "Rosamond" },
	{ 12, "32054",    "Ricky" },
	{ 13, "87695",   "Joanny" },
	{ 14, "75871",    "Luisa" },
	{ 15, "89343",    "Efren" }
};

#endif