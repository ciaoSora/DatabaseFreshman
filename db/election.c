/*
Database "election" contains tables:
	county
	election
	party
*/

#ifndef ELECTION
#define ELECTION

struct T_county {
	double county_id;
	char county_name[17];
	double population;
	char zip_code[4];
};

struct T_election {
	double election_id;
	char counties_represented[9];
	double district;	// --> county.county_id
	char delegate[42];
	double party;	// --> party.party_id
	double first_elected;
	char committee[35];
};

struct T_party {
	double party_id;
	double year;
	char party[17];
	char governor[21];
	char lieutenant_governor[16];
	char comptroller[12];
	char attorney_general[14];
	char us_senate[23];
};

struct T_county
county[] = {
	{ 1,           "Howard", 21000.0, "D21" },
	{ 2, "Baltimore County", 90000.0, "D08" },
	{ 3,           "Colony", 79000.0, "D02" },
	{ 4,        "Mansfield", 87200.0, "D09" },
	{ 5,          "Manning", 13300.0, "D11" }
};

struct T_election
election[] = {
	{ 1,  "09.1 9A", 1,              "Bates, Gail H. Gail H. Bates", 1, 2002.0,                     "Appropriations" },
	{ 2,  "09.1 9A", 1,        "Miller, Warren E. Warren E. Miller", 1, 2003.0,                   "Economic Matters" },
	{ 3, "12.1 12A", 2, "DeBoy, Steven J. Sr. Steven J. DeBoy, Sr.", 2, 2002.0,                     "Appropriations" },
	{ 4, "12.1 12A", 3, "Malone, James E. Jr. James E. Malone, Jr.", 2, 1994.0, "Environmental Matters (Vice-Chair)" },
	{ 5, "12.2 12B", 2,            "Bobo, Elizabeth Elizabeth Bobo", 3, 1994.0,              "Environmental Matters" },
	{ 6,       "13", 1,   "Pendergrass, Shane E. Shane Pendergrass", 4, 1994.0,   "Health and Government Operations" },
	{ 7,       "13", 4,                  "Guzzone, Guy Guy Guzzone", 1, 2006.0,                     "Appropriations" },
	{ 8,       "13", 3,          "Turner, Frank S. Frank S. Turner", 7, 1994.0,                     "Ways and Means" }
};

struct T_party
party[] = {
	{ 1, 1998.0,       "Democratic",        "Peter Vallone",  "Sandra Frankel", "Carl McCall", "Eliot Spitzer",        "Charles Schumer" },
	{ 2, 1998.0,          "Liberal", "Betsy McCaughey Ross", "Jonathan Reiter", "Carl McCall", "Eliot Spitzer",        "Charles Schumer" },
	{ 3, 2002.0,       "Democratic",          "Carl McCall",   "Dennis Mehiel", "Alan Hevesi", "Eliot Spitzer",          "(no election)" },
	{ 4, 2002.0,     "Independence",         "Tom Golisano",    "Mary Donohue",   "John Faso", "Eliot Spitzer",          "(no election)" },
	{ 5, 2006.0,       "Democratic",        "Eliot Spitzer",  "David Paterson", "Alan Hevesi",  "Andrew Cuomo", "Hillary Rodham Clinton" },
	{ 6, 2006.0,     "Independence",        "Eliot Spitzer",  "David Paterson", "Alan Hevesi", "Jeanine Pirro", "Hillary Rodham Clinton" },
	{ 7, 2006.0, "Working Families",        "Eliot Spitzer",  "David Paterson", "Alan Hevesi",  "Andrew Cuomo", "Hillary Rodham Clinton" }
};

#endif