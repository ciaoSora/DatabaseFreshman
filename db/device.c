/*
Database "device" contains tables:
	device
	shop
	stock
*/

#ifndef DEVICE
#define DEVICE

struct T_device {
	double device_id;
	char device[22];
	char carrier[17];
	char package_version[10];
	char applications[10];
	char software_platform[8];
};

struct T_shop {
	double shop_id;
	char shop_name[19];
	char location[13];
	char open_date[15];
	double open_year;
};

struct T_stock {
	double shop_id;	// --> shop.shop_id
	double device_id;	// --> device.device_id
	double quantity;
};

struct T_device
device[] = {
	{ 1, "BlackBerry Storm 9530",     "MTS Mobility", "5.0.0.808", "5.0.0.419", "Android" },
	{ 2,                 "Apple", "Verizon Wireless", "5.0.0.328", "5.0.0.328",     "iOS" },
	{ 3,                "Huawei",   "Telus Mobility", "5.0.0.419", "5.0.0.419", "Android" },
	{ 4,                "Xiaomi",    "Bell Mobility", "5.0.0.419", "5.0.0.419", "Android" },
	{ 5,               "Samsung",         "Iusacell", "4.7.0.208", "4.7.0.151", "Android" },
	{ 6,                "Galaxy",      "Vodafone AU", "5.0.0.742", "5.0.0.451", "Android" }
};

struct T_shop
shop[] = {
	{  1,       "Dinas Device",        "Dinas",      "1 January", 2014 },
	{  2,           "Best Buy",       "Cymmer",        "15 July", 2006 },
	{  3,           "Ferndale", "Blaenllechau",     "8 November", 2009 },
	{  4,              "Apple", "Blaenllechau",        "10 June", 2009 },
	{  5,       "Pentre store",       "Pentre",    "24 February", 2011 },
	{  6,    "Tynewydd repair",        "Porth",       "11 April", 2007 },
	{  7,        "Dinas store",        "Dinas",     "13 January", 2009 },
	{  8,       "Naval repair",    "Penygraig",    "10 December", 2010 },
	{  9,       "Gelli repair",        "Gelli",      "21 August", 2013 },
	{ 10,       "Naval's shop",    "Penygraig",     "27 January", 2014 },
	{ 11,               "ATnT",       "Maerdy", "23–24 December", 2015 },
	{ 12, "National Cellphone",    "Wattstown",    "18 February", 2017 }
};

struct T_stock
stock[] = {
	{  1, 6, 100 },
	{  2, 6, 110 },
	{  3, 6, 134 },
	{  4, 6,  56 },
	{  1, 4, 200 },
	{ 11, 6, 112 },
	{  3, 4, 124 },
	{  9, 4,  51 }
};

#endif