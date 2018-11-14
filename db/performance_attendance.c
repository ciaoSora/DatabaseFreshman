/*
Database "performance_attendance" contains tables:
	member
	member_attendance
	performance
*/

#ifndef PERFORMANCE_ATTENDANCE
#define PERFORMANCE_ATTENDANCE

struct T_member {
	char member_id[3];
	char name[15];
	char nationality[14];
	char role[13];
};

struct T_member_attendance {
	double member_id;	// --> member.member_id
	double performance_id;	// --> performance.performance_id
	double num_of_pieces;
};

struct T_performance {
	double performance_id;
	char date[12];
	char host[20];
	char location[22];
	double attendance;
};

struct T_member
member[] = {
	{  "1",  "Wilfredo Ruiz",       "Uruguay", "Prime Violin" },
	{  "2",  "Luis González",     "Argentina",       "Violin" },
	{  "3", "Héctor Campana",     "Argentina",       "Violin" },
	{  "4", "Héctor Campana",     "Argentina",       "Violin" },
	{  "5",     "Juan Espil",     "Argentina",        "Viola" },
	{  "6",   "Andrew Moten", "United States",        "Viola" },
	{  "7",  "Charlie Burke", "United States",        "Viola" },
	{  "8",    "Corey Allen", "United States",        "Cello" },
	{  "9",   "John Eubanks", "United States",        "Cello" },
	{ "10", "Joshua Pittman", "United States",         "Bass" },
	{ "11",    "Joseph Bunn", "United States",         "Bass" }
};

struct T_member_attendance
member_attendance[] = {
	{ 11, 3, 2 },
	{  7, 2, 3 },
	{  4, 6, 4 },
	{  2, 1, 1 },
	{  3, 1, 1 },
	{  4, 3, 2 },
	{  5, 1, 2 },
	{  1, 4, 4 }
};

struct T_performance
performance[] = {
	{ 1.0,  "February 2",       "Boston Bruins",             "TD Garden",  165 },
	{ 2.0,  "February 4",    "New York Rangers", "Madison Square Garden", 1820 },
	{ 3.0,  "February 5",   "Atlanta Thrashers",        "Verizon Center", 1878 },
	{ 4.0,  "February 7", "Pittsburgh Penguins",        "Verizon Center", 1877 },
	{ 5.0, "February 10",  "Montreal Canadiens",           "Bell Centre", 2173 },
	{ 6.0, "February 11",     "Ottawa Senators",      "Scotiabank Place", 1982 }
};

#endif