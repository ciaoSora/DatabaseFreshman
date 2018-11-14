/*
Database "pilot_record" contains tables:
	aircraft
	pilot
	pilot_record
*/

#ifndef PILOT_RECORD
#define PILOT_RECORD

struct T_aircraft {
	double aircraft_id;
	double order_year;
	char manufacturer[7];
	char model[22];
	char fleet_series[13];
	char powertrain[40];
	char fuel_propulsion[7];
};

struct T_pilot {
	double pilot_id;
	char pilot_name[17];
	double rank;
	double age;
	char nationality[14];
	char position[20];
	double join_year;
	char team[23];
};

struct T_pilot_record {
	double record_id;
	double pilot_id;	// --> pilot.pilot_id
	double aircraft_id;	// --> aircraft.aircraft_id
	char date[11];
};

struct T_aircraft
aircraft[] = {
	{ 1, 1992, "Gillig",  "Phantom (High Floor)", "444-464 (21)",               "DD S50EGR Allison WB-400R", "Diesel" },
	{ 2, 1996, "Gillig",  "Phantom (High Floor)",  "465-467 (3)",                  "DD S50 Allison WB-400R", "Diesel" },
	{ 3, 1998, "Gillig",  "Phantom (High Floor)",  "468-473 (6)",                  "DD S50 Allison WB-400R", "Diesel" },
	{ 4, 2000, "Gillig", "Advantage (Low Floor)",  "474-481 (8)",             "Cummins ISC Allison WB-400R", "Diesel" },
	{ 5, 2002, "Gillig", "Advantage (Low Floor)", "482-492 (11)",             "Cummins ISL Allison WB-400R", "Diesel" },
	{ 6, 2010,    "NFI",               "GE40LFR", "300-309 (10)", "Ford Triton V10 ISE-Thundervolt TB40-HG", "Hybrid" },
	{ 7, 2011,    "NFI",                "C40LFR", "310-329 (20)",  "Cummins Westport ISL-G Allison WB-400R",    "CNG" }
};

struct T_pilot
pilot[] = {
	{ 1, "Patrick O'Bryant", 13, 33, "United States",         "Center Team", 2009,                "Bradley" },
	{ 2,  "Jermaine O'Neal",  6, 40, "United States", "Forward-Center Team", 2008, "Eau Claire High School" },
	{ 3,   "Dan O'Sullivan", 45, 37, "United States",         "Center Team", 1999,                "Fordham" },
	{ 4,   "Charles Oakley", 34, 22, "United Kindom",        "Forward Team", 2001,         "Virginia Union" },
	{ 5,  "Hakeem Olajuwon", 34, 32,       "Nigeria",         "Center Team", 2010,                "Houston" }
};

struct T_pilot_record
pilot_record[] = {
	{ 1, 1, 1, "2003/01/04" },
	{ 2, 2, 1, "2004/01/04" },
	{ 3, 1, 4, "2005/01/04" },
	{ 4, 3, 6, "2006/01/04" },
	{ 5, 4, 2, "2007/01/04" },
	{ 6, 1, 5, "2008/01/04" }
};

#endif