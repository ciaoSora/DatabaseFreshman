/*
Database "products_gen_characteristics" contains tables:
	characteristics
	product_characteristics
	products
	reference_characteristic_types
	reference_colors
	reference_product_categories
*/

#ifndef PRODUCTS_GEN_CHARACTERISTICS
#define PRODUCTS_GEN_CHARACTERISTICS

struct T_characteristics {
	double characteristic_id;
	char characteristic_type_code[7];	// --> reference_characteristic_types.characteristic_type_code
	char characteristic_data_type[10];
	char characteristic_name[6];
	char other_characteristic_details[5];
};

struct T_product_characteristics {
	double product_id;	// --> products.product_id
	double characteristic_id;	// --> characteristics.characteristic_id
	char product_characteristic_value[7];
};

struct T_products {
	double product_id;
	char color_code[2];	// --> reference_colors.color_code
	char product_category_code[7];	// --> reference_product_categories.product_category_code
	char product_name[11];
	char typical_buying_price[16];
	char typical_selling_price[16];
	char product_description[15];
	char other_product_details[5];
};

struct T_reference_characteristic_types {
	char characteristic_type_code[7];
	char characteristic_type_description[7];
};

struct T_reference_colors {
	char color_code[2];
	char color_description[7];
};

struct T_reference_product_categories {
	char product_category_code[7];
	char product_category_description[7];
	char unit_of_measure[21];
};

struct T_characteristics
characteristics[] = {
	{  1,  "Grade",   "numquam",  "slow", "None" },
	{  2,  "Grade", "doloribus",  "fast", "None" },
	{  3, "Purity",       "rem",  "warm", "None" },
	{  4,  "Grade",       "aut",   "hot", "None" },
	{  5, "Purity",   "impedit",   "hot", "None" },
	{  6, "Purity",       "qui",  "warm", "None" },
	{  7,  "Grade",        "et",  "cool", "None" },
	{  8,  "Grade",   "dolores",  "cool", "None" },
	{  9,  "Grade",      "quam",  "cool", "None" },
	{ 10,  "Grade",     "velit",  "fast", "None" },
	{ 11, "Purity",        "at",  "fast", "None" },
	{ 12,  "Grade",     "totam", "error", "None" },
	{ 13, "Purity",  "mollitia",  "slow", "None" },
	{ 14, "Purity",   "placeat",  "slow", "None" },
	{ 15,  "Grade",    "facere",  "slow", "None" }
};

struct T_product_characteristics
product_characteristics[] = {
	{ 13, 13,    "low" },
	{ 11,  2,    "low" },
	{  5, 15,    "low" },
	{  1, 13,    "low" },
	{  7, 12,    "low" },
	{ 11,  6,    "low" },
	{  7,  2, "medium" },
	{ 12, 10, "medium" },
	{  8, 11,   "high" },
	{ 14,  4, "medium" },
	{ 11,  3, "medium" },
	{  6, 15,   "high" },
	{ 11,  3,   "high" },
	{  6, 10,   "high" },
	{ 12,  2,   "high" }
};

struct T_products
products[] = {
	{  1, "4", "Spices",      "cumin",                "",          "2878.3",             "et", "None" },
	{  2, "2", "Spices",      "peper",  "352447.2874677", "1892070.2803543",          "rerum", "None" },
	{  3, "9",  "Herbs",      "basil",     "503.8431967",       "0.1859512",        "officia", "None" },
	{  4, "1",  "Herbs",     "borage",                "", "10377614.847385",     "blanditiis", "None" },
	{  5, "4", "Spices",      "chili",                "",           "39446",           "eius", "None" },
	{  6, "4",  "Seeds",     "ginger",           "5.578",      "52735.6101",      "doloribus", "None" },
	{  7, "9",  "Seeds",     "sesame",    "1284268.0659",      "68205825.7",             "et", "None" },
	{  8, "9",  "Herbs",    "caraway",           "24493",                "",          "nulla", "None" },
	{  9, "2",  "Herbs",     "catnip",    "12008702.623",    "21577.891642",            "vel", "None" },
	{ 10, "5",  "Seeds",       "flax",     "339404395.7",     "59622629.74",             "et", "None" },
	{ 11, "7",  "Herbs",    "chervil",                "",                "",          "minus", "None" },
	{ 12, "4",  "Seeds", "voluptatem",             "162",             "149",        "officia", "None" },
	{ 13, "5", "Spices",     "cinnam",       "1686539.4",      "17595111.4",           "nisi", "None" },
	{ 14, "4",  "Seeds",      "lotus", "43221310.465574",   "63589.4054376", "exercitationem", "None" },
	{ 15, "2",  "Herbs",     "laurel",                "",           "57857",             "ut", "None" }
};

struct T_reference_characteristic_types
reference_characteristic_types[] = {
	{  "Grade",  "Grade" },
	{ "Purity", "Purity" }
};

struct T_reference_colors
reference_colors[] = {
	{ "9",    "red" },
	{ "5",  "green" },
	{ "1", "yellow" },
	{ "4",   "blue" },
	{ "7",  "black" },
	{ "2",  "white" },
	{ "8", "purple" },
	{ "3",   "gray" }
};

struct T_reference_product_categories
reference_product_categories[] = {
	{  "Herbs",  "Herbs", "Handful             " },
	{  "Seeds",  "Seeds", "Weight - pound,kilo." },
	{ "Spices", "Spices", "Weight - pound,kilo." }
};

#endif