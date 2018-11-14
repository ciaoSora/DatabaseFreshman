/*
Database "twitter_1" contains tables:
	follows
	tweets
	user_profiles
*/

#ifndef TWITTER_1
#define TWITTER_1

struct T_follows {
	double user_id;	// --> user_profiles.uid
	double follower_id;	// --> user_profiles.uid
};

struct T_tweets {
	double id;
	double user_id;	// --> user_profiles.uid
	char text[97];
	char create_date[20];
};

struct T_user_profiles {
	double uid;
	char name[16];
	char email[18];
	double partition_id;
	double followers;
};

struct T_follows
follows[] = {
	{ 1, 2 },
	{ 2, 3 },
	{ 7, 1 },
	{ 1, 3 },
	{ 3, 6 },
	{ 5, 6 },
	{ 5, 1 },
	{ 1, 5 },
	{ 3, 4 }
};

struct T_tweets
tweets[] = {
	{ 1, 1,                                                                            "Hello I'm Tony Stark.", "2018-03-09 20:00:14" },
	{ 2, 3,                                                        "Today I have went shopping at Laffayette.", "2018-03-09 20:01:02" },
	{ 4, 1,                                                                    "My company is hiring interns.", "2018-03-12 02:30:30" },
	{ 5, 4,                                                                      "Oh, I only have a few fans.", "2018-03-12 02:30:30" },
	{ 6, 6, "Let’s celebrate women, fight for equality and support each other,  not just today, but everyday!", "2018-03-12 02:30:30" },
	{ 7, 5,                                                                         "I love my new boyfriend.", "2018-03-12 02:30:30" },
	{ 8, 4,                                                       "I feel tired and don't want to write SQLs.", "2018-03-12 02:30:30" },
	{ 9, 6,                                        "I had a pretty rough time during the last couple of weeks", "2018-03-12 02:30:30" }
};

struct T_user_profiles
user_profiles[] = {
	{ 1,        "Iron Man",    "ts@richest.com",  1,  6662425 },
	{ 2,            "Mary",     "Mary@yale.edu",  2,      890 },
	{ 3,    "Black Widow
",  "bw@superhero.com", 23, 35425845 },
	{ 4,           "Susan",  "susan@gmail.com
",  1,      100 },
	{ 5,     "Tyler Swift", "ts@superstar.com
", 10, 99999998 },
	{ 6,     "Celine Dion",  "cd@superstar.com",  5, 23927492 },
	{ 7, "Natalie Portman",  "np@superstar.com",  5, 94375428 }
};

#endif