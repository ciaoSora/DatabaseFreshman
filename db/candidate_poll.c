/*
Database "candidate_poll" contains tables:
	candidate
	people
*/

#ifndef CANDIDATE_POLL
#define CANDIDATE_POLL

struct T_candidate {
	double candidate_id;
	double people_id;	// --> people.people_id
	char poll_source[31];
	char date[16];
	double support_rate;
	double consider_rate;
	double oppose_rate;
	double unsure_rate;
};

struct T_people {
	double people_id;
	char sex[2];
	char name[23];
	char date_of_birth[11];
	double height;
	double weight;
};

struct T_candidate
candidate[] = {
	{ 1, 1,               "WNBC/Marist Poll", "Feb 12–15, 2007", 0.25,  0.3, 0.43, 0.2 },
	{ 2, 3,               "WNBC/Marist Poll", "Feb 12–15, 2007", 0.17, 0.42, 0.32, 0.9 },
	{ 3, 4, "FOX News/Opinion Dynamics Poll", "Feb 13–14, 2007", 0.18, 0.34, 0.44, 0.3 },
	{ 4, 6,                  "Newsweek Poll",  "Nov 9–10, 2006", 0.33,  0.2, 0.45, 0.2 },
	{ 5, 7,                  "Newsweek Poll",  "Nov 9–10, 2006", 0.24,  0.3, 0.32, 0.4 },
	{ 6, 9,                  "Newsweek Poll",  "Nov 9–10, 2006", 0.24, 0.27, 0.43, 0.2 }
};

struct T_people
people[] = {
	{ 1, "M",           "Hubert Henno", "06.10.1976", 188.0, 83.0 },
	{ 2, "M",       "Dominique Daquin", "10.11.1972", 197.0, 85.0 },
	{ 3, "F",        "Stéphane Antiga", "03.02.1976", 200.0, 94.0 },
	{ 4, "M",          "Laurent Capet", "05.05.1972", 202.0, 92.0 },
	{ 5, "F",       "Frantz Granvorka", "10.03.1976", 195.0, 90.0 },
	{ 6, "M",       "Vincent Montméat", "01.09.1977", 196.0, 88.0 },
	{ 7, "M",        "Loïc De Kergret", "20.08.1970", 193.0, 89.0 },
	{ 8, "M", "Philippe Barça-Cysique", "22.04.1977", 194.0, 88.0 },
	{ 9, "M",       "Guillaume Samica", "28.09.1981", 196.0, 82.0 }
};

#endif