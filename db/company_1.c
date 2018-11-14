/*
Database "company_1" contains tables:
	department
	department_locations
	dependent
	employee
	project
	works_on
*/

#ifndef COMPANY_1
#define COMPANY_1

struct T_department {
	char department_name[15];
	double department_number;
	double manager_ssn;
	char manager_start_date[11];
};

struct T_department_locations {
	double department_number;
	char department_location[10];
};

struct T_dependent {
	double employee_ssn;
	char dependent_name[10];
	char sex[2];
	char birth_date[11];
	char relationship[9];
};

struct T_employee {
	char first_name[10];
	char minit[2];
	char last_name[8];
	double ssn;
	char birth_date[11];
	char address[25];
	char sex[2];
	double salary;
	double super_ssn;
	double department_no;
};

struct T_project {
	char dependent_name[16];
	double dependent_number;
	char dependent_location[10];
	double department_number;
};

struct T_works_on {
	double employee_ssn;
	double project_number;
	double hours;
};

struct T_department
department[] = {
	{   "Headquarters", 1, 888665555, "1981-06-19" },
	{ "Administration", 4, 987654321, "1995-01-01" },
	{       "Research", 5, 333445555, "1988-05-22" }
};

struct T_department_locations
department_locations[] = {
	{ 1,   "Houston" },
	{ 4,  "Stafford" },
	{ 5,  "Bellaire" },
	{ 5, "Sugarland" },
	{ 5,   "Houston" }
};

struct T_dependent
dependent[] = {
	{ 333445555,     "Alice", "F", "1986-04-05", "Daughter" },
	{ 333445555,  "Theodore", "M", "1983-10-25",      "Son" },
	{ 333445555,       "Joy", "F", "1958-05-03",   "Spouse" },
	{ 987654321,     "Abner", "M", "1942-02-28",   "Spouse" },
	{ 123456789,   "Michael", "M", "1988-01-04",      "Son" },
	{ 123456789,     "Alice", "F", "1988-12-30", "Daughter" },
	{ 123456789, "Elizabeth", "F", "1967-05-05",   "Spouse" }
};

struct T_employee
employee[] = {
	{      "Jonh", "B",   "Smith", 123456789, "1965-01-09", "731 Fondren, Houston, TX", "M", 30000, 333445555, 5 },
	{  "Franklin", "T",    "Wong", 333445555, "1955-12-08",    "638 Voss, Houston, TX", "M", 40000, 888665555, 5 },
	{     "Joyce", "A", "English", 453453453, "1972-07-31",   "5631 Rice, Houston, TX", "F", 25000, 333445555, 5 },
	{    "Ramesh", "K", "Narayan", 666884444, "1962-09-15", "975 Fire Oak, Humble, TX", "M", 38000, 333445555, 5 },
	{     "James", "E",    "Borg", 888665555, "1937-11-10",   "450 Stone, Houston, TX", "M", 55000,      None, 1 },
	{ "Jennifier", "S", "Wallace", 987654321, "1941-06-20",  "291 Berry, Bellaire, TX", "F", 43000, 888665555, 4 },
	{     "Ahmad", "V",  "Jabbar", 987987987, "1969-03-29",  "980 Dallas, Houston, TX", "M", 25000, 987654321, 4 },
	{    "Alicia", "J",  "Zelaya", 999887777, "1968-01-19",  "3321 Castle, Spring, TX", "F", 25000, 987654321, 4 }
};

struct T_project
project[] = {
	{        "ProductX",  1,  "Bellaire", 5 },
	{        "ProductY",  2, "Sugarland", 5 },
	{        "ProductZ",  3,   "Houston", 5 },
	{ "Computerization", 10,  "Stafford", 4 },
	{  "Reorganization", 20,   "Houston", 1 },
	{     "Newbenefits", 30,  "Stafford", 4 }
};

struct T_works_on
works_on[] = {
	{ 123456789,  1, 32.5 },
	{ 123456789,  2,  7.5 },
	{ 666884444,  3, 40.0 },
	{ 453453453,  1, 20.0 },
	{ 453453453,  2, 20.0 },
	{ 333445555,  2, 10.0 },
	{ 333445555,  3, 10.0 },
	{ 333445555, 10, 10.0 },
	{ 333445555, 20, 10.0 },
	{ 999887777, 30, 30.0 },
	{ 999887777, 10, 10.0 },
	{ 987987987, 10, 35.0 },
	{ 987987987, 30,  5.0 },
	{ 987654321, 30, 20.0 },
	{ 987654321, 20, 15.0 },
	{ 888665555, 20, None }
};

#endif