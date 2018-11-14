/*
Database "race_track" contains tables:
	race
	track
*/

#ifndef RACE_TRACK
#define RACE_TRACK

struct T_race {
	double race_id;
	char name[31];
	char class[6];
	char date[22];
	char track_id[2];	// --> track.track_id
};

struct T_track {
	double track_id;
	char name[32];
	char location[18];
	double seating;
	double year_opened;
};

struct T_race
race[] = {
	{ 1,            "Rolex 24 At Daytona", "DP/GT", "January 26 January 27", "1" },
	{ 2,    "Gainsco Grand Prix of Miami", "DP/GT",              "March 29", "2" },
	{ 3,                "Mexico City 250", "DP/GT",              "April 19", "2" },
	{ 4,   "Bosch Engineering 250 at VIR",    "GT",              "April 27", "4" },
	{ 5,                 "RumBum.com 250", "DP/GT",                "May 17", "5" },
	{ 6,       "Lime Rock GT Classic 250",    "GT",                "May 26", "6" },
	{ 7, "Sahlen's Six Hours of the Glen", "DP/GT",                "June 7", "7" }
};

struct T_track
track[] = {
	{ 1,              "Auto Club Speedway",       "Fontana, CA",  92000.0, 1997.0 },
	{ 2,            "Chicagoland Speedway",        "Joliet, IL",  75000.0, 2001.0 },
	{ 3,              "Darlington Raceway",    "Darlington, SC",  63000.0, 1950.0 },
	{ 4,  "Daytona International Speedway", "Daytona Beach, FL", 168000.0, 1959.0 },
	{ 5,        "Homestead-Miami Speedway",     "Homestead, FL",  65000.0, 1995.0 },
	{ 6,                 "Kansas Speedway",   "Kansas City, KS",  81687.0, 2001.0 },
	{ 7,           "Martinsville Speedway",      "Ridgeway, VA",  65000.0, 1947.0 },
	{ 8, "Michigan International Speedway",      "Brooklyn, MI", 137243.0, 1968.0 },
	{ 9,   "Phoenix International Raceway",      "Avondale, AZ",  76812.0, 1964.0 }
};

#endif