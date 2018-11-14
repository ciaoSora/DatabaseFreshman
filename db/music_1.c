/*
Database "music_1" contains tables:
	artist
	files
	genre
	song
*/

#ifndef MUSIC_1
#define MUSIC_1

struct T_artist {
	char artist_name[10];
	char country[11];
	char gender[7];
	char preferred_genre[7];	// --> genre.genre_name
};

struct T_files {
	double song_id;
	char artist_name[10];	// --> artist.artist_name
	char file_size[8];
	char duration[5];
	char formats[4];
};

struct T_genre {
	char genre_name[7];
	char rating[2];
	char most_popular_in[25];
};

struct T_song {
	char song_name[23];
	char artist_name[10];	// --> artist.artist_name
	char country[11];
	double song_id;	// --> files.song_id
	char genre_is[7];	// --> genre.genre_name
	double rating;
	char languages[8];
	char releasedate[12];
	double resolution;
};

struct T_artist
artist[] = {
	{ "Shrikanta",      "India",   "Male", "tagore" },
	{     "Prity", "Bangladesh", "Female", "nazrul" },
	{    "Farida", "Bangladesh", "Female",   "folk" },
	{      "Topu",      "India", "Female", "modern" },
	{   "Enrique",        "USA",   "Male",  "blues" },
	{    "Michel",         "UK",   "Male",    "pop" }
};

struct T_files
files[] = {
	{ 1, "Shrikanta", "3.78 MB", "3:45", "mp4" },
	{ 2,     "Prity", "4.12 MB", "2:56", "mp3" },
	{ 3,    "Farida", "3.69 MB", "4:12", "mp4" },
	{ 4,   "Enrique", "4.58 MB", "5:23", "mp4" },
	{ 5,    "Michel", "5.10 MB", "4:34", "mp3" },
	{ 6,      "Topu", "4.10 MB", "4:30", "mp4" }
};

struct T_genre
genre[] = {
	{ "tagore", "8",               "Bangladesh" },
	{ "nazrul", "7",               "Bangladesh" },
	{   "folk", "9", "Sylhet,Chittagong,Kustia" },
	{ "modern", "8",               "Bangladesh" },
	{  "blues", "7",                   "Canada" },
	{    "pop", "9",                  "America" }
};

struct T_song
song[] = {
	{       "Tumi robe nirobe", "Shrikanta",      "India", 1, "tagore",  8,  "bangla", "28-AUG-2011", 1080 },
	{ "Shukno patar nupur pae",     "Prity", "Bangladesh", 2, "nazrul",  5,  "bangla", "21-SEP-1997",  512 },
	{          "Ami opar hoye",    "Farida", "Bangladesh", 3,   "folk",  7,  "bangla",  "7-APR-2001",  320 },
	{                "My love",   "Enrique",        "USA", 4,  "blues",  6, "english", "24-JAN-2007", 1080 },
	{           "Just beat it",    "Michel",         "UK", 5,    "pop",  8, "english", "17-MAR-2002",  720 },
	{            "Aj ei akash",      "Topu",      "India", 6, "modern", 10,  "bangla", "27-MAR-2004",  320 }
};

#endif