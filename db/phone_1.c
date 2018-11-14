/*
Database "phone_1" contains tables:
	chip_model
	phone
	screen_mode
*/

#ifndef PHONE_1
#define PHONE_1

struct T_chip_model {
	char model_name[14];
	double launch_year;
	double ram_mib;
	double rom_mib;
	char slots[10];
	char wifi[8];
	char bluetooth[4];
};

struct T_phone {
	char company_name[28];
	char hardware_model_name[32];
	char accreditation_type[12];
	char accreditation_level[15];
	char date[32];
	char chip_model[13];	// --> chip_model.model_name
	char screen_mode[2];	// --> screen_mode.graphics_mode
};

struct T_screen_mode {
	double graphics_mode;
	char char_cells[8];
	char pixels[10];
	double hardware_colours;
	double used_kb;
	char map[10];
	char type[9];
};

struct T_chip_model
chip_model[] = {
	{            "X5", 2002.0, 32.0,  32.0, "1CFII,1SD",      "No",  "No" },
	{   "X5 high end", 2002.0, 64.0,  48.0, "1CFII,1SD",      "No",  "No" },
	{      "X3 Basic", 2003.0, 32.0,  32.0,       "1SD",      "No",  "No" },
	{   "X3 Advanced", 2003.0, 64.0,  64.0,       "1SD",      "No",  "No" },
	{           "X3i", 2003.0, 64.0,  64.0,       "1SD", "802.11b",  "No" },
	{   "X30 low-end", 2004.0, 32.0,  32.0,       "1SD",      "No",  "No" },
	{ "X30 mid-range", 2004.0, 64.0,  64.0,       "1SD", "802.11b", "1.1" },
	{  "X30 high-end", 2004.0, 64.0,  64.0,       "1SD", "802.11b", "1.1" },
	{  "X50 Standard", 2004.0, 64.0,  64.0, "1CFII,1SD",      "No", "Yes" },
	{  "X50 Advanced", 2004.0, 64.0, 128.0, "1CFII,1SD", "802.11b", "Yes" },
	{          "X50v", 2004.0, 64.0, 128.0, "1CFII,1SD", "802.11b", "1.2" },
	{   "X51 low-end", 2005.0, 64.0, 128.0, "1CFII,1SD",      "No", "1.2" },
	{ "X51 mid-range", 2005.0, 64.0, 128.0, "1CFII,1SD", "802.11b", "1.2" },
	{          "X51v", 2005.0, 64.0, 256.0, "1CFII,1SD", "802.11b", "1.2" }
};

struct T_phone
phone[] = {
	{  "Sony Mobile Communications",              "XPERIA T, XPERIA J",        "Full", "joyn Hot Fixes",     "Approved (awarded 15.11.12)",           "X5", "1" },
	{              "LG Electronics",                         "LG-P760",        "Full", "joyn Hot Fixes",     "Approved (awarded 19.11.12)",         "X51v", "3" },
	{           "Nokia Corporation", "Lumia 920, Lumia 820, Lumia 620",        "Full", "joyn Hot Fixes",     "Approved (awarded 05.12.12)",           "X5", "4" },
	{  "Samsung Electronics Co Ltd",                        "GT-I9300",        "Full",           "joyn",     "Approved (awarded 23.10.12)",  "X30 low-end", "5" },
	{             "HTC Corporation",                           "Z520e", "Provisional",           "joyn", "Approved (valid until 14.09.13)",          "X3i", "6" },
	{  "Samsung Electronics Co Ltd",                        "GT-I9100", "Provisional",           "joyn", "Approved (valid until 06.04.13)", "X50 Advanced", "1" },
	{           "Nokia Corporation",                       "Nokia 700", "Provisional",           "joyn", "Approved (valid until 03.05.13)",           "X5", "2" },
	{ "Huawei Technologies Co.Ltd.",                     "U8815 Asura", "Provisional",           "joyn", "Approved (valid until 03.05.13)", "X50 Standard", "3" }
};

struct T_screen_mode
screen_mode[] = {
	{ 0.0, "80 × 32", "640 × 256", 2.0, 20.0, "3000–7FFF", "Graphics" },
	{ 1.0, "40 × 32", "320 × 256", 4.0, 20.0, "3000–7FFF", "Graphics" },
	{ 2.0, "20 × 32", "160 × 256", 8.0, 20.0, "3000–7FFF", "Graphics" },
	{ 3.0, "80 × 25", "640 × 200", 2.0, 16.0, "4000–7FFF",     "Text" },
	{ 4.0, "40 × 32", "320 × 256", 2.0, 10.0, "5800–7FFF", "Graphics" },
	{ 5.0, "20 × 32", "160 × 256", 4.0, 10.0, "5800–7FFF", "Graphics" },
	{ 6.0, "40 × 25", "320 × 200", 2.0,  8.0, "6000–7FFF",     "Text" }
};

#endif