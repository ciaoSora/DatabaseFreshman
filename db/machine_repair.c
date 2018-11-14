/*
Database "machine_repair" contains tables:
	machine
	repair
	repair_assignment
	technician
*/

#ifndef MACHINE_REPAIR
#define MACHINE_REPAIR

struct T_machine {
	double machine_id;
	double making_year;
	char class[6];
	char team[24];
	char machine_series[6];
	double value_points;
	double quality_rank;
};

struct T_repair {
	double repair_id;
	char name[13];
	char launch_date[12];
	char notes[49];
};

struct T_repair_assignment {
	double technician_id;	// --> technician.technician_id
	double repair_id;	// --> repair.repair_id
	double machine_id;	// --> machine.machine_id
};

struct T_technician {
	double technician_id;
	char name[18];
	char team[4];
	double starting_year;
	double age;
};

struct T_machine
machine[] = {
	{ 1, 1991, "125cc",   "Hero Sports TS- Honda", "RS125", 105.0,  2 },
	{ 2, 1992, "125cc", "Marlboro Pileri - Honda", "RS125",  57.0,  1 },
	{ 3, 1993, "125cc", "Marlboro Pileri - Honda", "RS125", 129.0,  4 },
	{ 4, 1994, "125cc",      "Givi Racing- Honda", "RS125", 194.0,  5 },
	{ 5, 1995, "125cc",      "Givi Racing- Honda", "RS125",  65.0,  3 },
	{ 6, 1996, "125cc",                   "Honda", "RS125", 126.0,  7 },
	{ 7, 1997, "125cc",                   "Honda", "RS125", 238.0,  8 },
	{ 8, 1998, "125cc",    "Team Givi- Honda LCR", "RS125",  62.0, 13 },
	{ 9, 1999, "125cc",    "Team Givi- Honda LCR", "RS125", 171.0, 11 }
};

struct T_repair
repair[] = {
	{ 1,   "Discoverer", "21 Jan 2009",           "repair Failed. Failed to achieve orbit" },
	{ 2, "Discoverer 1", "28 Feb 2009",                      "First object in polar orbit" },
	{ 3, "Discoverer 3", "03 Jun 2009",           "repair failed. Failed to achieve orbit" },
	{ 4,     "OPS 3236", "13 Jun 2014",                      "First object in polar orbit" },
	{ 5,     "OPS 3467", "24 Mar 2014", "repair failed. Guidance system failed. No orbit." },
	{ 6,     "OPS 3754", "19 Jun 2014",                  "Out-of-focus area on some film." },
	{ 7,     "OPS 3491", "10 Jun 2014",                  "Cameras operated satisfactorily" },
	{ 8,     "OPS 3042", "05 Aug 2014",                   "Cameras operated successfully." },
	{ 9,     "OPS 3360", "18 Nov 2014",                   "Cameras operated successfully." }
};

struct T_repair_assignment
repair_assignment[] = {
	{ 1, 1, 1 },
	{ 2, 2, 2 },
	{ 3, 3, 3 },
	{ 1, 4, 7 },
	{ 1, 5, 6 },
	{ 1, 2, 3 },
	{ 1, 8, 7 },
	{ 5, 5, 2 },
	{ 7, 2, 4 }
};

struct T_technician
technician[] = {
	{  1.0,        "Joe Sewell", "NYY", 2012.0, 37 },
	{  2.0,        "John Brown", "NYY", 2013.0, 36 },
	{  3.0,       "Tony Sewell", "CLE", 2005.0, 43 },
	{  4.0,       "Mark Sewell", "CLE", 2009.0, 28 },
	{  5.0, "Charlie Hollocher", "CHC", 2002.0, 35 },
	{  6.0,      "Lou Boudreau", "CLE", 2016.0, 32 },
	{  7.0,     "Eddie Collins", "CWS", 2005.0, 45 },
	{  8.0,      "Joe Cochrane", "CLE", 2006.0, 46 },
	{  9.0,     "Eddie Collins", "CWS", 2003.0, 47 },
	{ 10.0,   "Mickey Cochrane", "PHA", 2009.0, 38 }
};

#endif