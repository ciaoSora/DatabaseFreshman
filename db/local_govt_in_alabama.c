/*
Database "local_govt_in_alabama" contains tables:
	events
	participants
	participants_in_events
	services
*/

#ifndef LOCAL_GOVT_IN_ALABAMA
#define LOCAL_GOVT_IN_ALABAMA

struct T_events {
	double event_id;
	double service_id;	// --> services.service_id
	char event_details[8];
};

struct T_participants {
	double participant_id;
	char participant_type_code[12];
	char participant_details[26];
};

struct T_participants_in_events {
	double event_id;	// --> events.event_id
	double participant_id;	// --> participants.participant_id
};

struct T_services {
	double service_id;
	char service_type_code[16];
};

struct T_events
events[] = {
	{  3, 5, "Success" },
	{  8, 8, "Success" },
	{ 13, 8,    "Fail" },
	{ 16, 2,    "Fail" },
	{ 17, 5,    "Fail" },
	{ 38, 6,    "Fail" },
	{ 40, 6,    "Fail" },
	{ 43, 8,    "Fail" },
	{ 48, 8,    "Fail" },
	{ 57, 5, "Success" },
	{ 60, 2,    "Fail" },
	{ 74, 2, "Success" },
	{ 80, 5, "Success" },
	{ 95, 2,    "Fail" },
	{ 96, 2, "Success" }
};

struct T_participants
participants[] = {
	{  9,   "Organizer",               "Karlee Batz" },
	{ 26,   "Organizer",            "Vilma Schinner" },
	{ 28,   "Organizer",               "Lupe Deckow" },
	{ 36,   "Organizer",             "Kenyatta Kuhn" },
	{ 37, "Participant",         "Miss Kaci Lebsack" },
	{ 38,   "Organizer",            "Macy Mayer DDS" },
	{ 60, "Participant",             "Dewitt Walter" },
	{ 63, "Participant", "Prof. Michelle Maggio Jr." },
	{ 64, "Participant",         "Dr. Jaydon Renner" },
	{ 66, "Participant",            "Justyn Lebsack" },
	{ 75, "Participant",          "Berniece Weimann" },
	{ 86,   "Organizer",                "Neil Blick" },
	{ 90, "Participant",             "Dedrick Ebert" },
	{ 96,   "Organizer",         "Miss Joyce Cremin" },
	{ 98, "Participant",           "Dr. Kris Deckow" }
};

struct T_participants_in_events
participants_in_events[] = {
	{  3, 26 },
	{  3, 66 },
	{  8, 86 },
	{ 13, 64 },
	{ 13, 90 },
	{ 16, 60 },
	{ 17, 37 },
	{ 17, 66 },
	{ 38, 66 },
	{ 40, 37 },
	{ 40, 86 },
	{ 57, 90 },
	{ 60, 26 },
	{ 80, 36 },
	{ 80, 66 },
	{ 80, 96 },
	{ 95, 63 },
	{ 96, 90 }
};

struct T_services
services[] = {
	{ 2,        "Marriage" },
	{ 5,     "Death Proof" },
	{ 6,     "Birth Proof" },
	{ 8, "Property Change" }
};

#endif