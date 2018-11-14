/*
Database "news_report" contains tables:
	event
	journalist
	news_report
*/

#ifndef NEWS_REPORT
#define NEWS_REPORT

struct T_event {
	double event_id;
	char date[16];
	char venue[9];
	char name[23];
	double event_attendance;
};

struct T_journalist {
	double journalist_id;
	char name[18];
	char nationality[17];
	char age[3];
	double years_working;
};

struct T_news_report {
	double journalist_id;	// --> journalist.journalist_id
	double event_id;	// --> event.event_id
	char work_type[10];
};

struct T_event
event[] = {
	{ 1, "13 October 2008", "Marathon", "Olympia Games Openning", 6650 },
	{ 2, "11 October 2007", "Victoria",     "Government Hearing",  369 },
	{ 3,  "7 October 2010",  "Motagua",        "Public Debating", 1675 },
	{ 4,    "20 June 2018", "Platense",        "Global Awarding", 2356 },
	{ 5,    "9 April 2014",  "Hispano",     "Special Exhibition",  225 }
};

struct T_journalist
journalist[] = {
	{  1, "Herbert Swindells",          "England", "37", 10 },
	{  2,       "Fred Keenor",            "Wales", "27",  5 },
	{  3,  "George Gilchrist",          "England", "28",  6 },
	{  4,     "Jackie Waring",          "England", "43", 21 },
	{  5,     "Fred Chandler",          "England", "34",  6 },
	{  6,        "Ray Ferris", "Northern Ireland", "29",  3 },
	{  7,       "John Meaney",          "England", "28",  7 },
	{  8,   "Tony Waddington",          "England", "43", 12 },
	{  9,       "Jack Meaney",          "England", "37",  8 },
	{ 10,   "Frank Mitcheson",          "England", "33",  9 },
	{ 11,        "Tom Briggs",          "England", "25",  1 }
};

struct T_news_report
news_report[] = {
	{  1, 3, "Screening" },
	{ 11, 5, "Screening" },
	{  6, 1, "Screening" },
	{  4, 2,     "Music" },
	{  7, 5,     "Music" },
	{  4, 1,      "Host" },
	{  8, 4,      "Host" }
};

#endif