/*
Database "student_assessment" contains tables:
	addresses
	candidate_assessments
	candidates
	courses
	people
	people_addresses
	student_course_attendance
	student_course_registrations
	students
*/

#ifndef STUDENT_ASSESSMENT
#define STUDENT_ASSESSMENT

struct T_addresses {
	double address_id;
	char line_1[63];
	char line_2[10];
	char city[21];
	char zip_postcode[4];
	char state_province_county[14];
	char country[4];
};

struct T_candidate_assessments {
	double candidate_id;	// --> candidates.candidate_id
	char qualification[2];
	char assessment_date[20];
	char asessment_outcome_code[5];
};

struct T_candidates {
	double candidate_id;	// --> people.person_id
	char candidate_details[7];
};

struct T_courses {
	char course_id[4];
	char course_name[15];
	char course_description[15];
	char other_details[5];
};

struct T_people {
	double person_id;
	char first_name[9];
	char middle_name[9];
	char last_name[11];
	char cell_mobile_number[19];
	char email_address[28];
	char login_name[5];
	char password[41];
};

struct T_people_addresses {
	double person_address_id;
	double person_id;	// --> people.person_id
	double address_id;	// --> addresses.address_id
	char date_from[20];
	char date_to[20];
};

struct T_student_course_attendance {
	double student_id;	// --> student_course_registrations.student_id
	double course_id;	// --> student_course_registrations.course_id
	char date_of_attendance[20];
};

struct T_student_course_registrations {
	double student_id;	// --> students.student_id
	double course_id;	// --> courses.course_id
	char registration_date[20];
};

struct T_students {
	double student_id;	// --> people.person_id
	char student_details[7];
};

struct T_addresses
addresses[] = {
	{  5,                   "0900 Roderick Oval
New Albina, WA 19200-7914", "Suite 096",           "Linnealand", "862",       "Montana", "USA" },
	{  9,            "966 Dach Ports Apt. 322
Lake Harmonyhaven, VA 65235",  "Apt. 163",         "South Minnie", "716",         "Texas", "USA" },
	{ 29, "28550 Broderick Underpass Suite 667
Zakaryhaven, WY 22945-1534",  "Apt. 419", "North Trystanborough", "112",       "Vermont", "USA" },
	{ 30,            "83706 Ana Trafficway Apt. 992
West Jarret, MI 01112",  "Apt. 884",           "Lake Kaley", "431",    "Washington", "USA" },
	{ 43,                     "69165 Beatty Station
Haleighstad, MS 55164", "Suite 333",       "Stephaniemouth", "559", "Massachusetts", "USA" },
	{ 45,               "242 Pacocha Streets
East Isabellashire, ND 03506", "Suite 370",        "O'Connellview", "514",     "NewMexico", "USA" },
	{ 55,               "801 Modesto Island Suite 306
Lacyville, VT 34059", "Suite 764",             "New Alta", "176",   "Mississippi", "USA" },
	{ 63,                    "0177 Fisher Dam
Berniershire, KS 00038-7574",  "Apt. 903",         "South Keenan", "613",      "Michigan", "USA" },
	{ 68,                  "09471 Hickle Light
Port Maxime, NJ 91550-5409", "Suite 903",           "Hannahside", "354",   "Connecticut", "USA" },
	{ 73,                        "67831 Lavonne Lodge
Olsontown, DC 20894",  "Apt. 756",           "Alizeshire", "687",     "NewMexico", "USA" },
	{ 82,                      "228 Fahey Land
Baileymouth, FL 06297-5606", "Suite 087",      "South Naomibury", "079",          "Ohio", "USA" },
	{ 88,        "1770 Adriel Ramp Apt. 397
West Ashlynnchester, UT 91968",  "Apt. 617",    "East Tavaresburgh", "179",   "SouthDakota", "USA" },
	{ 92,            "8760 Eldon Squares Suite 260
Marquisestad, GA 38537",  "Apt. 435",           "Lake Devon", "244",   "SouthDakota", "USA" },
	{ 94,        "8263 Abbott Crossing Apt. 066
Oberbrunnerbury, LA 67451",  "Apt. 626",           "Boyleshire", "536",        "Kansas", "USA" },
	{ 99,                     "521 Paucek Field
North Oscartown, WI 31527",  "Apt. 849",          "Terencetown", "979",      "Michigan", "USA" }
};

struct T_candidate_assessments
candidate_assessments[] = {
	{ 111, "A", "2010-04-07 11:44:34", "Pass" },
	{ 121, "B", "2010-04-17 11:44:34", "Pass" },
	{ 131, "D", "2010-04-05 11:44:34", "Fail" },
	{ 141, "C", "2010-04-06 11:44:34", "Pass" },
	{ 151, "B", "2010-04-09 11:44:34", "Pass" }
};

struct T_candidates
candidates[] = {
	{ 111,   "Jane" },
	{ 121, "Robert" },
	{ 131,   "Alex" },
	{ 141,    "Tao" },
	{ 151,   "Jack" },
	{ 161,    "Leo" },
	{ 171,  "Robin" },
	{ 181,  "Cindy" }
};

struct T_courses
courses[] = {
	{ "301",     "statistics",     "statistics", "None" },
	{ "302",        "English",        "English", "None" },
	{ "303",         "French",         "French", "None" },
	{ "304",       "database",       "database", "None" },
	{ "305", "data structure", "data structure", "None" },
	{ "306",    "Art history",    "Art history", "None" }
};

struct T_people
people[] = {
	{ 111,  "Shannon",   "Elissa",     "Senger",        "01955267735",  "javier.trantow@example.net", "pgub", "5e4ff49a61b3544da3ad7dc7e2cf28847564c64c" },
	{ 121, "Virginie",   "Jasmin",   "Hartmann",  "(508)319-2970x043",     "boyer.lonie@example.com", "bkkv", "b063331ea8116befaa7b84c59c6a22200f5f8caa" },
	{ 131,  "Dariana",   "Hayley",     "Bednar",  "(262)347-9364x516",         "leila14@example.net", "zops", "b20b6a9f24aadeda70d54e410c3219f61fb063fb" },
	{ 141,    "Verna",  "Arielle",      "Grant", "1-372-548-7538x314",    "adele.gibson@example.net", "uuol", "7be9c03d5467d563555c51ebb3eb78e7f90832ec" },
	{ 151,     "Hoyt", "Mercedes", "Wintheiser",     "1-603-110-0647", "stanley.monahan@example.org", "bnto", "c55795df86182959094b83e27900f7cf44ced570" },
	{ 161,    "Mayra",    "Haley",   "Hartmann", "724-681-4161x51632",   "terry.kuhlman@example.org", "rzxu", "ecae473cb54601e01457078ac0cdf4a1ced837bb" },
	{ 171,   "Lizeth",     "Bell", "Bartoletti", "812.228.0645x91481",     "celestine11@example.net", "mkou", "76a93d1d3b7becc932d203beac61d064bd54e947" },
	{ 181,     "Nova",    "Amiya",      "Feest",       "766-272-9964",       "oreynolds@example.com", "qrwl", "7dce9b688636ee212294c257dd2f6b85c7f65f2e" }
};

struct T_people_addresses
people_addresses[] = {
	{ 122, 111,  9, "2012-09-26 13:21:00", "2018-03-21 09:46:30" },
	{ 257, 121,  5, "2008-07-31 02:17:25", "2018-03-09 02:11:12" },
	{ 269, 131, 88, "2008-05-26 20:43:41", "2018-03-11 20:26:41" },
	{ 276, 141, 99, "2014-05-10 00:32:31", "2018-03-08 06:16:47" },
	{ 281, 151, 92, "2010-11-26 05:21:12", "2018-03-12 21:10:02" },
	{ 340, 161, 45, "2017-05-01 17:32:26", "2018-03-09 08:45:06" },
	{ 363, 171, 55, "2015-05-24 16:14:12", "2018-02-23 22:44:18" },
	{ 396, 181, 82, "2013-12-26 16:57:01", "2018-03-03 16:06:17" }
};

struct T_student_course_attendance
student_course_attendance[] = {
	{ 111, 301, "2008-11-04 10:35:13" },
	{ 121, 301, "2012-04-09 11:44:34" },
	{ 121, 303, "2014-04-09 11:44:34" },
	{ 141, 302, "2013-04-09 11:44:34" },
	{ 171, 301, "2015-04-09 11:44:34" },
	{ 161, 302, "2014-01-09 11:44:34" },
	{ 151, 305, "2012-05-09 11:44:34" },
	{ 141, 301, "2012-09-09 11:44:34" }
};

struct T_student_course_registrations
student_course_registrations[] = {
	{ 111, 301, "2008-11-04 10:35:13" },
	{ 121, 301, "2008-10-04 10:35:13" },
	{ 121, 303, "2008-11-14 10:35:13" },
	{ 131, 303, "2008-11-05 10:35:13" },
	{ 141, 302, "2008-11-06 10:35:13" },
	{ 151, 305, "2008-11-07 10:35:13" },
	{ 161, 302, "2008-11-07 10:35:13" },
	{ 171, 301, "2008-11-07 10:35:13" },
	{ 141, 301, "2008-11-08 10:35:13" }
};

struct T_students
students[] = {
	{ 111,  "Marry" },
	{ 121, "Martin" },
	{ 131,  "Barry" },
	{ 141, "Nikhil" },
	{ 151,   "John" },
	{ 161,  "Sarah" },
	{ 171,    "Joe" },
	{ 181,  "Nancy" }
};

#endif