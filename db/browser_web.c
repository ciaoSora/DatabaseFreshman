/*
Database "browser_web" contains tables:
	accelerator_compatible_browser
	browser
	web_client_accelerator
*/

#ifndef BROWSER_WEB
#define BROWSER_WEB

struct T_accelerator_compatible_browser {
	double accelerator_id;	// --> web_client_accelerator.id
	double browser_id;	// --> browser.id
	double compatible_since_year;
};

struct T_browser {
	double id;
	char name[18];
	double market_share;
};

struct T_web_client_accelerator {
	double id;
	char name[38];
	char operating_system[47];
	char client[19];
	char connection[51];
};

struct T_accelerator_compatible_browser
accelerator_compatible_browser[] = {
	{ 1, 1, 1995 },
	{ 1, 2, 1996 },
	{ 2, 3, 1996 },
	{ 2, 4, 2000 },
	{ 3, 1, 2005 },
	{ 3, 2, 2007 },
	{ 3, 3, 2008 },
	{ 4, 4, 2009 },
	{ 9, 1, 2010 }
};

struct T_browser
browser[] = {
	{ 1, "Internet Explorer", 28.96 },
	{ 2,           "Firefox", 18.11 },
	{ 3,            "Safari",  8.54 },
	{ 4,             "Opera",   1.2 }
};

struct T_web_client_accelerator
web_client_accelerator[] = {
	{  1,                              "CACHEbox",                              "Appliance (Linux)",      "End user, ISP",         "Broadband, Satellite, Wireless, Fiber, DSL" },
	{  2,                                "CProxy",                                        "Windows",               "user",                                    "up to 756kbit/s" },
	{  3,                             "Fasterfox",         "Windows, Mac, Linux and Mobile devices",               "user",                   "Dialup, Wireless, Broadband, DSL" },
	{  4,                                "fasTun",                                            "Any",                "All",                                                "Any" },
	{  5,                              "Freewire",                      "Windows, except NT and 95",                "ISP",                                            "Dial-up" },
	{  6, "Google Web Accelerator (discontinued)",                                        "Windows", "user/Google server",                                          "Broadband" },
	{  7,                           "Heigh Speed",                                        "Windows",                "All",                                                "Any" },
	{  8,                               "Netfury",                                   "Windows, Mac",      "End User, ISP", "Dial-up, Broadband, DSL, ISDN, Satellite, Wireless" },
	{  9,                                 "Nitro",                                   "Windows, Mac",      "End User, ISP", "Dial-up, Broadband, DSL, ISDN, Satellite, Wireless" },
	{ 10,                               "ONSPEED",                "Windows, Mac and Mobile devices",               "user",                   "Dialup, Wireless, Broadband, DSL" },
	{ 11,                           "Opera Turbo",        "Android, Linux, Mac and Windows devices",  "user/Opera server",                                                "Any" },
	{ 12,                                "Polipo",  "Unix (Linux, *BSD, Mac OS X, others), Windows",           "user/ISP",                                                "Any" },
	{ 13,                                "Propel",                                   "Windows, Mac",      "End User, ISP",               "Dial, DSL, ISDN, Satellite, wireless" },
	{ 14,             "Proxyconn Web Accelerator",                   "Windows, Mac, Mobile devices",               "user",                   "Dialup, Wireless, Broadband, DSL" },
	{ 15,                                "RabbIT",          "Any system with Java 1.6 VM available",                "ISP",                                                "Any" },
	{ 16,                                 "Squid",  "Unix (Linux, *BSD, Mac OS X, others), Windows",           "user/ISP",                                                "Any" },
	{ 17,                                "Toonel", "Windows, Linux, Mac OS, Symbian, WindowsMobile",           "user/ISP",                                                "Any" },
	{ 18,                               "WinGate",                         "Windows (2000 onwards)",                "All",                                                "Any" },
	{ 19,                               "Ziproxy",           "Unix (Linux, *BSD, Mac OS X, others)",                "ISP",                                                "Any" }
};

#endif