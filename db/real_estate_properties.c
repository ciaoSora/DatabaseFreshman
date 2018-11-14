/*
Database "real_estate_properties" contains tables:
	other_available_features
	other_property_features
	properties
	reference_feature_types
	reference_property_types
*/

#ifndef REAL_ESTATE_PROPERTIES
#define REAL_ESTATE_PROPERTIES

struct T_other_available_features {
	double feature_id;
	char feature_type_code[9];	// --> reference_feature_types.feature_type_code
	char feature_name[13];
	char feature_description[18];
};

struct T_other_property_features {
	double property_id;	// --> properties.property_id
	double feature_id;	// --> other_available_features.feature_id
	char property_feature_description[10];
};

struct T_properties {
	double property_id;
	char property_type_code[10];	// --> reference_property_types.property_type_code
	char date_on_market[20];
	char date_sold[20];
	char property_name[14];
	char property_address[61];
	double room_count;
	double vendor_requested_price;
	double buyer_offered_price;
	double agreed_selling_price;
	char apt_feature_1[12];
	char apt_feature_2[9];
	char apt_feature_3[5];
	char fld_feature_1[5];
	char fld_feature_2[5];
	char fld_feature_3[5];
	char hse_feature_1[5];
	char hse_feature_2[5];
	char hse_feature_3[5];
	char oth_feature_1[5];
	char oth_feature_2[5];
	char oth_feature_3[5];
	char shp_feature_1[5];
	char shp_feature_2[5];
	char shp_feature_3[5];
	char other_property_details[5];
};

struct T_reference_feature_types {
	char feature_type_code[9];
	char feature_type_name[28];
};

struct T_reference_property_types {
	char property_type_code[10];
	char property_type_description[29];
};

struct T_other_available_features
other_available_features[] = {
	{ 2,  "Amenity",       "AirCon", "Air Conditioning." },
	{ 3,  "Amenity",         "Pool",    "Swimming Pool." },
	{ 4, "Security", "BurglarAlarm",     "Burglar Alarm" }
};

struct T_other_property_features
other_property_features[] = {
	{ 15, 3,   "dolorem" },
	{ 12, 4,     "earum" },
	{  6, 2,      "illo" },
	{  7, 2,       "hic" },
	{  6, 3,        "et" },
	{ 14, 4,       "quo" },
	{  4, 3,      "odio" },
	{  1, 2,        "ad" },
	{ 11, 4,     "vitae" },
	{  9, 3,       "quo" },
	{  6, 3,  "corrupti" },
	{  6, 3, "doloribus" },
	{ 13, 2,     "autem" },
	{  3, 2,    "cumque" },
	{ 14, 4,      "modi" }
};

struct T_properties
properties[] = {
	{  1,     "House", "1991-06-21 23:52:10", "1979-05-13 16:58:06",          "park", "4745 Emerson Stravenue Suite 829
South Garret, IN 16772-5682", 7,    372652.2909,         1.68,         4201.8,         "aut", "suscipit", "None", "None", "None", "None", "None", "None", "None", "None", "None", "None", "None", "None", "None", "None" },
	{  2,     "House", "1990-05-25 23:01:51", "1990-11-14 19:16:38",      "the cole",  "098 Tremaine Highway Suite 569
South Wilford, NJ 46587-3537", 1, 661536468.4429,       8.7122,  21769471.8328,         "est",      "est", "None", "None", "None", "None", "None", "None", "None", "None", "None", "None", "None", "None", "None", "None" },
	{  3,     "Other", "1986-11-26 04:12:18", "1981-06-26 21:28:28",         "prism",       "062 Micaela Court Apt. 707
Margretville, WV 51628-3617", 8,           1337, 11375259.502,              5,          "ut",       "et", "None", "None", "None", "None", "None", "None", "None", "None", "None", "None", "None", "None", "None", "None" },
	{  4,     "Field", "2017-09-14 15:49:23", "2003-02-27 18:17:11",     "riverside",             "49578 Ayden Mountains
New Russellhaven, UT 46626", 6,    192374065.8,        15.17,       4514.807,    "nesciunt", "adipisci", "None", "None", "None", "None", "None", "None", "None", "None", "None", "None", "None", "None", "None", "None" },
	{  5, "Apartment", "2016-05-06 16:53:39", "2012-08-19 07:36:57",     "parc east",                "2765 Schulist Stream
Lindmouth, UT 03391-3817", 5,       983.8596,      10.1067,         1.0012,         "quo",    "sequi", "None", "None", "None", "None", "None", "None", "None", "None", "None", "None", "None", "None", "None", "None" },
	{  6,      "Shop", "1994-02-14 02:27:13", "1995-01-31 11:18:42",     "high line",          "6837 Darien Views Apt. 475
South Maraview, KS 77770", 9,           2573,            0,       476919.3,         "sed",    "culpa", "None", "None", "None", "None", "None", "None", "None", "None", "None", "None", "None", "None", "None", "None" },
	{  7,      "Shop", "1996-09-16 22:04:27", "1998-09-15 05:26:22",        "avalon",             "092 Paucek Highway Apt. 772
East Erika, IA 61358", 8,    150045.7568,       296733,   2794972.2495,        "quos",      "est", "None", "None", "None", "None", "None", "None", "None", "None", "None", "None", "None", "None", "None", "None" },
	{  8, "Apartment", "1976-06-10 20:25:38", "2001-11-09 04:37:33",         "vogue",                 "24365 Ulices Run
Homenicktown, MD 88485-6198", 9,        13.4715,            0,              0,        "fuga",     "odio", "None", "None", "None", "None", "None", "None", "None", "None", "None", "None", "None", "None", "None", "None" },
	{  9, "Apartment", "1978-05-15 10:53:37", "1971-04-14 03:23:49",      "longacre",                   "107 Roob Courts
Erdmanburgh, IA 42926-0873", 5,      2219.6778, 3520911.5258,   3344706.5755,        "enim",      "sit", "None", "None", "None", "None", "None", "None", "None", "None", "None", "None", "None", "None", "None", "None" },
	{ 10, "Apartment", "2003-12-25 16:13:19", "1997-01-07 19:52:45",        "renoir",                "084 Lakin Vista Apt. 394
Fishertown, MA 16876", 9,     77172926.3,       1.5509, 244353758.1824, "consequatur",     "vero", "None", "None", "None", "None", "None", "None", "None", "None", "None", "None", "None", "None", "None", "None" },
	{ 11,     "Other", "1981-08-23 05:40:38", "1997-11-07 20:22:05",   "murray hill",    "2088 Bashirian Fork Suite 337
Faustinoport, MT 16771-9320", 2,      6713620.9, 13991131.434,     170766.472,          "et",      "est", "None", "None", "None", "None", "None", "None", "None", "None", "None", "None", "None", "None", "None", "None" },
	{ 12, "Apartment", "2016-05-24 09:57:45", "1980-07-08 16:13:17",     "ten tower",                 "743 Ephraim Greens
Anniemouth, HI 47084-3853", 5,            305,            2,   456840888.16,         "qui",    "autem", "None", "None", "None", "None", "None", "None", "None", "None", "None", "None", "None", "None", "None", "None" },
	{ 13,     "Other", "2000-08-07 06:59:14", "1973-02-24 02:56:06",       "chelsea",    "60845 Else Highway Apt. 826
South Dougfort, CO 43200-4258", 2,    2198735.095,            0,     44132.4621,        "fuga",      "aut", "None", "None", "None", "None", "None", "None", "None", "None", "None", "None", "None", "None", "None", "None" },
	{ 14,     "Other", "1986-12-31 10:05:32", "1987-12-07 07:41:27",   "wall street",     "1474 Dibbert Fields Suite 055
South Renee, IN 58286-3097", 7,        78.7208,    2449185.2,              0,          "et",      "eos", "None", "None", "None", "None", "None", "None", "None", "None", "None", "None", "None", "None", "None", "None" },
	{ 15, "Apartment", "1993-08-04 10:49:04", "1984-02-01 19:54:54", "parc coliseum",                   "986 Hagenes Drives
Draketon, UT 83411-3393", 3,            331,     27537286,           2574,         "aut",    "iusto", "None", "None", "None", "None", "None", "None", "None", "None", "None", "None", "None", "None", "None", "None" }
};

struct T_reference_feature_types
reference_feature_types[] = {
	{  "Amenity",           "Amenity, eg Pool." },
	{ "Security", "Securiyt, eg Burglar Alarm." }
};

struct T_reference_property_types
reference_property_types[] = {
	{     "House",        "House, Bungalow, etc." },
	{ "Apartment", "Apartment, Flat, Condo, etc." },
	{     "Field",               "Field, Meadow." },
	{     "Other",     "Other, to be determined." },
	{      "Shop",         "Shop, Retail Outlet." }
};

#endif