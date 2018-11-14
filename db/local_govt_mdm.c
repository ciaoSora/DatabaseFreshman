/*
Database "local_govt_mdm" contains tables:
	benefits_overpayments
	business_rates
	cmi_cross_references
	council_tax
	customer_master_index
	electoral_register
	parking_fines
	rent_arrears
*/

#ifndef LOCAL_GOVT_MDM
#define LOCAL_GOVT_MDM

struct T_benefits_overpayments {
	double council_tax_id;
	double cmi_cross_ref_id;	// --> cmi_cross_references.cmi_cross_reference_id
};

struct T_business_rates {
	double business_rates_id;
	double cmi_cross_reference_id;	// --> cmi_cross_references.cmi_cross_reference_id
};

struct T_cmi_cross_references {
	double cmi_cross_reference_id;
	double master_customer_id;	// --> customer_master_index.master_customer_id
	char source_system_code[10];
};

struct T_council_tax {
	double council_tax_id;
	double cmi_cross_reference_id;	// --> cmi_cross_references.cmi_cross_reference_id
};

struct T_customer_master_index {
	double master_customer_id;
	char cmi_details[32];
};

struct T_electoral_register {
	double electoral_register_id;
	double cmi_cross_reference_id;	// --> cmi_cross_references.cmi_cross_reference_id
};

struct T_parking_fines {
	double council_tax_id;
	double cmi_cross_reference_id;	// --> cmi_cross_references.cmi_cross_reference_id
};

struct T_rent_arrears {
	double council_tax_id;
	double cmi_cross_reference_id;	// --> cmi_cross_references.cmi_cross_reference_id
};

struct T_benefits_overpayments
benefits_overpayments[] = {
	{ 3, 65 },
	{ 6, 41 },
	{ 7, 83 },
	{ 8, 48 }
};

struct T_business_rates
business_rates[] = {
	{ 2, 99 },
	{ 5, 49 },
	{ 8, 95 }
};

struct T_cmi_cross_references
cmi_cross_references[] = {
	{   2, 4,      "Rent" },
	{   4, 5,   "Parking" },
	{   8, 1,      "Rent" },
	{  41, 5,  "Benefits" },
	{  48, 5,  "Benefits" },
	{  49, 1,  "Business" },
	{  59, 1,      "Rent" },
	{  65, 9,  "Benefits" },
	{  75, 5, "Electoral" },
	{  77, 4, "Electoral" },
	{  81, 9,   "Parking" },
	{  83, 3,  "Benefits" },
	{  95, 2,  "Business" },
	{  99, 9,  "Business" },
	{ 100, 4,      "Rent" },
	{ 101, 2,       "Tax" },
	{ 102, 4,       "Tax" },
	{ 103, 9,       "Tax" },
	{ 104, 2,       "Tax" },
	{ 105, 2,       "Tax" },
	{ 106, 1,       "Tax" }
};

struct T_council_tax
council_tax[] = {
	{ 1, 101 },
	{ 2, 103 },
	{ 3, 104 },
	{ 7, 102 },
	{ 8, 106 },
	{ 9, 105 }
};

struct T_customer_master_index
customer_master_index[] = {
	{ 1,                    "Schmitt-Lang" },
	{ 2,        "Volkman, Mills and Ferry" },
	{ 3,                  "Gusikowski PLC" },
	{ 4, "Schmidt, Kertzmann and Lubowitz" },
	{ 5,      "Gottlieb, Becker and Wyman" },
	{ 6,                   "Mayer-Hagenes" },
	{ 7,              "Streich-Morissette" },
	{ 8,                  "Quigley-Paucek" },
	{ 9,                "Reynolds-McClure" }
};

struct T_electoral_register
electoral_register[] = {
	{ 2,  83 },
	{ 3,  65 },
	{ 4, 100 },
	{ 6,  95 },
	{ 7,  65 },
	{ 8,  75 }
};

struct T_parking_fines
parking_fines[] = {
	{  9,  4 },
	{ 10, 81 }
};

struct T_rent_arrears
rent_arrears[] = {
	{ 1, 100 },
	{ 2,   8 },
	{ 6,  59 },
	{ 7,   2 }
};

#endif