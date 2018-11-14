/*
Database "product_catalog" contains tables:
	attribute_definitions
	catalog_contents
	catalog_contents_additional_attributes
	catalog_structure
	catalogs
*/

#ifndef PRODUCT_CATALOG
#define PRODUCT_CATALOG

struct T_attribute_definitions {
	double attribute_id;
	char attribute_name[7];
	char attribute_data_type[5];
};

struct T_catalog_contents {
	double catalog_entry_id;
	double catalog_level_number;	// --> catalog_structure.catalog_level_number
	double parent_entry_id;
	double previous_entry_id;
	double next_entry_id;
	char catalog_entry_name[18];
	char product_stock_number[6];
	double price_in_dollars;
	double price_in_euros;
	double price_in_pounds;
	char capacity[2];
	char length[2];
	char height[2];
	char width[2];
};

struct T_catalog_contents_additional_attributes {
	double catalog_entry_id;	// --> catalog_contents.catalog_entry_id
	double catalog_level_number;	// --> catalog_structure.catalog_level_number
	double attribute_id;
	char attribute_value[2];
};

struct T_catalog_structure {
	double catalog_level_number;
	double catalog_id;	// --> catalogs.catalog_id
	char catalog_level_name[13];
};

struct T_catalogs {
	double catalog_id;
	char catalog_name[16];
	char catalog_publisher[42];
	char date_of_publication[20];
	char date_of_latest_revision[20];
};

struct T_attribute_definitions
attribute_definitions[] = {
	{ 1,  "Green", "Bool" },
	{ 2,  "Black", "Bool" },
	{ 3, "Yellow", "Bool" },
	{ 4,  "Sweet", "Bool" }
};

struct T_catalog_contents
catalog_contents[] = {
	{  1, 1, 5, 9, 7,              "Cola", "89 cp", 200.78, 159.84, 172.17, "1", "3", "9", "5" },
	{  2, 8, 6, 9, 8,         "Root beer", "37 hq", 687.59, 590.11, 471.78, "8", "6", "5", "6" },
	{  3, 8, 6, 6, 1,        "Cream Soda", "52 ee",  360.5, 202.32, 110.32, "5", "9", "7", "8" },
	{  4, 1, 7, 8, 6,  "Carbonated Water", "15 mr", 667.89, 458.45, 349.01, "8", "6", "2", "1" },
	{  5, 9, 4, 7, 6,       "Ginger Beer", "42 cp", 616.22, 537.66, 405.75, "5", "5", "7", "9" },
	{  6, 1, 3, 4, 8,             "Tizer", "61 py", 642.37, 434.21, 331.43, "6", "6", "7", "1" },
	{  7, 9, 7, 3, 3,             "Vimto", "01 ap", 745.02, 510.32,  497.4, "6", "9", "6", "5" },
	{  8, 8, 6, 5, 3,            "Ramune", "53 bg", 574.35, 441.82, 440.52, "4", "4", "7", "5" },
	{  9, 1, 7, 9, 9,       "Sprite Lemo", "24 ec", 952.37, 703.17, 433.82, "8", "7", "1", "3" },
	{ 10, 8, 5, 6, 6,         "Dr Pepper", "26 op", 777.41, 616.54, 572.41, "1", "6", "1", "6" },
	{ 11, 1, 3, 6, 9,        "Diet Pepsi", "49 jg", 808.31, 643.77, 515.62, "9", "8", "3", "3" },
	{ 12, 8, 4, 5, 3, "Diet Mountain Dew", "96 zx", 883.43, 752.87, 678.01, "8", "8", "1", "3" },
	{ 13, 1, 5, 9, 1,      "Mountain Dew", "49 cz", 475.79,  457.4, 335.63, "7", "8", "4", "5" },
	{ 14, 9, 3, 5, 8,      "Fenta Orange", "65 wc", 415.92, 385.85,  371.9, "7", "4", "3", "7" },
	{ 15, 1, 6, 8, 9,         "Wanglaoji", "51 kr",  533.6, 498.62, 422.71, "4", "5", "8", "8" }
};

struct T_catalog_contents_additional_attributes
catalog_contents_additional_attributes[] = {
	{  5, 8, 4, "1" },
	{ 15, 9, 3, "0" },
	{ 11, 1, 2, "0" },
	{ 12, 1, 4, "0" },
	{  1, 8, 3, "1" },
	{  8, 1, 3, "1" },
	{ 14, 9, 2, "0" },
	{ 15, 9, 2, "0" },
	{ 15, 1, 3, "1" },
	{  1, 8, 4, "0" },
	{ 11, 1, 3, "1" },
	{  8, 9, 3, "0" },
	{  2, 8, 4, "1" },
	{  6, 1, 1, "1" },
	{  4, 8, 4, "0" }
};

struct T_catalog_structure
catalog_structure[] = {
	{ 1, 1,     "Category" },
	{ 8, 2, "Sub-Category" },
	{ 9, 8,      "Product" }
};

struct T_catalogs
catalogs[] = {
	{ 1,       "Chocolate", "Koepp-Rutherford handmade chocolate store", "2013-03-15 05:09:17", "2017-09-26 12:10:36" },
	{ 2,     "Coffee Bean",                        "Murray Coffee shop", "2012-04-13 06:37:09", "2017-10-26 01:16:51" },
	{ 3,        "Lemonade",                "Russel-Gislason Lemon shop", "2012-11-27 19:29:22", "2017-12-04 06:48:13" },
	{ 4,   "Breakfast Tea",                           "Grady & Kautzer", "2011-07-22 04:57:19", "2017-03-30 09:15:37" },
	{ 5,     "Coco powder",                                      "Lidl", "2013-03-15 05:09:17", "2017-09-26 12:10:36" },
	{ 6,           "Latte",                        "Murray Coffee shop", "2012-04-13 06:37:09", "2017-10-26 01:16:51" },
	{ 7, "Sparkling Water",                "Russel-Gislason Lemon shop", "2012-11-27 19:29:22", "2017-12-04 06:48:13" },
	{ 8,             "Jam",                           "Grady & Kautzer", "2011-07-22 04:57:19", "2017-03-30 09:15:37" }
};

#endif