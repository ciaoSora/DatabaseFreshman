/*
Database "station_weather" contains tables:
	route
	station
	train
	weekly_weather
*/

#ifndef STATION_WEATHER
#define STATION_WEATHER

struct T_route {
	double train_id;	// --> train.id
	double station_id;	// --> station.id
};

struct T_station {
	double id;
	char network_name[19];
	char services[40];
	char local_authority[13];
};

struct T_train {
	double id;
	double train_number;
	char name[25];
	char origin[14];
	char destination[16];
	char time[6];
	char interval[6];
};

struct T_weekly_weather {
	double station_id;	// --> station.id
	char day_of_week[10];
	double high_temperature;
	double low_temperature;
	double precipitation;
	double wind_speed_mph;
};

struct T_route
route[] = {
	{  1, 1 },
	{  1, 2 },
	{  1, 3 },
	{  2, 1 },
	{  2, 3 },
	{  2, 7 },
	{  3, 4 },
	{  4, 6 },
	{  4, 2 },
	{  5, 1 },
	{  6, 5 },
	{  7, 4 },
	{  7, 5 },
	{  7, 8 },
	{  8, 8 },
	{  9, 7 },
	{  9, 8 },
	{ 10, 9 }
};

struct T_station
station[] = {
	{  1,           "Amersham", "Metropolitan line and Chiltern Railways",     "Chiltern" },
	{  2,             "Bushey",    "London Overground and London Midland",      "Watford" },
	{  3,          "Brentwood",                          "Greater Anglia",    "Brentwood" },
	{  4,         "Broxbourne",                          "Greater Anglia",   "Broxbourne" },
	{  5,    "Carpenders Park",                       "London Overground", "Three Rivers" },
	{  6,   "Chafford Hundred",                                     "c2c",     "Thurrock" },
	{  7, "Chalfont & Latimer", "Metropolitan line and Chiltern Railways",     "Chiltern" },
	{  8,            "Chesham",                       "Metropolitan line",     "Chiltern" },
	{  9,           "Cheshunt",                          "Greater Anglia",   "Broxbourne" },
	{ 10,        "Chorleywood", "Metropolitan line and Chiltern Railways", "Three Rivers" },
	{ 11,            "Croxley",                       "Metropolitan line", "Three Rivers" }
};

struct T_train
train[] = {
	{  1, 16724,      "Ananthapuri Express",    "Trivandrum",         "Chennai", "17:15", "Daily" },
	{  2, 16127,        "Guruvayur Express",       "Chennai",       "Guruvayur", "22:10", "Daily" },
	{  3, 16128,        "Guruvayur Express",     "Guruvayur",         "Chennai",  "4:49", "Daily" },
	{  4, 16723,      "Ananthapuri Express",       "Chennai",      "Trivandrum", "11:35", "Daily" },
	{  5, 16382, "Jayanthi Janatha Express", "Kanniyakumari",          "Mumbai", "06:30", "Daily" },
	{  6, 16525,           "Island Express", "Kanniyakumari",       "Bangalore", "11:15", "Daily" },
	{  7, 56701,   "Madurai Fast Passenger",        "Quilon",         "Madurai", "21:49", "Daily" },
	{  8, 56700,    "Quilon Fast Passenger",       "Madurai", "Quilon Junction", "04:55", "Daily" },
	{  9, 16526,           "Island Express",     "Bangalore",   "Kanniyakumari", "16:59", "Daily" },
	{ 10, 16381, "Jayanthi Janatha Express",        "Mumbai",   "Kanniyakumari", "10:38", "Daily" },
	{ 11, 16650,        "Parasuram Express",     "Nagercoil",       "Mangalore", "04:20", "Daily" }
};

struct T_weekly_weather
weekly_weather[] = {
	{  1,    "Monday", 59, 54, 90.0, 13 },
	{  1,   "Tuesday", 66, 55, 20.0, 12 },
	{  1, "Wednesday", 60, 52, 10.0, 14 },
	{  1,  "Thursday", 55, 50, 30.0, 13 },
	{  1,    "Friday", 55, 52, 50.0, 17 },
	{  1,  "Saturday", 55, 52, 50.0, 14 },
	{  1,    "Sunday", 54, 52, 50.0, 12 },
	{  2,    "Monday", 58, 54, 60.0, 20 },
	{  2,   "Tuesday", 57, 54, 80.0, 22 },
	{  2, "Wednesday", 59, 55, 90.0, 23 },
	{  2,  "Thursday", 59, 56, 70.0, 24 },
	{  3,    "Monday", 49, 46, 30.0, 10 },
	{  3,   "Tuesday", 50, 49, 50.0,  9 },
	{  3, "Wednesday", 55, 54, 60.0,  8 },
	{  4,    "Monday", 58, 54, 70.0,  7 },
	{ 10,   "Tuesday", 59, 52, 90.0, 22 }
};

#endif