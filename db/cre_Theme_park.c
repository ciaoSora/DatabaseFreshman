/*
Database "cre_Theme_park" contains tables:
	features
	hotels
	locations
	museums
	photos
	ref_attraction_types
	ref_hotel_star_ratings
	royal_family
	shops
	staff
	street_markets
	theme_parks
	tourist_attraction_features
	tourist_attractions
	visitors
	visits
*/

#ifndef CRE_THEME_PARK
#define CRE_THEME_PARK

struct T_features {
	double feature_id;
	char feature_details[9];
};

struct T_hotels {
	double hotel_id;
	char star_rating_code[2];	// --> ref_hotel_star_ratings.star_rating_code
	char pets_allowed_yn[2];
	double price_range;
	char other_hotel_details[5];
};

struct T_locations {
	double location_id;
	char location_name[19];
	char address[31];
	char other_details[5];
};

struct T_museums {
	double museum_id;	// --> tourist_attractions.tourist_attraction_id
	char museum_details[31];
};

struct T_photos {
	double photo_id;
	double tourist_attraction_id;	// --> tourist_attractions.tourist_attraction_id
	char name[6];
	char description[5];
	char filename[4];
	char other_details[5];
};

struct T_ref_attraction_types {
	char attraction_type_code[2];
	char attraction_type_description[10];
};

struct T_ref_hotel_star_ratings {
	char star_rating_code[2];
	char star_rating_description[5];
};

struct T_royal_family {
	double royal_family_id;	// --> tourist_attractions.tourist_attraction_id
	char royal_family_details[5];
};

struct T_shops {
	double shop_id;	// --> tourist_attractions.tourist_attraction_id
	char shop_details[9];
};

struct T_staff {
	double staff_id;
	double tourist_attraction_id;	// --> tourist_attractions.tourist_attraction_id
	char name[9];
	char other_details[5];
};

struct T_street_markets {
	double market_id;	// --> tourist_attractions.tourist_attraction_id
	char market_details[17];
};

struct T_theme_parks {
	double theme_park_id;	// --> tourist_attractions.tourist_attraction_id
	char theme_park_details[18];
};

struct T_tourist_attraction_features {
	double tourist_attraction_id;	// --> tourist_attractions.tourist_attraction_id
	double feature_id;	// --> features.feature_id
};

struct T_tourist_attractions {
	double tourist_attraction_id;
	char attraction_type_code[2];	// --> ref_attraction_types.attraction_type_code
	double location_id;	// --> locations.location_id
	char how_to_get_there[8];
	char name[22];
	char description[5];
	char opening_hours[5];
	char other_details[5];
};

struct T_visitors {
	double tourist_id;
	char tourist_details[9];
};

struct T_visits {
	double visit_id;
	double tourist_attraction_id;	// --> tourist_attractions.tourist_attraction_id
	double tourist_id;	// --> visitors.tourist_id
	char visit_date[20];
	char visit_details[1];
};

struct T_features
features[] = {
	{ 523,     "cafe" },
	{ 528,     "park" },
	{ 543,   "garden" },
	{ 681, "shopping" },
	{ 955,  "parking" }
};

struct T_hotels
hotels[] = {
	{ 123, "5", "1",     2914989.571, "None" },
	{ 144, "4",  "",                , "None" },
	{ 172, "5",  "", 17012.682586009, "None" },
	{ 222, "5", "1",                , "None" },
	{ 239, "3", "1",                , "None" },
	{ 264, "1", "1",   48525.4530675, "None" },
	{ 314, "5", "1", 766712918.96763, "None" },
	{ 331, "1", "1",                , "None" },
	{ 350, "1",  "",                , "None" },
	{ 373, "5", "1", 250548014.90329, "None" },
	{ 376, "2",  "",                , "None" },
	{ 379, "4", "1",  38014975.47848, "None" },
	{ 420, "5", "1",   9393.86291219, "None" },
	{ 421, "3",  "",    5526556.6412, "None" },
	{ 426, "5",  "",   245.067720121, "None" },
	{ 431, "2", "1",       43.729525, "None" },
	{ 442, "2", "1",  289775.7331715, "None" },
	{ 473, "1", "1",    2374.7971074, "None" },
	{ 514, "5",  "",   1381255.81865, "None" },
	{ 555, "5", "1",     5390.432113, "None" }
};

struct T_locations
locations[] = {
	{ 333,      "Astro Orbiter",              "660 Shea Crescent", "None" },
	{ 368,    "African Animals",           "254 Ottilie Junction", "None" },
	{ 417, "American Adventure",   "53815 Sawayn Tunnel Apt. 297", "None" },
	{ 579,    "The Barnstormer",              "3374 Sarina Manor", "None" },
	{ 603,  "African Adventure",  "88271 Barrows Union Suite 203", "None" },
	{ 650,         "UK Gallery",  "4411 Sabrina Radial Suite 582", "None" },
	{ 655,       "The Boneyard",            "0692 Georgiana Pass", "None" },
	{ 661,        "Shark World", "2485 Mueller Squares Suite 537", "None" },
	{ 740,         "Space Spin",     "5536 Betsy Street Apt. 646", "None" },
	{ 759,        "Butterflies",       "959 Feest Glen Suite 523", "None" },
	{ 858,       "Soak Station",             "4908 Reinger Vista", "None" },
	{ 861,             "Castle",             "14034 Kohler Drive", "None" },
	{ 867,        "Coral Reefs",  "4510 Schuster Stream Apt. 613", "None" },
	{ 868,      "Film Festival",          "770 Edd Lane Apt. 098", "None" },
	{ 885,   "Fossil Fun Games",            "101 Paucek Crescent", "None" }
};

struct T_museums
museums[] = {
	{ 2113,    "Yale Center for British Art" },
	{ 2701, "The Metropolitan Museum of Art" },
	{ 5076,                           "MoMA" }
};

struct T_photos
photos[] = {
	{ 211, 8449, "game1", "None", "702", "None" },
	{ 280, 7067, "game2", "None", "762", "None" },
	{ 303, 5076, "game3", "None", "392", "None" },
	{ 327, 9919,  "fun1", "None", "820", "None" },
	{ 332, 5076,  "fun2", "None", "060", "None" },
	{ 428, 6523,  "fun3", "None", "148", "None" },
	{ 435, 8429,  "fun4", "None", "453", "None" },
	{ 437, 2701,  "fun5", "None", "128", "None" },
	{ 525, 5265, "park1", "None", "538", "None" },
	{ 534, 6852, "park2", "None", "325", "None" },
	{ 537, 6653, "park3", "None", "695", "None" },
	{ 550, 5076,  "din1", "None", "259", "None" },
	{ 558, 8698,  "din2", "None", "863", "None" },
	{ 571, 6653,  "din3", "None", "864", "None" },
	{ 596, 9561,  "din4", "None", "141", "None" }
};

struct T_ref_attraction_types
ref_attraction_types[] = {
	{ "2",      "park" },
	{ "3",    "garden" },
	{ "5",   "gallery" },
	{ "6", "adventure" },
	{ "9",    "museum" }
};

struct T_ref_hotel_star_ratings
ref_hotel_star_ratings[] = {
	{ "1", "star" },
	{ "2", "star" },
	{ "3", "star" },
	{ "4", "star" },
	{ "5", "star" }
};

struct T_royal_family
royal_family[] = {
	{ 9561, "None" },
	{ 9919, "None" }
};

struct T_shops
shops[] = {
	{ 8429,     "soup" },
	{ 8449,   "coffee" },
	{ 8698,   "Flower" },
	{ 9360, "see food" }
};

struct T_staff
staff[] = {
	{ 170, 6476,  "Whitney", "None" },
	{ 219, 6476,    "Kaela", "None" },
	{ 237, 7067,   "Eunice", "None" },
	{ 249, 5265,   "Kiarra", "None" },
	{ 310, 9561,   "Phoebe", "None" },
	{ 433, 9360,   "Vickie", "None" },
	{ 463, 6653,   "Jannie", "None" },
	{ 470, 6523,   "Lenore", "None" },
	{ 487, 6852,     "Asia", "None" },
	{ 491, 6852,    "Janet", "None" },
	{ 532, 6852,  "Elouise", "None" },
	{ 591, 9360,     "Gina", "None" },
	{ 595, 8698,     "Beth", "None" },
	{ 596, 2701,   "Ruthie", "None" },
	{ 604, 6852,   "Aurore", "None" },
	{ 619, 2113,  "Cortney", "None" },
	{ 643, 6523,   "Astrid", "None" },
	{ 667, 9561,   "Shemar", "None" },
	{ 860, 6476,  "Trinity", "None" },
	{ 952, 5265, "Carmella", "None" }
};

struct T_street_markets
street_markets[] = {
	{ 6852,         "Broadway" },
	{ 7067, "Fish Farm Market" }
};

struct T_theme_parks
theme_parks[] = {
	{ 5265,            "Disney" },
	{ 6476,         "Sea World" },
	{ 6523, "Universal Studios" }
};

struct T_tourist_attraction_features
tourist_attraction_features[] = {
	{ 5076, 528 },
	{ 5076, 681 },
	{ 5265, 523 },
	{ 5265, 955 },
	{ 6476, 543 },
	{ 6476, 681 },
	{ 6476, 955 },
	{ 6523, 528 },
	{ 6852, 528 },
	{ 6852, 955 },
	{ 7067, 543 },
	{ 8429, 681 },
	{ 8449, 528 },
	{ 8698, 528 },
	{ 8698, 543 },
	{ 8698, 681 },
	{ 9561, 681 },
	{ 9919, 681 }
};

struct T_tourist_attractions
tourist_attractions[] = {
	{ 2113, "2", 579,     "bus",            "art museum", "None", "None", "None" },
	{ 2701, "6", 417,    "walk",            "UK gallery", "None", "None", "None" },
	{ 5076, "2", 868, "shuttle",       "flying elephant", "None", "None", "None" },
	{ 5265, "5", 603,     "bus",         "film festival", "None", "None", "None" },
	{ 6476, "3", 417, "shuttle",             "US museum", "None", "None", "None" },
	{ 6523, "9", 858,    "walk",             "fun games", "None", "None", "None" },
	{ 6653, "9", 655,    "walk",       "history gallery", "None", "None", "None" },
	{ 6852, "5", 858,    "walk",     "exploration trial", "None", "None", "None" },
	{ 7067, "5", 417,     "bus",       "haunted mansion", "None", "None", "None" },
	{ 8429, "9", 867,    "walk",       "presidents hall", "None", "None", "None" },
	{ 8449, "2", 579,     "bus", "impressions de France", "None", "None", "None" },
	{ 8698, "5", 661,     "bus",         "jungle cruise", "None", "None", "None" },
	{ 9360, "5", 868, "shuttle",             "fun shops", "None", "None", "None" },
	{ 9561, "2", 759,     "bus",                  "cafe", "None", "None", "None" },
	{ 9919, "6", 579, "shuttle",               "parking", "None", "None", "None" }
};

struct T_visitors
visitors[] = {
	{ 164,    "Toney" },
	{ 189, "Graciela" },
	{ 204,  "Vincent" },
	{ 211,   "Vivian" },
	{ 241,   "Nettie" },
	{ 295, "Laurence" },
	{ 359,   "Newell" },
	{ 377,  "Marisol" },
	{ 399,  "Jarrell" },
	{ 439,     "Edna" },
	{ 500,     "Maud" },
	{ 513,   "Alison" },
	{ 541, "Rosalind" },
	{ 545,    "Tevin" },
	{ 578,    "Aleen" },
	{ 610, "Marcelle" },
	{ 652,   "Lizzie" },
	{ 779,    "Wayne" },
	{ 841,   "Teresa" },
	{ 888,   "Elnora" }
};

struct T_visits
visits[] = {
	{ 183, 6653, 377, "2004-08-21 03:06:14", "" },
	{ 268, 5076, 204, "2013-08-06 05:35:51", "" },
	{ 273, 9360, 211, "2013-10-27 09:56:08", "" },
	{ 302, 6476, 377, "1990-08-15 14:24:10", "" },
	{ 356, 6476, 439, "1980-11-26 02:08:00", "" },
	{ 381, 6523, 211, "2017-03-19 08:48:19", "" },
	{ 416, 6476, 841, "2008-11-09 01:28:01", "" },
	{ 479, 6852, 439, "1989-08-24 20:26:37", "" },
	{ 563, 6852, 610, "1993-02-01 15:27:20", "" },
	{ 612, 9919, 204, "2007-09-17 10:12:45", "" },
	{ 729, 6476, 513, "1998-05-12 00:50:20", "" },
	{ 776, 8698, 513, "2010-10-04 01:34:12", "" },
	{ 781, 6852, 779, "2018-01-09 20:39:52", "" },
	{ 866, 8429, 545, "1971-12-16 06:41:26", "" },
	{ 909, 8698, 779, "1998-12-10 02:46:43", "" },
	{ 937, 6523, 541, "1996-01-08 13:23:41", "" },
	{ 962, 9919, 610, "2007-09-03 04:30:01", "" },
	{ 968, 6852, 377, "1974-12-31 23:18:24", "" },
	{ 977, 8698, 500, "2001-11-13 10:08:28", "" },
	{ 999, 2701, 610, "1990-11-12 00:54:50", "" }
};

#endif