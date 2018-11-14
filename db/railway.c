/*
Database "railway" contains tables:
	manager
	railway
	railway_manage
	train
*/

#ifndef RAILWAY
#define RAILWAY

struct T_manager {
	double manager_id;
	char name[14];
	char country[14];
	char working_year_starts[5];
	double age;
	double level;
};

struct T_railway {
	double railway_id;
	char railway[9];
	char builder[14];
	char built[47];
	char wheels[8];
	char location[12];
	char objectnumber[10];
};

struct T_railway_manage {
	double railway_id;	// --> railway.railway_id
	double manager_id;	// --> manager.manager_id
	char from_year[5];
};

struct T_train {
	double train_id;
	char train_num[6];
	char name[23];
	char from[11];
	char arrival[6];
	double railway_id;	// --> railway.railway_id
};

struct T_manager
manager[] = {
	{ 1,    "Ben Curtis", "United States", "2003", 45,  5 },
	{ 2, "Todd Hamilton", "United States", "2004", 55,  5 },
	{ 3,   "Tiger Woods", "United States", "2006", 46,  5 },
	{ 4,   "David Duval", "United States", "2001", 47,  7 },
	{ 5,    "Sandy Lyle",      "Scotland", "1985", 48,  8 },
	{ 6,    "Nick Faldo",       "England", "1999", 51, 11 },
	{ 7,   "Greg Norman",     "Australia", "1993", 52, 12 }
};

struct T_railway
railway[] = {
	{  1,     "SECR",  "SECR Ashford",                                           "1901",   "4-4-0",        "York", "1975-7006" },
	{  2,       "MR",      "MR Derby", "1902 Midland Railway 1000 was rebuilt in 1914.",   "4-4-0",     "Bo'ness", "1975-7018" },
	{  3,     "GNRD", "GNR Doncaster",                                           "1902",   "4-4-2", "Barrow Hill", "1975-7005" },
	{  4,     "GWRS",   "GWR Swindon",                                           "1903",   "4-4-0",  "Toddington", "1978-7025" },
	{  5,    "GERSt", "GER Stratford",                                           "1904",  "0-6-0T", "Bressingham", "1975-7003" },
	{  6,    "GERHt",  "GER Hartford",                                           "1905",   "0-6-0", "Barrow Hill", "1978-7026" },
	{  7,    "GWRSn",   "GWR Swindon",                                           "1905",   "2-8-0",     "Shildon", "1976-7001" },
	{  8,    "GWRWk", "Swindon Works",                                           "1907",   "4-6-0",     "Swindon", "1978-7027" },
	{  9,     "LTSR",    "Stephenson",                                           "1909",  "4-4-2T", "Bressingham", "1978-7028" },
	{ 10, "Longmoor",      "Avonside",                                           "1910", "0-6-0ST", "Basingstoke", "2008-7159" }
};

struct T_railway_manage
railway_manage[] = {
	{ 8, 1, "2010" },
	{ 9, 2, "2011" },
	{ 7, 3, "2012" },
	{ 2, 4, "2013" }
};

struct T_train
train[] = {
	{ 1, "51195", "Wardha-Ballarshah Pass",     "Wardha", "08:54",  1 },
	{ 2, "12139",           "Sewagram Exp", "Mumbai CST", "09:08",  1 },
	{ 3, "12140", "Ballarshah-Mumbai Pass", "Ballarshah", "09:48",  2 },
	{ 4, "57135",    "Nagpur-Kazipet Pass",     "Nagpur", "23:44",  3 },
	{ 5, "57136",    "Kazipet-Nagpur Pass",    "Kazipet", "05:09",  5 },
	{ 6, "16094",    "Lucknow-Chennai Exp",    "Lucknow", "13:04",  5 },
	{ 7, "16032",            "Andaman Exp", "Jammu Tawi", "13:04",  7 },
	{ 8, "16031",            "Andaman Exp",    "Chennai", "23:39",  9 },
	{ 9, "11401",          "Nandigram Exp", "Mumbai CST", "13:28", 10 }
};

#endif