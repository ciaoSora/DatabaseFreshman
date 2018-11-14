/*
Database "hospital_1" contains tables:
	affiliated_with
	appointment
	block
	department
	medication
	nurse
	on_call
	patient
	physician
	prescribes
	procedures
	room
	stay
	trained_in
	undergoes
*/

#ifndef HOSPITAL_1
#define HOSPITAL_1

struct T_affiliated_with {
	double physician;	// --> physician.employee_id
	double department;	// --> department.departmentid
	char primary_affiliation[2];
};

struct T_appointment {
	double appointment_id;
	double patient;	// --> patient.ssn
	double prep_nurse;	// --> nurse.employee_id
	double physician;	// --> physician.employee_id
	char start[17];
	char end[17];
	char examination_room[2];
};

struct T_block {
	double block_floor;
	double block_code;
};

struct T_department {
	double departmentid;
	char name[17];
	double head;	// --> physician.employee_id
};

struct T_medication {
	double code;
	char name[13];
	char brand[22];
	char description[4];
};

struct T_nurse {
	double employee_id;
	char name[16];
	char position[11];
	char registered[2];
	double ssn;
};

struct T_on_call {
	double nurse;	// --> nurse.employee_id
	double block_floor;	// --> block.block_floor
	double block_code;	// --> block.block_code
	char oncall_start[17];
	char oncall_end[17];
};

struct T_patient {
	double ssn;
	char name[18];
	char address[19];
	char phone[9];
	double insurance_id;
	double pcp;	// --> physician.employee_id
};

struct T_physician {
	double employee_id;
	char name[18];
	char position[29];
	double ssn;
};

struct T_prescribes {
	double physician;	// --> physician.employee_id
	double patient;	// --> patient.ssn
	double medication;	// --> medication.code
	char date[17];
	double appointment;	// --> appointment.appointment_id
	char dose[3];
};

struct T_procedures {
	double code;
	char name[31];
	double cost;
};

struct T_room {
	double roomnumber;
	char room_type[7];
	double block_floor;	// --> block.block_floor
	double block_code;	// --> block.block_code
	char unavailable[2];
};

struct T_stay {
	double stay_id;
	double patient;	// --> patient.ssn
	double room;	// --> room.roomnumber
	char stay_start[11];
	char stay_end[11];
};

struct T_trained_in {
	double physician;	// --> physician.employee_id
	double treatment;	// --> procedures.code
	char certification_date[11];
	char certification_expires[11];
};

struct T_undergoes {
	double patient;	// --> patient.ssn
	double procedures;	// --> procedures.code
	double stay;	// --> stay.stay_id
	char date_undergoes[11];
	double physician;	// --> physician.employee_id
	double assisting_nurse;	// --> nurse.employee_id
};

struct T_affiliated_with
affiliated_with[] = {
	{ 1, 1, "1" },
	{ 2, 1, "1" },
	{ 3, 1, "0" },
	{ 3, 2, "1" },
	{ 4, 1, "1" },
	{ 5, 1, "1" },
	{ 6, 2, "1" },
	{ 7, 1, "0" },
	{ 7, 2, "1" },
	{ 8, 1, "1" },
	{ 9, 3, "1" }
};

struct T_appointment
appointment[] = {
	{ 13216584, 100000001,  101, 1, "2008-04-24 10:00", "2008-04-24 11:00", "A" },
	{ 26548913, 100000002,  101, 2, "2008-04-24 10:00", "2008-04-24 11:00", "B" },
	{ 36549879, 100000001,  102, 1, "2008-04-25 10:00", "2008-04-25 11:00", "A" },
	{ 46846589, 100000004,  103, 4, "2008-04-25 10:00", "2008-04-25 11:00", "B" },
	{ 59871321, 100000004, None, 4, "2008-04-26 10:00", "2008-04-26 11:00", "C" },
	{ 69879231, 100000003,  103, 2, "2008-04-26 11:00", "2008-04-26 12:00", "C" },
	{ 76983231, 100000001, None, 3, "2008-04-26 12:00", "2008-04-26 13:00", "C" },
	{ 86213939, 100000004,  102, 9, "2008-04-27 10:00", "2008-04-21 11:00", "A" },
	{ 93216548, 100000002,  101, 2, "2008-04-27 10:00", "2008-04-27 11:00", "B" }
};

struct T_block
block[] = {
	{ 1, 1 },
	{ 1, 2 },
	{ 1, 3 },
	{ 2, 1 },
	{ 2, 2 },
	{ 2, 3 },
	{ 3, 1 },
	{ 3, 2 },
	{ 3, 3 },
	{ 4, 1 },
	{ 4, 2 },
	{ 4, 3 }
};

struct T_department
department[] = {
	{ 1, "General Medicine", 4 },
	{ 2,          "Surgery", 7 },
	{ 3,       "Psychiatry", 9 }
};

struct T_medication
medication[] = {
	{ 1, "Procrastin-X",                     "X", "N/A" },
	{ 2,     "Thesisin",              "Foo Labs", "N/A" },
	{ 3,       "Awakin",      "Bar Laboratories", "N/A" },
	{ 4,  "Crescavitin",        "Baz Industries", "N/A" },
	{ 5,  "Melioraurin", "Snafu Pharmaceuticals", "N/A" }
};

struct T_nurse
nurse[] = {
	{ 101,  "Carla Espinosa", "Head Nurse", "1", 111111110 },
	{ 102, "Laverne Roberts",      "Nurse", "1", 222222220 },
	{ 103,    "Paul Flowers",      "Nurse", "0", 333333330 }
};

struct T_on_call
on_call[] = {
	{ 101, 1, 1, "2008-11-04 11:00", "2008-11-04 19:00" },
	{ 101, 1, 2, "2008-11-04 11:00", "2008-11-04 19:00" },
	{ 102, 1, 3, "2008-11-04 11:00", "2008-11-04 19:00" },
	{ 103, 1, 1, "2008-11-04 19:00", "2008-11-05 03:00" },
	{ 103, 1, 2, "2008-11-04 19:00", "2008-11-05 03:00" },
	{ 103, 1, 3, "2008-11-04 19:00", "2008-11-05 03:00" }
};

struct T_patient
patient[] = {
	{ 100000001,        "John Smith",     "42 Foobar Lane", "555-0256", 68476213, 1 },
	{ 100000002,     "Grace Ritchie",     "37 Snafu Drive", "555-0512", 36546321, 2 },
	{ 100000003, "Random J. Patient",  "101 Omgbbq Street", "555-1204", 65465421, 2 },
	{ 100000004,        "Dennis Doe", "1100 Foobaz Avenue", "555-2048", 68421879, 3 }
};

struct T_physician
physician[] = {
	{ 1,       "John Dorian",              "Staff Internist", 111111111 },
	{ 2,       "Elliot Reid",          "Attending Physician", 222222222 },
	{ 3,  "Christopher Turk", "Surgical Attending Physician", 333333333 },
	{ 4,      "Percival Cox",   "Senior Attending Physician", 444444444 },
	{ 5,         "Bob Kelso",       "Head Chief of Medicine", 555555555 },
	{ 6,      "Todd Quinlan", "Surgical Attending Physician", 666666666 },
	{ 7,          "John Wen", "Surgical Attending Physician", 777777777 },
	{ 8, "Keith Dudemeister",                  "MD Resident", 888888888 },
	{ 9,       "Molly Clock",       "Attending Psychiatrist", 999999999 }
};

struct T_prescribes
prescribes[] = {
	{ 1, 100000001, 1, "2008-04-24 10:47", 13216584,  "5" },
	{ 9, 100000004, 2, "2008-04-27 10:53", 86213939, "10" },
	{ 9, 100000004, 2, "2008-04-30 16:53",     None,  "5" }
};

struct T_procedures
procedures[] = {
	{ 1,        "Reverse Rhinopodoplasty",  1500.0 },
	{ 2, "Obtuse Pyloric Recombobulation",  3750.0 },
	{ 3,       "Folded Demiophtalmectomy",  4500.0 },
	{ 4,          "Complete Walletectomy", 10000.0 },
	{ 5,     "Obfuscated Dermogastrotomy",  4899.0 },
	{ 6,    "Reversible Pancreomyoplasty",  5600.0 },
	{ 7,          "Follicular Demiectomy",    25.0 }
};

struct T_room
room[] = {
	{ 101, "Single", 1, 1, "0" },
	{ 102, "Single", 1, 1, "0" },
	{ 103, "Single", 1, 1, "0" },
	{ 111, "Single", 1, 2, "0" },
	{ 112, "Single", 1, 2, "1" },
	{ 113, "Single", 1, 2, "0" },
	{ 121, "Single", 1, 3, "0" },
	{ 122, "Single", 1, 3, "0" },
	{ 123, "Single", 1, 3, "0" },
	{ 201, "Single", 2, 1, "1" },
	{ 202, "Single", 2, 1, "0" },
	{ 203, "Single", 2, 1, "0" },
	{ 211, "Single", 2, 2, "0" },
	{ 212, "Single", 2, 2, "0" },
	{ 213, "Single", 2, 2, "1" },
	{ 221, "Single", 2, 3, "0" },
	{ 222, "Single", 2, 3, "0" },
	{ 223, "Single", 2, 3, "0" },
	{ 301, "Single", 3, 1, "0" },
	{ 302, "Single", 3, 1, "1" },
	{ 303, "Single", 3, 1, "0" },
	{ 311, "Single", 3, 2, "0" },
	{ 312, "Single", 3, 2, "0" },
	{ 313, "Single", 3, 2, "0" },
	{ 321, "Single", 3, 3, "1" },
	{ 322, "Single", 3, 3, "0" },
	{ 323, "Single", 3, 3, "0" },
	{ 401, "Single", 4, 1, "0" },
	{ 402, "Single", 4, 1, "1" },
	{ 403, "Single", 4, 1, "0" },
	{ 411, "Single", 4, 2, "0" },
	{ 412, "Single", 4, 2, "0" },
	{ 413, "Single", 4, 2, "0" },
	{ 421, "Single", 4, 3, "1" },
	{ 422, "Single", 4, 3, "0" },
	{ 423, "Single", 4, 3, "0" }
};

struct T_stay
stay[] = {
	{ 3215, 100000001, 111, "2008-05-01", "2008-05-04" },
	{ 3216, 100000003, 123, "2008-05-03", "2008-05-14" },
	{ 3217, 100000004, 112, "2008-05-02", "2008-05-03" }
};

struct T_trained_in
trained_in[] = {
	{ 3, 1, "2008-01-01", "2008-12-31" },
	{ 3, 2, "2008-01-01", "2008-12-31" },
	{ 3, 5, "2008-01-01", "2008-12-31" },
	{ 3, 6, "2008-01-01", "2008-12-31" },
	{ 3, 7, "2008-01-01", "2008-12-31" },
	{ 6, 2, "2008-01-01", "2008-12-31" },
	{ 6, 5, "2007-01-01", "2007-12-31" },
	{ 6, 6, "2008-01-01", "2008-12-31" },
	{ 7, 1, "2008-01-01", "2008-12-31" },
	{ 7, 2, "2008-01-01", "2008-12-31" },
	{ 7, 3, "2008-01-01", "2008-12-31" },
	{ 7, 4, "2008-01-01", "2008-12-31" },
	{ 7, 5, "2008-01-01", "2008-12-31" },
	{ 7, 6, "2008-01-01", "2008-12-31" },
	{ 7, 7, "2008-01-01", "2008-12-31" }
};

struct T_undergoes
undergoes[] = {
	{ 100000001, 6, 3215, "2008-05-02", 3, 101 },
	{ 100000001, 2, 3215, "2008-05-03", 7, 101 },
	{ 100000004, 1, 3217, "2008-05-07", 3, 102 },
	{ 100000004, 5, 3217, "2008-05-09", 6, 105 },
	{ 100000001, 7, 3217, "2008-05-10", 7, 101 },
	{ 100000004, 4, 3217, "2008-05-13", 3, 103 }
};

#endif