/*
Database "document_management" contains tables:
	document_functional_areas
	document_sections
	document_sections_images
	document_structures
	documents
	functional_areas
	images
	roles
	users
*/

#ifndef DOCUMENT_MANAGEMENT
#define DOCUMENT_MANAGEMENT

struct T_document_functional_areas {
	char document_code[4];	// --> documents.document_code
	char functional_area_code[2];	// --> functional_areas.functional_area_code
};

struct T_document_sections {
	double section_id;
	char document_code[4];	// --> documents.document_code
	double section_sequence;
	char section_code[3];
	char section_title[7];
};

struct T_document_sections_images {
	double section_id;	// --> document_sections.section_id
	double image_id;	// --> images.image_id
};

struct T_document_structures {
	char document_structure_code[2];
	char parent_document_structure_code[2];
	char document_structure_description[15];
};

struct T_documents {
	char document_code[4];
	char document_structure_code[2];	// --> document_structures.document_structure_code
	char document_type_code[14];
	double access_count;
	char document_name[39];
};

struct T_functional_areas {
	char functional_area_code[2];
	char parent_functional_area_code[2];
	char functional_area_description[16];
};

struct T_images {
	double image_id;
	char image_alt_text[9];
	char image_name[9];
	char image_url[37];
};

struct T_roles {
	char role_code[9];
	char role_description[23];
};

struct T_users {
	double user_id;
	char role_code[9];	// --> roles.role_code
	char user_name[17];
	char user_login[2];
	char password[41];
};

struct T_document_functional_areas
document_functional_areas[] = {
	{ "675", "9" },
	{ "930", "1" },
	{ "217", "1" },
	{ "465", "1" },
	{ "958", "1" },
	{ "958", "9" },
	{ "217", "9" },
	{ "961", "9" },
	{ "928", "9" },
	{ "958", "9" },
	{ "349", "1" },
	{ "961", "8" },
	{ "989", "1" },
	{ "706", "8" },
	{ "713", "8" }
};

struct T_document_sections
document_sections[] = {
	{ 12, "714", 6072, "70",  "after" },
	{ 15, "217", 4510, "14",  "after" },
	{ 19, "675", 7236, "90",  "after" },
	{ 21, "675", 9847, "72", "before" },
	{ 23, "465", 8548, "49",  "after" },
	{ 27, "566", 6016, "18", "before" },
	{ 38, "930", 6521, "58",  "after" },
	{ 40, "465", 4964, "93",  "after" },
	{ 54, "961", 4794, "34", "before" },
	{ 57, "989", 6349, "22",  "after" },
	{ 62, "621", 5552, "16",  "after" },
	{ 86, "706", 2170, "60",  "after" },
	{ 89, "566", 2354, "34", "before" },
	{ 93, "713", 4433, "91", "before" },
	{ 95, "621", 8805, "38", "before" }
};

struct T_document_sections_images
document_sections_images[] = {
	{ 93,  6 },
	{ 86,  2 },
	{ 27,  3 },
	{ 12, 12 },
	{ 19, 12 },
	{ 38, 12 },
	{ 89,  8 },
	{ 23,  8 },
	{ 40,  5 },
	{ 19,  2 },
	{ 62, 14 },
	{ 21,  2 },
	{ 86,  4 },
	{ 15, 14 },
	{ 54, 12 },
	{ 38,  7 },
	{ 15, 13 },
	{ 27, 10 },
	{ 40,  6 },
	{ 19,  6 }
};

struct T_document_structures
document_structures[] = {
	{ "1", "1",         "Header" },
	{ "6", "1",   "Main section" },
	{ "8", "1",            "Bib" },
	{ "5", "6",  "Image section" },
	{ "9", "8", "Author section" }
};

struct T_documents
documents[] = {
	{ "217", "8",          "Book", 1864,                       "Learning English" },
	{ "621", "1",         "Paper", 8208,             "Research about Art history" },
	{ "958", "8",          "Book", 3769,                      "Learning Database" },
	{ "961", "5", "Advertisement", 6661,                           "Summer Sails" },
	{ "989", "9",          "Book", 2910,                      "Learning Japanese" },
	{ "930", "9",            "CV", 6345,                               "David CV" },
	{ "928", "8",          "Book", 2045,                      "How to cook pasta" },
	{ "510", "6",         "Paper", 3479,                       "Humanity: a fact" },
	{ "706", "9", "Advertisement", 8623,                           "Winter Sails" },
	{ "465", "9",            "CV", 5924,                                "John CV" },
	{ "713", "8",            "CV", 2294,                                 "Joe CV" },
	{ "566", "5", "Advertisement", 3289,                           "Spring Sails" },
	{ "349", "9",          "Book", 1219,                "Life about Claude Monet" },
	{ "675", "1", "Advertisement", 7509,                             "Fall Sails" },
	{ "714", "6",         "Paper", 9948, "Relationships between History and Arts" }
};

struct T_functional_areas
functional_areas[] = {
	{ "8", "8",       "Signature" },
	{ "1", "8", "Acknowledgement" },
	{ "9", "8",      "Keep blank" }
};

struct T_images
images[] = {
	{  1,      "Lea",     "top1",     "http://www.rempelnader.com/1.jpg" },
	{  2,    "Arden",     "top2",   "http://connellykertzmann.org/1.jpg" },
	{  3,  "Mohamed",     "top3", "http://www.bernierconnelly.com/1.jpg" },
	{  4,    "Chaya",     "top4",      "http://abernathyboehm.com/1.jpg" },
	{  5, "Percival", "chapter1",            "http://gaylord.info/1.jpg" },
	{  6,  "Lincoln", "chapter2",   "http://www.hellerreinger.com/1.jpg" },
	{  7,  "Camylle", "chapter3",        "http://faycummerata.net/1.jpg" },
	{  8,   "Ashtyn", "chapter4",       "http://haleychamplin.net/1.jpg" },
	{  9, "Filomena", "chapter5",         "http://www.fritsch.net/1.jpg" },
	{ 10, "Jeanette",    "data1",               "http://sauer.com/1.jpg" },
	{ 11,     "Name",    "data2",          "http://www.heller.com/1.jpg" },
	{ 12, "Marianna",    "data3",         "http://www.hermann.com/1.jpg" },
	{ 13,  "Stephen",    "data4",           "http://rowelakin.com/1.jpg" },
	{ 14,   "Miller",    "data5",    "http://andersonluettgen.net/1.jpg" },
	{ 15,   "Trycia",    "data6",          "http://www.beahan.biz/1.jpg" }
};

struct T_roles
roles[] = {
	{      "DBA", "Database Administrator" },
	{ "PROJ-MGR",        "Project Manager" }
};

struct T_users
users[] = {
	{  1, "PROJ-MGR",     "dickens.elta", "0", "e72b5a2d50b39a8760764a5f7a9d68ca2f076877" },
	{  2,      "DBA",  "tremblay.raheem", "1", "9bc25a040d5647ced5ec32e1a455e90fafc10bcb" },
	{  3,      "DBA",       "lynn.haley", "0", "90db8f51449e6c39e2a01f0b649d5a92fe76bbbb" },
	{  4, "PROJ-MGR",          "ycremin", "0", "f6977378f409f5d2d230016a6678a582e14f43b0" },
	{  5, "PROJ-MGR",     "larson.vesta", "1", "da383455a05a824606c54e99f671c4d6a2ddae26" },
	{  6,      "DBA",         "amelie53", "0", "6aa66440864ff8143fe7dee5940a6af3460bad07" },
	{  7,      "DBA",  "jacklyn.schmitt", "1", "3f6affa583bfdf7fac6faeb2ca418431909d4b39" },
	{  8, "PROJ-MGR",    "joanne.deckow", "0", "20241478f890508ac47870cfba472e1db04a71ca" },
	{  9, "PROJ-MGR", "dickinson.lenora", "0", "a0fe5434a5f4c218e37b0082f2408b357feb0fa6" },
	{ 10,      "DBA",    "heller.harley", "1", "11af7569a5c1e8b455add5755e18131be2ac8636" },
	{ 11,      "DBA",   "roger.o'conner", "0", "3d478d7056d6417966f6b1676f6ec81b3094f44f" },
	{ 12,      "DBA",         "gussie00", "1", "75f7b5ed8e70e86467155e003ccda6fce1011c29" },
	{ 13, "PROJ-MGR",   "johanna.fisher", "1", "1fb26eea854962d41512827bf90a5b7ce4b359d8" },
	{ 14,      "DBA",           "faye30", "0", "27cca8f94136f0e8971b5ca555a21ff756871b27" },
	{ 15, "PROJ-MGR",   "glenna.simonis", "1", "95f489fc0921bbb3e7d661a550ae208b88d9b11a" }
};

#endif