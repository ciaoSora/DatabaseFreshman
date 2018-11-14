/*
Database "apartment_rentals" contains tables:
	apartment_bookings
	apartment_buildings
	apartment_facilities
	apartments
	guests
	view_unit_status
*/

#ifndef APARTMENT_RENTALS
#define APARTMENT_RENTALS

struct T_apartment_bookings {
	double apartment_booking_id;
	double apartment_id;	// --> apartments.apartment_id
	double guest_id;	// --> guests.guest_id
	char booking_status_code[12];
	char booking_start_date[20];
	char booking_end_date[20];
};

struct T_apartment_buildings {
	double building_id;
	char building_short_name[21];
	char building_full_name[21];
	char building_description[7];
	char building_address[63];
	char building_manager[8];
	char building_phone[21];
};

struct T_apartment_facilities {
	double apartment_id;	// --> apartments.apartment_id
	char facility_code[14];
};

struct T_apartments {
	double apartment_id;
	double building_id;	// --> apartment_buildings.building_id
	char apartment_type_code[7];
	char apartment_number[10];
	double bathroom_count;
	double bedroom_count;
	char room_count[2];
};

struct T_guests {
	double guest_id;
	char gender_code[8];
	char guest_first_name[9];
	char guest_last_name[14];
	char date_of_birth[20];
};

struct T_view_unit_status {
	double apartment_id;	// --> apartments.apartment_id
	double apartment_booking_id;	// --> apartment_bookings.apartment_booking_id
	char status_date[20];
	char available_yes_or_no[2];
};

struct T_apartment_bookings
apartment_bookings[] = {
	{ 258, 10,  2, "Provisional", "2016-09-26 17:13:49", "2017-10-07 11:38:48" },
	{ 279, 15, 15, "Provisional", "2016-04-01 06:28:08", "2017-10-25 11:08:42" },
	{ 337,  8,  5, "Provisional", "2017-03-13 16:20:14", "2018-02-19 16:59:08" },
	{ 343,  4, 13,   "Confirmed", "2016-08-04 10:33:00", "2017-09-29 12:43:50" },
	{ 365,  9, 12,   "Confirmed", "2017-02-11 14:34:14", "2017-10-07 20:47:19" },
	{ 401,  7, 14, "Provisional", "2016-05-24 20:09:38", "2017-10-03 01:56:21" },
	{ 497, 10,  8,   "Confirmed", "2016-07-25 02:57:04", "2017-09-28 11:08:15" },
	{ 526,  8,  7,   "Confirmed", "2016-11-26 05:04:31", "2018-02-25 15:15:37" },
	{ 575,  6,  3, "Provisional", "2017-05-13 18:17:20", "2017-10-06 11:15:58" },
	{ 577, 12,  2, "Provisional", "2017-03-04 02:23:49", "2018-02-06 16:57:05" },
	{ 623,  4,  5, "Provisional", "2016-06-07 05:05:18", "2017-11-13 13:59:45" },
	{ 807, 11,  2, "Provisional", "2016-04-17 12:53:59", "2018-03-20 17:32:58" },
	{ 889, 10,  4,   "Confirmed", "2016-09-28 05:00:50", "2017-09-30 18:41:04" },
	{ 920,  2,  2,   "Confirmed", "2017-04-07 04:53:27", "2017-11-29 12:59:42" },
	{ 924,  8,  3,   "Confirmed", "2017-07-03 14:15:56", "2017-11-12 01:05:09" }
};

struct T_apartment_buildings
apartment_buildings[] = {
	{ 133,      "Normandie Court",      "Normandie Court", "Studio",              "7950 Casper Vista Apt. 176
Marquiseberg, CA 70496",    "Emma",    "(948)040-1064x387" },
	{ 153,       "Mercedes House",       "Mercedes House", "Studio",                        "354 Otto Villages
Charliefort, VT 71664", "Brenden",     "915-617-2408x832" },
	{ 191,           "The Eugene",           "The Eugene",   "Flat",                     "71537 Gorczany Inlet
Wisozkburgh, AL 08256", "Melyssa",        "(609)946-0491" },
	{ 196,          "VIA 57 WEST",          "VIA 57 WEST", "Studio",                   "959 Ethel Viaduct
West Efrainburgh, DE 40074", "Kathlyn",         "681.772.2454" },
	{ 225,      "Columbus Square",      "Columbus Square", "Studio",         "0703 Danika Mountains Apt. 362
Mohrland, AL 56839-5028",    "Kyle",   "1-724-982-9507x640" },
	{ 532,          "Avalon Park",          "Avalon Park", "Duplex",             "6827 Kessler Parkway Suite 908
Ahmedberg, WI 48788",  "Albert",         "376-017-3538" },
	{ 556, "Peter Cooper Village", "Peter Cooper Village",   "Flat",               "861 Narciso Glens Suite 392
East Ottis, ND 73970", "Darlene", "1-224-619-0295x13195" },
	{ 624,      "Stuyvesant Town",      "Stuyvesant Town", "Studio", "101 Queenie Mountains Suite 619
New Korbinmouth, KS 88726-1376",   "Marie",        "(145)411-6406" },
	{ 644,           "The Anthem",           "The Anthem",   "Flat",              "50804 Mason Isle Suite 844
West Whitney, ID 66511",   "Ewald",   "(909)086-5221x3455" },
	{ 673,        "Barclay Tower",        "Barclay Tower",   "Flat",         "1579 Runte Forges Apt. 548
Leuschkeland, OK 12009-8683",  "Rogers",   "1-326-267-3386x613" },
	{ 734,        "Windsor Court",        "Windsor Court", "Studio",                       "601 Graham Roads
Port Luz, VA 29660-6703",    "Olaf",        "(480)480-7401" },
	{ 744,        "Silver Towers",        "Silver Towers",   "Flat",         "1844 Armstrong Stravenue Suite 853
Myrnatown, CT 13528",  "Claude",  "1-667-728-2287x3158" },
	{ 790,       "Biltmore Plaza",       "Biltmore Plaza", "Duplex",                  "489 Josh Orchard Apt. 998
Sipesview, DE 69053",   "Sydni",    "544-148-5565x2847" },
	{ 808,          "Petersfield",          "Petersfield", "Studio",   "54686 Christopher Circles Apt. 321
Daytonland, ID 88081-3991", "Juvenal",         "318-398-8140" },
	{ 968,          "The Clinton",          "The Clinton",   "Flat",                     "012 Arnoldo Mountain
Gerholdland, ID 23342",   "Holly", "1-605-511-1973x25011" }
};

struct T_apartment_facilities
apartment_facilities[] = {
	{  1,     "Boardband" },
	{  2,     "Boardband" },
	{  3,           "Gym" },
	{  5, "Swimming Pool" },
	{  6,      "Cable TV" },
	{  9,     "Boardband" },
	{ 15,           "Gym" }
};

struct T_apartments
apartments[] = {
	{  1, 808,   "Flat", "Suite 645", 1, 3, "7" },
	{  2, 624,   "Flat",  "Apt. 585", 2, 4, "5" },
	{  3, 225, "Studio",  "Apt. 908", 1, 6, "7" },
	{  4, 225, "Duplex", "Suite 749", 1, 5, "8" },
	{  5, 744,   "Flat", "Suite 307", 2, 4, "9" },
	{  6, 191, "Studio",  "Apt. 187", 3, 5, "9" },
	{  7, 790, "Studio", "Suite 088", 2, 4, "6" },
	{  8, 153,   "Flat", "Suite 693", 2, 3, "9" },
	{  9, 624, "Studio",  "Apt. 940", 1, 4, "8" },
	{ 10, 225, "Duplex",  "Apt. 859", 2, 3, "6" },
	{ 11, 734,   "Flat",  "Apt. 794", 1, 5, "3" },
	{ 12, 673, "Duplex",  "Apt. 477", 2, 6, "3" },
	{ 13, 744, "Duplex",  "Apt. 411", 2, 5, "9" },
	{ 14, 225,   "Flat",  "Apt. 837", 2, 4, "8" },
	{ 15, 790, "Duplex", "Suite 634", 3, 6, "8" }
};

struct T_guests
guests[] = {
	{  1,    "Male",      "Kip",       "DuBuque", "1995-11-04 07:09:57" },
	{  2, "Unknown",   "Rebeca", "Runolfsdottir", "1974-05-12 21:53:58" },
	{  3,  "Female",     "Keon",       "Treutel", "1974-08-20 09:28:05" },
	{  4,  "Female",     "Gabe",          "Bode", "2007-09-11 19:01:39" },
	{  5,  "Female",      "Lou",         "Grady", "1997-01-15 17:37:40" },
	{  6, "Unknown", "Josefina",         "Jerde", "1978-03-08 04:43:04" },
	{  7,  "Female",   "Mozell",           "Toy", "1997-01-20 17:11:31" },
	{  8, "Unknown",    "Keith",        "Hoeger", "2001-06-18 20:05:55" },
	{  9,  "Female",  "Crystal",    "Runolfsson", "1971-01-04 04:22:58" },
	{ 10,  "Female",    "Nikki",        "Lehner", "1980-06-20 18:15:39" },
	{ 11,    "Male", "Gregoria",    "Schowalter", "2015-02-03 23:34:13" },
	{ 12,    "Male", "Louvenia",         "Crona", "1983-08-26 15:45:08" },
	{ 13,  "Female",     "Else",       "Roberts", "1971-11-02 01:51:56" },
	{ 14,  "Female",  "Juvenal",       "Kautzer", "2003-07-29 22:08:15" },
	{ 15,  "Female",    "Tamia",         "Mante", "2013-02-22 11:26:22" }
};

struct T_view_unit_status
view_unit_status[] = {
	{ 11, 920, "1970-09-28 10:24:29", "1" },
	{ 15, 575, "1972-03-23 22:55:53", "1" },
	{ 15, 924, "1973-10-28 04:30:14", "1" },
	{  6, 497, "1976-12-18 04:03:51", "1" },
	{ 12, 807, "1977-04-15 13:42:19", "1" },
	{ 13, 575, "1978-12-28 11:53:34", "1" },
	{  2, 497, "1980-11-12 13:34:45", "1" },
	{ 14, 401, "1985-11-05 11:46:35", "0" },
	{ 11, 497, "1990-11-04 17:57:50", "1" },
	{ 13, 337, "2000-02-04 07:50:09", "0" },
	{ 14, 279, "2001-02-17 20:17:09", "1" },
	{  5, 337, "2003-07-25 10:13:48", "1" },
	{  1, 497, "2003-08-02 08:36:36", "1" },
	{ 10, 497, "2006-02-23 05:50:04", "1" },
	{  6, 401, "2011-02-12 09:04:07", "1" },
	{  9, 623, "2011-11-06 22:08:42", "1" },
	{ 14, 920, "2012-11-24 13:39:37", "0" },
	{  4, 258, "2014-12-10 13:53:21", "1" },
	{ 13, 343, "2015-06-19 07:59:01", "1" },
	{  5, 889, "2015-07-15 11:06:29", "1" }
};

#endif