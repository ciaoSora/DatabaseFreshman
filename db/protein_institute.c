/*
Database "protein_institute" contains tables:
	building
	institution
	protein
*/

#ifndef PROTEIN_INSTITUTE
#define PROTEIN_INSTITUTE

struct T_building {
	char building_id[2];
	char name[27];
	char street_address[30];
	char years_as_tallest[13];
	double height_feet;
	double floors;
};

struct T_institution {
	char institution_id[3];
	char institution[34];
	char location[26];
	double founded;
	char type[8];
	double enrollment;
	char team[17];
	char primary_conference[18];
	char building_id[2];	// --> building.building_id
};

struct T_protein {
	char common_name[24];
	char protein_name[39];
	double divergence_from_human_lineage;
	char accession_number[15];
	double sequence_length;
	char sequence_identity_to_human_protein[4];
	char institution_id[2];	// --> institution.institution_id
};

struct T_building
building[] = {
	{ "0",     "Citizens Bank Building",     "701 North Franklin Street",    "1913–1915", 145, 12 },
	{ "1",            "Tampa City Hall", "315 John F. Kennedy Boulevard",    "1915–1926", 160, 10 },
	{ "2",             "Floridan Hotel",           "905 Franklin Street",    "1926–1966", 204, 17 },
	{ "3", "Franklin Exchange Building",     "655 North Franklin Street",    "1966–1972", 280, 22 },
	{ "4",                 "Park Tower",        "400 North Tampa Street",    "1972–1981", 458, 36 },
	{ "5",      "One Tampa City Center",     "201 North Franklin Street",    "1981–1986", 537, 39 },
	{ "6",      "Bank of America Tower",    "101 East Kennedy Boulevard",    "1986–1992", 577, 42 },
	{ "7",            "100 North Tampa",        "100 North Tampa Street", "1992–present", 579, 42 }
};

struct T_institution
institution[] = {
	{  "0",              "Ave Maria University",        "Ave Maria, Florida", 1998.0, "Private", 1200,          "Gyrenes",           "The Sun", "1" },
	{  "1",           "Dakota State University",     "Madison, South Dakota", 1881.0,  "Public", 3102,          "Trojans",              "none", "1" },
	{  "2",             "Edward Waters College",     "Jacksonville, Florida", 1866.0, "Private",  800,           "Tigers", "Gulf Coast (GCAC)", "3" },
	{  "3", "Haskell Indian Nations University",          "Lawrence, Kansas", 1884.0,  "Tribal", 1000, "Fighting Indians",              "MCAC", "5" },
	{  "4",                 "Jamestown College",   "Jamestown, North Dakota", 1883.0, "Private",  967,          "Jimmies",              "none", "2" },
	{  "5",  "Lindenwood University–Belleville",      "Belleville, Illinois", 2003.0, "Private", 2600,             "Lynx",              "none", "0" },
	{  "6",         "Mayville State University",    "Mayville, North Dakota", 1889.0,  "Public",  825,           "Comets",              "none", "0" },
	{  "7",                     "Menlo College",      "Atherton, California", 1927.0, "Private",  650,             "Oaks",            "CalPac", "4" },
	{  "8",                  "Point University",       "West Point, Georgia", 1937.0, "Private", 1035,         "Skyhawks",               "AAC", "7" },
	{  "9",      "Valley City State University", "Valley City, North Dakota", 1890.0,  "Public", 1340,          "Vikings",              "none", "3" },
	{ "10",   "Webber International University",      "Babson Park, Florida", 1927.0, "Private",  616,         "Warriors",           "The Sun", "5" }
};

struct T_protein
protein[] = {
	{    "Tropical Clawed Frog", "uncharacterized protein C20orf117-like", 371.2, "XP_002942331.1", 1584.0, "39%", "1" },
	{       "purple sea urchin",      "uncharacterized protein LOC578090", 742.9,    "XP_783370.2", 1587.0, "47%", "3" },
	{              "body louse",        "Centromeric protein E, putative", 782.7, "XP_002429877.1", 2086.0, "30%", "5" },
	{ "southern house mosquito",         "conserved hypothetical protein", 782.7, "XP_001843754.1", 1878.0, "32%", "5" },
	{                "porkworm",  "surface antigen repeat family protein", 937.5, "XP_003380263.1", 2030.0, "36%", "9" }
};

#endif