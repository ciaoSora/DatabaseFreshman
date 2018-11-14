/*
Database "flight_1" contains tables:
	aircraft
	certificate
	employee
	flight
*/

#ifndef FLIGHT_1
#define FLIGHT_1

struct T_aircraft {
	double airline_id;
	char name[31];
	double distance;
};

struct T_certificate {
	double employee_id;	// --> employee.employee_id
	double airline_id;	// --> aircraft.airline_id
};

struct T_employee {
	double employee_id;
	char name[17];
	double salary;
};

struct T_flight {
	double flight_number;
	char origin[12];
	char destination[16];
	double distance;
	char departure_date[17];
	char arrival_date[17];
	double price;
	double airline_id;	// --> aircraft.airline_id
};

struct T_aircraft
aircraft[] = {
	{  1,                 "Boeing 747-400", 8430 },
	{  2,                 "Boeing 737-800", 3383 },
	{  3,                "Airbus A340-300", 7120 },
	{  4, "British Aerospace Jetstream 41", 1502 },
	{  5,                "Embraer ERJ-145", 1530 },
	{  6,                       "SAAB 340", 2128 },
	{  7,               "Piper Archer III",  520 },
	{  8,                    "Tupolev 154", 4103 },
	{ 16,                 "Schwitzer 2-33",   30 },
	{  9,                 "Lockheed L1011", 6900 },
	{ 10,                 "Boeing 757-300", 4010 },
	{ 11,                 "Boeing 777-300", 6441 },
	{ 12,               "Boeing 767-400ER", 6475 },
	{ 13,                    "Airbus A320", 2605 },
	{ 14,                    "Airbus A319", 1805 },
	{ 15,                     "Boeing 727", 1504 }
};

struct T_certificate
certificate[] = {
	{  11564812,  2 },
	{  11564812, 10 },
	{  90873519,  6 },
	{ 141582651,  2 },
	{ 141582651, 10 },
	{ 141582651, 12 },
	{ 142519864,  1 },
	{ 142519864,  2 },
	{ 142519864,  3 },
	{ 142519864,  7 },
	{ 142519864, 10 },
	{ 142519864, 11 },
	{ 142519864, 12 },
	{ 142519864, 13 },
	{ 159542516,  5 },
	{ 159542516,  7 },
	{ 242518965,  2 },
	{ 242518965, 10 },
	{ 269734834,  1 },
	{ 269734834,  2 },
	{ 269734834,  3 },
	{ 269734834,  4 },
	{ 269734834,  5 },
	{ 269734834,  6 },
	{ 269734834,  7 },
	{ 269734834,  8 },
	{ 269734834,  9 },
	{ 269734834, 10 },
	{ 269734834, 11 },
	{ 269734834, 12 },
	{ 269734834, 13 },
	{ 269734834, 14 },
	{ 269734834, 15 },
	{ 274878974, 10 },
	{ 274878974, 12 },
	{ 310454876,  8 },
	{ 310454876,  9 },
	{ 355548984,  8 },
	{ 355548984,  9 },
	{ 356187925,  6 },
	{ 390487451,  3 },
	{ 390487451, 13 },
	{ 390487451, 14 },
	{ 548977562,  7 },
	{ 550156548,  1 },
	{ 550156548, 12 },
	{ 552455318,  2 },
	{ 552455318,  7 },
	{ 552455318, 14 },
	{ 556784565,  2 },
	{ 556784565,  3 },
	{ 556784565,  5 },
	{ 567354612,  1 },
	{ 567354612,  2 },
	{ 567354612,  3 },
	{ 567354612,  4 },
	{ 567354612,  5 },
	{ 567354612,  7 },
	{ 567354612,  9 },
	{ 567354612, 10 },
	{ 567354612, 11 },
	{ 567354612, 12 },
	{ 567354612, 15 },
	{ 573284895,  3 },
	{ 573284895,  4 },
	{ 573284895,  5 },
	{ 574489456,  6 },
	{ 574489456,  8 },
	{ 574489457,  7 }
};

struct T_employee
employee[] = {
	{ 242518965,      "James Smith", 120433 },
	{ 141582651,     "Mary Johnson", 178345 },
	{  11564812,    "John Williams", 153972 },
	{ 567354612,      "Lisa Walker", 256481 },
	{ 552455318,       "Larry West", 101745 },
	{ 550156548,      "Karen Scott", 205187 },
	{ 390487451,  "Lawrence Sperry", 212156 },
	{ 274878974,   "Michael Miller",  99890 },
	{ 254099823,   "Patricia Jones",  24450 },
	{ 356187925,     "Robert Brown",  44740 },
	{ 355548984,  "Angela Martinez", 212156 },
	{ 310454876,  "Joseph Thompson", 212156 },
	{ 489456522,      "Linda Davis",  27984 },
	{ 489221823,  "Richard Jackson",  23980 },
	{ 548977562,     "William Ward",  84476 },
	{ 310454877,     "Chad Stewart",  33546 },
	{ 142519864,      "Betty Adams", 227489 },
	{ 269734834,    "George Wright", 289950 },
	{ 287321212,   "Michael Miller",  48090 },
	{ 552455348,     "Dorthy Lewis", 152013 },
	{ 248965255,   "Barbara Wilson",  43723 },
	{ 159542516,    "William Moore",  48250 },
	{ 348121549,    "Haywood Kelly",  32899 },
	{  90873519, "Elizabeth Taylor",  32021 },
	{ 486512566,   "David Anderson",  43001 },
	{ 619023588,  "Jennifer Thomas",  54921 },
	{  15645489,      "Donald King",  18050 },
	{ 556784565,       "Mark Young", 205187 },
	{ 573284895,      "Eric Cooper", 114323 },
	{ 574489456,    "William Jones", 105743 },
	{ 574489457,      "Milo Brooks",     20 }
};

struct T_flight
flight[] = {
	{  99, "Los Angeles", "Washington D.C.", 2308, "04/12/2005 09:30", "04/12/2005 09:40", 235.98,  1 },
	{  13, "Los Angeles",         "Chicago", 1749, "04/12/2005 08:45", "04/12/2005 08:45", 220.98,  3 },
	{ 346, "Los Angeles",          "Dallas", 1251, "04/12/2005 11:50", "04/12/2005 07:05",    182,  2 },
	{ 387, "Los Angeles",          "Boston", 2606, "04/12/2005 07:03", "04/12/2005 05:03", 261.56,  6 },
	{   7, "Los Angeles",          "Sydney", 7487, "04/12/2005 05:30", "04/12/2005 11:10", 278.56,  3 },
	{   2, "Los Angeles",           "Tokyo", 5478, "04/12/2005 06:30", "04/12/2005 03:55", 780.99,  9 },
	{  33, "Los Angeles",        "Honolulu", 2551, "04/12/2005 09:15", "04/12/2005 11:15", 375.23,  7 },
	{  34, "Los Angeles",        "Honolulu", 2551, "04/12/2005 12:45", "04/12/2005 03:18", 425.98,  5 },
	{  76,     "Chicago",     "Los Angeles", 1749, "04/12/2005 08:32", "04/12/2005 10:03", 220.98,  9 },
	{  68,     "Chicago",        "New York",  802, "04/12/2005 09:00", "04/12/2005 12:02", 202.45, 10 }
};

#endif