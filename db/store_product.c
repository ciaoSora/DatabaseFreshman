/*
Database "store_product" contains tables:
	district
	product
	store
	store_district
	store_product
*/

#ifndef STORE_PRODUCT
#define STORE_PRODUCT

struct T_district {
	double district_id;
	char district_name[25];
	char headquartered_city[21];
	double city_population;
	double city_area;
};

struct T_product {
	double product_id;
	char product[35];
	char dimensions[16];
	double dpi;
	double pages_per_minute_color;
	char max_page_size[14];
	char interface[8];
};

struct T_store {
	double store_id;
	char store_name[12];
	char type[14];
	double area_size;
	double number_of_product_category;
	double ranking;
};

struct T_store_district {
	double store_id;	// --> store.store_id
	double district_id;	// --> district.district_id
};

struct T_store_product {
	double store_id;	// --> store.store_id
	double product_id;	// --> product.product_id
};

struct T_district
district[] = {
	{  1,          "Attock District",          "Attock City",   94620.0,  20.0 },
	{  2,    "Bahawalnagar District",    "Bahawalnagar City",  134936.0,  13.0 },
	{  3,      "Bahawalpur District",      "Bahawalpur City",  530438.0,  38.0 },
	{  4,         "Bhakkar District",         "Bhakkar City",   89380.0,  15.0 },
	{  5,         "Chakwal District",         "Chakwal City",  113524.0,  10.0 },
	{  6,         "Chiniot District",         "Chiniot City",  219254.0,  12.0 },
	{  7, "Dera Ghazi Khan District", "Dera Ghazi Khan City",  464742.0,  22.0 },
	{  8,      "Faisalabad District",      "Faisalabad City", 2793721.0, 147.0 },
	{  9,      "Gujranwala District",      "Gujranwala City", 1526168.0,  75.0 },
	{ 10,          "Gujrat District",          "Gujrat City",  328512.0,  25.0 },
	{ 11,       "Hafizabad District",       "Hafizabad City",  165936.0,  10.0 },
	{ 12,           "Jhang District",           "Jhang City",  365198.0,  28.0 },
	{ 13,          "Jhelum District",          "Jhelum City",  172073.0,  22.0 },
	{ 14,           "Kasur District",           "Kasur City",  314617.0,  18.0 },
	{ 15,        "Khanewal District",        "Khanewal City",  165038.0,  17.0 }
};

struct T_product
product[] = {
	{ 1,  "Fujitsu fi-6130 A4 Series Scanner", "301 x 160 x 158", 600.0, 30.0,            "A4", "USB 2.0" },
	{ 2, "Plustek MobileOffice D28 Corporate",   "303 x 94 x 60", 600.0, 28.0,            "A4", "USB 2.0" },
	{ 3,           "Xerox Travel Scanner 100",   "289 x 51 x 38", 600.0,  4.0,            "A4", "USB 2.0" },
	{ 4,                   "ScanShell 3000DN",   "300 x 50 x 45", 600.0,  3.0,            "A4", "USB 2.0" },
	{ 5,           "Canon imageFORMULA P-150",   "280 x 95 x 40", 600.0, 10.0, "216mm x 356mm", "USB 2.0" },
	{ 6,                     "Canon DR-2080C",  "298 x 209 x 99", 600.0, 36.0, "216mm x 355mm", "USB 2.0" }
};

struct T_store
store[] = {
	{ 1,   "Miramichi",     "City Mall", 179.84, 17811.0,  2 },
	{ 2,      "Neguac", "Village Store",  26.69,  1678.0,  3 },
	{ 3, "Rogersville", "Village Store",   7.23,  1170.0,  1 },
	{ 4,  "Blackville", "Village Store",  21.73,   990.0, 10 },
	{ 5,    "Doaktown",     "City Mall",  28.74,   793.0,  9 }
};

struct T_store_district
store_district[] = {
	{ 1, 15 },
	{ 2, 15 },
	{ 3, 11 },
	{ 4,  4 },
	{ 5,  3 }
};

struct T_store_product
store_product[] = {
	{ 1, 1 },
	{ 1, 2 },
	{ 1, 3 },
	{ 1, 4 },
	{ 1, 6 },
	{ 2, 1 },
	{ 3, 2 },
	{ 2, 3 },
	{ 3, 4 },
	{ 2, 6 },
	{ 5, 1 },
	{ 5, 2 },
	{ 5, 3 },
	{ 5, 4 },
	{ 5, 6 }
};

#endif