/*
Database "mountain_photos" contains tables:
	camera_lens
	mountain
	photos
*/

#ifndef MOUNTAIN_PHOTOS
#define MOUNTAIN_PHOTOS

struct T_camera_lens {
	double id;
	char brand[20];
	char name[46];
	double focal_length_mm;
	double max_aperture;
};

struct T_mountain {
	double id;
	char name[38];
	double height;
	double prominence;
	char range[19];
	char country[14];
};

struct T_photos {
	double id;
	double camera_lens_id;	// --> camera_lens.id
	double mountain_id;	// --> mountain.id
	char color[12];
	char name[13];
};

struct T_camera_lens
camera_lens[] = {
	{  1,             "Olympus",                   "Olympus 15mm f/8.0 Body Cap",  15.0, 8.0 },
	{  2,             "Olympus",         "Olympus M.Zuiko Digital ED 45mm f/1.8",  45.0, 1.8 },
	{  3,             "Olympus",         "Olympus M.Zuiko Digital ED 75mm f/1.8",  75.0, 1.8 },
	{  4,           "Panasonic", "Panasonic Leica DG Summilux 25mm f /1.4 Asph.",  25.0, 1.4 },
	{  5,           "Panasonic",    "Panasonic Leica DG Nocticron 42.5mm f /1.2",  42.5, 1.2 },
	{  6,           "Panasonic",                "Panasonic Lumix G 150mm f /2.8", 150.0, 2.8 },
	{  7, "Schneider Kreuznach", "Schneider Kreuznach Super Angulon 14mm f /2.0",  14.0, 2.0 },
	{  8, "Schneider Kreuznach",         "Schneider Kreuznach Xenon 30mm f /1.4",  30.0, 1.4 },
	{  9,               "Sigma",                            "Sigma 19mm f2.8 DN",  19.0, 2.8 },
	{ 10,               "Sigma",                         "Sigma 19mm f2.8 EX DN",  19.0, 2.8 },
	{ 11,               "Sigma",                            "Sigma 30mm f2.8 DN",  30.0, 2.8 }
};

struct T_mountain
mountain[] = {
	{  1,             "Abune Yosef / Guliba Amba", 4260.0, 1909.0,       "Lasta Massif",      "Ethiopia" },
	{  2,                           "Ioll / Yoll", 4220.0,  350.0,       "Kollo Massif",      "Ethiopia" },
	{  3,                                  "Bada", 4195.0, 1605.0,     "Arsi Mountains",      "Ethiopia" },
	{  4,                  "Kaka / Kecha / Chiqe", 4193.0, 1215.0,     "Arsi Mountains",      "Ethiopia" },
	{  5,                          "Jbel Toubkal", 4167.0, 3755.0,      "Toubkal Atlas",       "Morocco" },
	{  6,                              "Muhavura", 4127.0, 1530.0,  "Virunga Mountains", "Rwanda Uganda" },
	{  7,                             "Hey / Hay", 4125.0,  660.0,   "Semien Mountains",      "Ethiopia" },
	{  8,                                  "Guna", 4120.0, 1510.0,        "Guna Massif",      "Ethiopia" },
	{  9,                "Choqa / Choke / Birhan", 4100.0, 2225.0,    "Choqa Mountains",      "Ethiopia" },
	{ 10,                            "Ouanoukrim", 4088.0,  420.0,      "Toubkal Atlas",       "Morocco" },
	{ 11,                               "Chilalo", 4071.0,  610.0,     "Arsi Mountains",      "Ethiopia" },
	{ 12,                        "Mount Cameroon", 4070.0, 3931.0,      "Cameroon line",      "Cameroon" },
	{ 13,                                "Inatye", 4070.0,  500.0,   "Semien Mountains",      "Ethiopia" },
	{ 14,                           "Ighil Mgoun", 4068.0, 1904.0, "Central High Atlas",       "Morocco" },
	{ 15,                     "Weshema / Wasema?", 4030.0,  420.0,     "Bale Mountains",      "Ethiopia" },
	{ 16,                     "Oldoinyo Lesatima", 4001.0, 2081.0,     "Aberdare Range",         "Kenya" },
	{ 17, "Jebel n'Tarourt / Tifnout / Iferouane", 3996.0,  910.0,      "Toubkal Atlas",       "Morocco" },
	{ 18,                                "Muggia", 3950.0,  500.0,       "Lasta Massif",      "Ethiopia" },
	{ 19,                                "Dubbai", 3941.0, 1540.0,   "Tigray Mountains",      "Ethiopia" },
	{ 20,                           "Taska n’Zat", 3912.0,  460.0,      "Toubkal Atlas",       "Morocco" },
	{ 21,                               "Aksouâl", 3903.0,  450.0,      "Toubkal Atlas",       "Morocco" },
	{ 22,                        "Mount Kinangop", 3902.0,  530.0,     "Aberdare Range",         "Kenya" },
	{ 23,                                "Cimbia", 3900.0,  590.0,       "Kollo Massif",      "Ethiopia" }
};

struct T_photos
photos[] = {
	{  1,  1, 20,         "RBG",       "monkey" },
	{  2, 10,  2,         "RBG",      "rabbits" },
	{  3, 10,  1, "Black/White",        "deers" },
	{  4,  1, 10,         "RBG",        "grass" },
	{  5,  5, 14,         "RBG",        "cloud" },
	{  6,  6, 12,         "RBG",       "sunset" },
	{  7,  7, 12,         "RBG",        "river" },
	{  8,  7, 12, "Black/White",        "wolfs" },
	{  9, 10, 14,         "RBG", "the mountain" },
	{ 10, 10, 20,         "RBG",         "life" }
};

#endif