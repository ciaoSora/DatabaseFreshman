/*
Database "city_record" contains tables:
	city
	hosting_city
	match
	temperature
*/

#ifndef CITY_RECORD
#define CITY_RECORD

struct T_city {
	double city_id;
	char city[22];
	char hanzi[7];
	char hanyu_pinyin[10];
	double regional_population;
	double gdp;
};

struct T_hosting_city {
	double year;
	double match_id;	// --> match.match_id
	char host_city[3];	// --> city.city_id
};

struct T_match {
	double match_id;
	char date[17];
	char venue[47];
	char score[4];
	char result[4];
	char competition[34];
};

struct T_temperature {
	double city_id;	// --> city.city_id
	double jan;
	double feb;
	double mar;
	double apr;
	double jun;
	double jul;
	double aug;
	double sep;
	double oct;
	double nov;
	double dec;
};

struct T_city
city[] = {
	{  1,              "Shanghai",     "上海",  "Shànghǎi", 23019148, 1919.57 },
	{  2,   "Nanjing ( Jiangsu )",     "南京",   "Nánjīng",  8004680,  614.55 },
	{  3, "Hangzhou ( Zhejiang )",     "杭州",  "Hángzhōu",  8700400,  701.18 },
	{  4,    "Suzhou ( Jiangsu )", "苏州/ 蘇州",    "Sūzhōu", 10465994,  1071.7 },
	{  5,   "Ningbo ( Zhejiang )", "宁波/ 寧波",    "Níngbō",  7605689,  601.05 },
	{  6,      "Wuxi ( Jiangsu )", "无锡/ 無錫",      "Wúxī",  6372624,  688.02 },
	{  7,   "Nantong ( Jiangsu )",     "南通",   "Nántōng",  7282835,  408.02 },
	{  8, "Shaoxing ( Zhejiang )", "绍兴/ 紹興",  "Shàoxīng",  4912200,  329.12 },
	{  9, "Changzhou ( Jiangsu )",     "常州", "Chángzhōu",  4591972,  358.04 },
	{ 10,   "Jinhua ( Zhejiang )", "金华/ 金華",    "Jīnhuá",  4614100,  244.77 },
	{ 11,  "Jiaxing ( Zhejiang )", "嘉兴/ 嘉興",   "Jiāxīng",  4501700,  266.81 },
	{ 12,  "Taizhou ( Zhejiang )",     "台州",   "Tāizhōu",  5968800,  279.49 },
	{ 13,  "Yangzhou ( Jiangsu )", "扬州/ 揚州",  "Yángzhōu",  4459760,  263.03 }
};

struct T_hosting_city
hosting_city[] = {
	{ 2008, 1,  "1" },
	{ 2009, 2,  "2" },
	{ 2010, 3,  "2" },
	{ 2011, 4,  "6" },
	{ 2012, 5, "12" },
	{ 2013, 6, "11" }
};

struct T_match
match[] = {
	{ 1, "18 February 1992", "Estadio Cuscatlán , San Salvador , El Salvador", "1-0", "2-0",                    "Friendly match" },
	{ 2,     "19 July 1992",  "Estadio Rigoberto López , Managua , Nicaragua", "3-0", "5-0", "1994 FIFA World Cup qualification" },
	{ 3,     "23 July 1992", "Estadio Cuscatlán , San Salvador , El Salvador", "1-0", "5-1", "1994 FIFA World Cup qualification" },
	{ 4,     "23 July 1992", "Estadio Cuscatlán , San Salvador , El Salvador", "3-0", "5-1", "1994 FIFA World Cup qualification" },
	{ 5,     "4 April 1993", "Estadio Cuscatlán , San Salvador , El Salvador", "1–0", "2–1", "1994 FIFA World Cup qualification" },
	{ 6,     "23 July 2000", "Estadio Cuscatlán , San Salvador , El Salvador", "2–1", "7–1", "2002 FIFA World Cup qualification" }
};

struct T_temperature
temperature[] = {
	{  1, 17.8, 17.8, 18.3, 18.9, 20.0, 20.6, 20.6, 20.6, 20.0, 19.4, 18.3 },
	{  2, 26.1, 26.1, 26.1, 26.1, 27.8, 27.8, 28.3, 28.3, 28.3, 27.2, 26.7 },
	{  3, 18.9, 18.3, 19.4, 20.0, 22.2, 23.3, 23.9, 23.3, 22.8, 21.7, 20.0 },
	{  4, 26.7, 27.2, 27.8, 28.3, 30.6, 31.1, 31.7, 31.7, 30.6, 28.9, 27.8 },
	{  6, 17.2, 17.2, 18.3, 18.9, 20.6, 21.7, 21.7, 21.1, 20.6, 20.0, 18.3 },
	{ 10, 26.7, 27.2, 27.8, 27.8, 30.0, 30.6, 31.1, 31.1, 30.6, 28.9, 27.8 },
	{  7, 18.3, 18.9, 19.4, 20.6, 22.8, 23.3, 23.3, 23.3, 22.8, 21.7, 20.0 },
	{ 11, 25.6, 26.6, 26.6, 26.1, 28.3, 28.9, 29.4, 29.4, 28.9, 27.2, 26.1 }
};

#endif