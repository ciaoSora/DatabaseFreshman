/*
Database "wine_1" contains tables:
	appellations
	grapes
	wine
*/

#ifndef WINE_1
#define WINE_1

struct T_appellations {
	double no;
	char appelation[0];
	char county[0];
	char state[0];
	char area[0];
	char isava[0];
};

struct T_grapes {
	double id;
	char grape[0];
	char color[0];
};

struct T_wine {
	double no;
	char grape[0];	// --> grapes.grape
	char winery[0];
	char appelation[0];	// --> appellations.appelation
	char state[0];
	char name[0];
	double year;
	double price;
	double score;
	double cases;
	char drink[0];
};

struct T_appellations
appellations[] = {
};

struct T_grapes
grapes[] = {
};

struct T_wine
wine[] = {
};

#endif