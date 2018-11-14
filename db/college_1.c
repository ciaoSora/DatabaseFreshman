/*
Database "college_1" contains tables:
	class
	course
	department
	employee
	enroll
	professor
	student
*/

#ifndef COLLEGE_1
#define COLLEGE_1

struct T_class {
	char class_code[6];
	char course_code[9];	// --> course.course_code
	char class_section[2];
	char class_time[21];
	char class_room[7];
	double professor_employee_number;	// --> employee.employee_number
};

struct T_course {
	char course_code[9];
	char department_code[5];	// --> department.department_code
	char course_description[35];
	double course_credit;
};

struct T_department {
	char department_code[9];
	char department_name[23];
	char school_code[6];
	double employee_number;	// --> employee.employee_number
	char department_address[17];
	char department_extension[5];
};

struct T_employee {
	double employee_number;
	char employee_last_name[11];
	char employee_first_name[9];
	char employee_initial[2];
	char employee_job_code[5];
	char employee_hire_date[11];
	char employee_date_of_birth[11];
};

struct T_enroll {
	char class_code[6];	// --> class.class_code
	double student_number;	// --> student.student_num
	char enroll_grade[2];
};

struct T_professor {
	double employee_number;	// --> employee.employee_number
	char department_code[9];	// --> department.department_code
	char professor_office[9];
	char professor_extension[5];
	char professor_high_degree[6];
};

struct T_student {
	double student_num;
	char student_last_name[10];
	char student_first_name[9];
	char student_init[2];
	char student_date_of_birth[11];
	double student_class_hours_took;
	char student_class[3];
	double student_gpa;
	double student_transfer;
	char department_code[5];	// --> department.department_code
	char student_phone[5];
	double professor_number;
};

struct T_class
class[] = {
	{ "10012", "ACCT-211", "1",   "MWF 8:00-8:50 a.m.", "BUS311", 105 },
	{ "10013", "ACCT-211", "2",   "MWF 9:00-9:50 a.m.", "BUS200", 105 },
	{ "10014", "ACCT-211", "3",   "TTh 2:30-3:45 p.m.", "BUS252", 342 },
	{ "10015", "ACCT-212", "1", "MWF 10:00-10:50 a.m.", "BUS311", 301 },
	{ "10016", "ACCT-212", "2",    "Th 6:00-8:40 p.m.", "BUS252", 301 },
	{ "10017",  "CIS-220", "1",   "MWF 9:00-9:50 a.m.", "KLR209", 228 },
	{ "10018",  "CIS-220", "2",   "MWF 9:00-9:50 a.m.", "KLR211", 114 },
	{ "10019",  "CIS-220", "3", "MWF 10:00-10:50 a.m.", "KLR209", 228 },
	{ "10020",  "CIS-420", "1",     "W 6:00-8:40 p.m.", "KLR209", 162 },
	{ "10021",   "QM-261", "1",   "MWF 8:00-8:50 a.m.", "KLR200", 114 },
	{ "10022",   "QM-261", "2",   "TTh 1:00-2:15 p.m.", "KLR200", 114 },
	{ "10023",   "QM-362", "1", "MWF 11:00-11:50 a.m.", "KLR200", 162 },
	{ "10024",   "QM-362", "2",   "TTh 2:30-3:45 p.m.", "KLR200", 162 }
};

struct T_course
course[] = {
	{ "ACCT-211", "ACCT",                       "Accounting I", 3.0 },
	{ "ACCT-212", "ACCT",                      "Accounting II", 3.0 },
	{  "CIS-220",  "CIS",           "Intro. to Microcomputing", 3.0 },
	{  "CIS-420",  "CIS", "Database Design and Implementation", 4.0 },
	{   "QM-261",  "CIS",               "Intro. to Statistics", 3.0 },
	{   "QM-362",  "CIS",           "Statistical Applications", 4.0 }
};

struct T_department
department[] = {
	{     "ACCT",             "Accounting",   "BUS", 114,  "KLR 211, Box 52", "3119" },
	{      "ART",              "Fine Arts", "A&SCI", 435, "BBG 185, Box 128", "2278" },
	{     "BIOL",                "Biology", "A&SCI", 387, "AAK 230, Box 415", "4117" },
	{      "CIS", "Computer Info. Systems",   "BUS", 209,  "KLR 333, Box 56", "3245" },
	{ "ECON/FIN",      "Economics/Finance",   "BUS", 299,  "KLR 284, Box 63", "3126" },
	{      "ENG",                "English", "A&SCI", 160, "DRE 102, Box 223", "1004" },
	{     "HIST",                "History", "A&SCI", 103, "DRE 156, Box 284", "1867" },
	{     "MATH",            "Mathematics", "A&SCI", 297, "AAK 194, Box 422", "4234" },
	{  "MKT/MGT",   "Marketing/Management",   "BUS", 106,  "KLR 126, Box 55", "3342" },
	{    "PSYCH",             "Psychology", "A&SCI", 195, "AAK 297, Box 438", "4110" },
	{      "SOC",              "Sociology", "A&SCI", 342, "BBG 208, Box 132", "2008" }
};

struct T_employee
employee[] = {
	{ 100,     "Worley",    "James", "F", "CUST",  "1978-2-23",  "1950-6-12" },
	{ 101,      "Ramso",    "Henry", "B", "CUST", "1994-11-15",  "1961-11-2" },
	{ 102,    "Edwards", "Rosemary", "D", "TECH",  "1990-7-23",   "1953-7-3" },
	{ 103,    "Donelly",   "Ronald", "O", "PROF",   "1987-7-1",  "1952-10-2" },
	{ 104,      "Yukon",  "Preston", "D", "PROF",   "1992-5-1",  "1948-2-23" },
	{ 105, "Heffington",  "Arnelle", "B", "PROF",   "1991-7-1",  "1950-11-2" },
	{ 106, "Washington",     "Ross", "E", "PROF",   "1976-8-1",   "1941-3-4" },
	{ 108,  "Robertson",   "Elaine", "W", "TECH", "1983-10-18",  "1961-6-20" },
	{ 110,      "Thieu",      "Van", "S", "PROF",   "1989-8-1",  "1951-8-12" },
	{ 114, "Graztevski",   "Gerald", "B", "PROF",   "1978-8-1",  "1939-3-18" },
	{ 122,     "Wilson",     "Todd", "H", "CUST",  "1990-11-6", "1966-10-19" },
	{ 123,      "Jones",  "Suzanne", "B", "TECH",   "1994-1-5", "1967-12-30" },
	{ 124,      "Smith",     "Elsa", "K", "CLRK", "1982-12-16",  "1943-9-13" },
	{ 126,     "Ardano",    "James", "G", "CLRK",  "1994-10-1",  "1970-3-12" },
	{ 155,     "Ritula", "Annelise",  "", "PROF",   "1990-8-1",  "1957-5-24" },
	{ 160,      "Smith",   "Robert", "T", "PROF",   "1992-8-1",  "1955-6-19" },
	{ 161,     "Watson",   "George", "F", "CUST",  "1994-11-1",  "1962-10-2" },
	{ 162,        "Rob",    "Peter",  "", "PROF",   "1981-8-1",  "1940-6-20" },
	{ 165, "Williamson",  "Kathryn", "A", "CLRK",  "1992-6-15", "1968-11-17" },
	{ 166,    "Herndon",     "Jill", "M", "TECH",  "1990-8-18",  "1965-8-29" },
	{ 173,       "Teng",   "Weston", "J", "TECH",  "1980-7-15", "1951-11-17" },
	{ 191,     "Dexter",    "Willa", "N", "PROF",   "1984-8-1",  "1953-5-17" },
	{ 195,   "Williams",   "Herman", "H", "PROF",   "1988-8-1", "1955-11-19" },
	{ 209,      "Smith",  "Melanie", "K", "PROF",   "1983-8-1",  "1946-5-24" },
	{ 228,    "Coronel",   "Carlos", "M", "PROF",   "1988-8-1",  "1949-5-16" },
	{ 231,    "Shebert",  "Rebecca", "A", "CUST",  "1994-2-21",  "1963-2-27" },
	{ 297,      "Jones",  "Hermine",  "", "PROF",   "1985-1-1",   "1950-7-4" },
	{ 299,   "Stoddard",   "Doreen", "L", "PROF",   "1994-8-1",  "1960-4-25" },
	{ 301,      "Osaki",   "Ismael", "K", "PROF",   "1989-8-1",  "1952-5-25" },
	{ 333,     "Jordan",   "Julian", "H", "TECH",  "1991-4-23",  "1968-7-16" },
	{ 335,    "Okomoto",   "Ronald", "F", "PROF",   "1975-8-1",   "1944-3-3" },
	{ 342,      "Smith",   "Robert", "A", "PROF",   "1978-8-1", "1937-12-30" },
	{ 387,   "Smithson",   "George", "D", "PROF",   "1982-8-1",  "1948-10-1" },
	{ 401,    "Blalock",    "James", "G", "PROF",   "1981-8-1",  "1945-3-15" },
	{ 412,      "Smith",   "Robert", "E", "CUST",  "1985-6-24",  "1963-9-25" },
	{ 425,     "Matler",    "Ralph", "F", "PROF",   "1995-8-1",  "1973-12-2" },
	{ 435,  "Doornberg",     "Anne", "D", "PROF",   "1992-8-1",  "1963-10-2" }
};

struct T_enroll
enroll[] = {
	{ "10014", 321452, "C" },
	{ "10014", 324257, "B" },
	{ "10018", 321452, "A" },
	{ "10018", 324257, "B" },
	{ "10021", 321452, "C" },
	{ "10021", 324257, "C" }
};

struct T_professor
professor[] = {
	{ 103,     "HIST",  "DRE 156", "6783", "Ph.D." },
	{ 104,      "ENG",  "DRE 102", "5561",    "MA" },
	{ 105,     "ACCT", "KLR 229D", "8665", "Ph.D." },
	{ 106,  "MKT/MGT",  "KLR 126", "3899", "Ph.D." },
	{ 110,     "BIOL",  "AAK 160", "3412", "Ph.D." },
	{ 114,     "ACCT",  "KLR 211", "4436", "Ph.D." },
	{ 155,     "MATH",  "AAK 201", "4440", "Ph.D." },
	{ 160,      "ENG",  "DRE 102", "2248", "Ph.D." },
	{ 162,      "CIS", "KLR 203E", "2359", "Ph.D." },
	{ 191,  "MKT/MGT", "KLR 409B", "4016",   "DBA" },
	{ 195,    "PSYCH",  "AAK 297", "3550", "Ph.D." },
	{ 209,      "CIS",  "KLR 333", "3421", "Ph.D." },
	{ 228,      "CIS",  "KLR 300", "3000", "Ph.D." },
	{ 297,     "MATH",  "AAK 194", "1145", "Ph.D." },
	{ 299, "ECON/FIN",  "KLR 284", "2851", "Ph.D." },
	{ 301,     "ACCT",  "KLR 244", "4683", "Ph.D." },
	{ 335,      "ENG",  "DRE 208", "2000", "Ph.D." },
	{ 342,      "SOC",  "BBG 208", "5514", "Ph.D." },
	{ 387,     "BIOL",  "AAK 230", "8665", "Ph.D." },
	{ 401,     "HIST",  "DRE 156", "6783",    "MA" },
	{ 425, "ECON/FIN",  "KLR 284", "2851",   "MBA" },
	{ 435,      "ART",  "BBG 185", "2278", "Ph.D." }
};

struct T_student
student[] = {
	{ 321452,    "Bowser",  "William", "C",  "1975-2-12",  42, "So", 2.84, 0, "BIOL", "2134", 205 },
	{ 324257,  "Smithson",     "Anne", "K", "1981-11-15",  81, "Jr", 3.27, 1,  "CIS", "2256", 222 },
	{ 324258,    "Brewer", "Juliette",  "",  "1969-8-23",  36, "So", 2.26, 1, "ACCT", "2256", 228 },
	{ 324269,  "Oblonski",   "Walter", "H",  "1976-9-16",  66, "Jr", 3.09, 0,  "CIS", "2114", 222 },
	{ 324273,     "Smith",     "John", "D", "1958-12-30", 102, "Sr", 2.11, 1, "ENGL", "2231", 199 },
	{ 324274,   "Katinga",  "Raphael", "P", "1979-10-21", 114, "Sr", 3.15, 0, "ACCT", "2267", 228 },
	{ 324291, "Robertson",   "Gerald", "T",   "1973-4-8", 120, "Sr", 3.87, 0,  "EDU", "2267", 311 },
	{ 324299,     "Smith",     "John", "B", "1986-11-30",  15, "Fr", 2.92, 0, "ACCT", "2315", 230 }
};

#endif