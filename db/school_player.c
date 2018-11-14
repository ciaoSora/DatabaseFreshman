/*
Database "school_player" contains tables:
	player
	school
	school_details
	school_performance
*/

#ifndef SCHOOL_PLAYER
#define SCHOOL_PLAYER

struct T_player {
	double player_id;
	char player[16];
	char team[21];
	double age;
	char position[21];
	double school_id;	// --> school.school_id
};

struct T_school {
	double school_id;
	char school[23];
	char location[14];
	double enrollment;
	double founded;
	char denomination[15];
	char boys_or_girls[38];
	char day_or_boarding[15];
	double year_entered_competition;
	char school_colors[20];
};

struct T_school_details {
	double school_id;	// --> school.school_id
	char nickname[14];
	char colors[21];
	char league[5];
	char class[9];
	char division[11];
};

struct T_school_performance {
	double school_id;	// --> school.school_id
	char school_year[10];
	char class_a[15];
	char class_aa[17];
};

struct T_player
player[] = {
	{  1, "Timothy Beckham", "Tampa Bay Devil Rays", 15,            "Shortstop", 1 },
	{  2,   "Pedro Álvarez",   "Pittsburgh Pirates", 14,        "Third baseman", 2 },
	{  3,     "Eric Hosmer",   "Kansas City Royals", 16,        "First Baseman", 1 },
	{  4,    "Brian Matusz",    "Baltimore Orioles", 17,  "Left-handed pitcher", 1 },
	{  5,    "Buster Posey", "San Francisco Giants", 15,              "Catcher", 2 },
	{  6,  "Kyle Skipworth",      "Florida Marlins", 14,              "Catcher", 2 },
	{  7,   "Yonder Alonso",      "Cincinnati Reds", 15,        "First baseman", 1 },
	{  8,  "Gordon Beckham",    "Chicago White Sox", 16,            "Shortstop", 1 },
	{  9,    "Aaron Crow *", "Washington Nationals", 16, "Right-handed pitcher", 1 },
	{ 10,    "Jason Castro",       "Houston Astros", 15,              "Catcher", 1 },
	{ 11,    "Justin Smoak",        "Texas Rangers", 15,        "First baseman", 1 },
	{ 12,    "Jemile Weeks",    "Oakland Athletics", 15,       "Second baseman", 2 },
	{ 13,   "Brett Wallace",  "St. Louis Cardinals", 17,        "Third baseman", 5 },
	{ 14,     "Aaron Hicks",      "Minnesota Twins", 14,           "Outfielder", 6 },
	{ 15,    "Ethan Martin",  "Los Angeles Dodgers", 15, "Right-handed pitcher", 1 },
	{ 16,    "Brett Lawrie",    "Milwaukee Brewers", 15,              "Catcher", 1 },
	{ 17,    "David Cooper",    "Toronto Blue Jays", 17,        "First baseman", 1 },
	{ 18,       "Ike Davis",        "New York Mets", 15,        "First baseman", 4 },
	{ 19,  "Andrew Cashner",         "Chicago Cubs", 16, "Right-handed pitcher", 4 },
	{ 20,     "Josh Fields",     "Seattle Mariners", 15, "Right-handed pitcher", 4 },
	{ 21,      "Ryan Perry",       "Detroit Tigers", 17, "Right-handed pitcher", 3 },
	{ 22,    "Reese Havens",        "New York Mets", 18,            "Shortstop", 5 },
	{ 23,   "Allan Dykstra",     "San Diego Padres", 15,        "First baseman", 5 }
};

struct T_school
school[] = {
	{ 1,   "St Aloysius' College", "Milsons Point", 1200.0, 1879.0,       "Catholic",                                  "Boys",            "Day", 1929.0, "Royal Blue and Gold" },
	{ 2,         "Barker College",       "Hornsby", 2300.0, 1890.0,       "Anglican", "Boys only to Yr 9 Co-ed Year 10 to 12", "Day & Boarding", 1929.0,          "Red & Blue" },
	{ 3,       "Cranbrook School", "Bellevue Hill", 1000.0, 1918.0,       "Anglican",                                  "Boys", "Day & Boarding", 1929.0,   "Red, White & Blue" },
	{ 4,    "Knox Grammar School",     "Wahroonga", 1850.0, 1924.0, "Uniting Church",                                  "Boys", "Day & Boarding", 1929.0,        "Black & Blue" },
	{ 5, "Trinity Grammar School",   "Summer Hill", 2200.0, 1913.0,       "Anglican",                                  "Boys", "Day & Boarding", 1929.0,     "Green and White" },
	{ 6,       "Waverley College",      "Waverley", 1430.0, 1903.0,       "Catholic",                                  "Boys",            "Day", 1944.0, "Royal Blue and Gold" }
};

struct T_school_details
school_details[] = {
	{ 1,        "Tigers",      "Blue and Yellow", "DSHA", "Flight A", "Division 1" },
	{ 2,          "Auks", "Dark Green and White", "DSHA", "Flight B", "Division 3" },
	{ 3,    "Buccaneers",     "Garnet and White", "DSHA",  "Fight A", "Division 1" },
	{ 4,       "Raiders",     "Maroon and White", "DSHA", "Flight B", "Division 3" },
	{ 5,      "Seahawks",        "Blue and Gold", "DSHA", "Flight B", "Division 2" },
	{ 6, "Silver Eagles",    "Silver and Maroon", "DSHA", "Flight B", "Division 3" }
};

struct T_school_performance
school_performance[] = {
	{ 1,   "1987-88",         "Yantis",           "Blanco" },
	{ 1,   "1988-89",          "Happy",           "Blanco" },
	{ 1,   "1989-90", "Skidmore-Tynan",           "Bishop" },
	{ 2,   "1990-91",         "Louise",            "Lytle" },
	{ 2,   "1991-92",          "Anton",        "Clarendon" },
	{ 3,   "1992-93",          "Anton",          "Wheeler" },
	{ 4,   "1993-94",         "Utopia",            "Lytle" },
	{ 3,   "1994-95",  "Martin's Mill",    "Wallis Brazos" },
	{ 5,   "1995-96",        "Lindsay",        "Henrietta" },
	{ 6,   "1996-97",  "Martin's Mill",         "Canadian" },
	{ 1,   "1997-98",  "Martin's Mill",          "Buffalo" },
	{ 2,   "1998-99",        "Wheeler",      "Van Alstyne" },
	{ 3, "1999-2000",    "Valley View",          "Lindsay" },
	{ 5,   "2000-01",         "Menard",           "Weimar" },
	{ 6,   "2001-02",     "Santa Anna",      "Hale Center" },
	{ 2,   "2002-03",  "Martin's Mill",      "Hale Center" },
	{ 1,   "2003-04",  "Martin's Mill", "S&S Consolidated" },
	{ 2,   "2004-05",        "Lindsay",           "Salado" },
	{ 3,   "2005-06",         "Quanah",           "Salado" },
	{ 1,   "2006-07",  "Martin's Mill",           "Weimar" },
	{ 6,   "2007-08",          "Frost",           "Weimar" },
	{ 4,   "2008-09",        "Winters",          "Dimmitt" }
};

#endif