/*
Database "tracking_orders" contains tables:
	customers
	invoices
	order_items
	orders
	products
	shipment_items
	shipments
*/

#ifndef TRACKING_ORDERS
#define TRACKING_ORDERS

struct T_customers {
	double customer_id;
	char customer_name[9];
	char customer_details[12];
};

struct T_invoices {
	double invoice_number;
	char invoice_date[20];
	char invoice_details[11];
};

struct T_order_items {
	double order_item_id;
	double product_id;	// --> products.product_id
	double order_id;	// --> orders.order_id
	char order_item_status[7];
	char order_item_details[5];
};

struct T_orders {
	double order_id;
	double customer_id;	// --> customers.customer_id
	char order_status[8];
	char date_order_placed[20];
	char order_details[5];
};

struct T_products {
	double product_id;
	char product_name[8];
	char product_details[5];
};

struct T_shipment_items {
	double shipment_id;	// --> shipments.shipment_id
	double order_item_id;	// --> order_items.order_item_id
};

struct T_shipments {
	double shipment_id;
	double order_id;	// --> orders.order_id
	double invoice_number;	// --> invoices.invoice_number
	char shipment_tracking_number[6];
	char shipment_date[20];
	char other_shipment_details[5];
};

struct T_customers
customers[] = {
	{  1, "Savannah",       "rerum" },
	{  2,   "George",         "est" },
	{  3,  "Alberto",    "deleniti" },
	{  4,  "Leilani",       "sequi" },
	{  5,   "Hadley",    "corrupti" },
	{  6,     "Chaz",     "nostrum" },
	{  7,   "Violet", "consectetur" },
	{  8,   "Parker",       "rerum" },
	{  9,    "Devan",   "doloribus" },
	{ 10,   "Beulah",     "commodi" },
	{ 11,  "Hershel",         "vel" },
	{ 12,   "Conrad",    "eligendi" },
	{ 13,   "Samson",       "dicta" },
	{ 14,  "Mabelle",      "quidem" },
	{ 15,  "Jeramie",     "officia" }
};

struct T_invoices
invoices[] = {
	{  1, "1989-09-03 16:03:05",      "vitae" },
	{  2, "1989-12-11 16:40:57",     "magnam" },
	{  3, "1995-10-07 14:13:05",         "et" },
	{  4, "1985-04-27 08:38:49",    "tempore" },
	{  5, "1971-02-12 00:29:57",     "labore" },
	{  6, "2007-12-25 15:49:37",      "optio" },
	{  7, "1991-01-05 16:44:25", "reiciendis" },
	{  8, "2012-06-12 07:34:17", "doloremque" },
	{  9, "1974-07-27 16:18:49",        "quo" },
	{ 10, "2005-02-27 19:53:13",    "eveniet" },
	{ 11, "1972-08-12 05:48:49",      "earum" },
	{ 12, "1987-11-15 15:41:40",         "ea" },
	{ 13, "1981-03-28 20:01:44", "voluptatem" },
	{ 14, "1998-07-30 15:39:12",   "repellat" },
	{ 15, "2012-12-08 02:21:54", "voluptatem" }
};

struct T_order_items
order_items[] = {
	{  1,  4,  6, "Finish", "None" },
	{  2, 15,  6, "Finish", "None" },
	{  3, 12, 15, "Finish", "None" },
	{  4,  8, 15,  "Payed", "None" },
	{  5, 11,  6,  "Payed", "None" },
	{  6, 14,  8,  "Payed", "None" },
	{  7,  3,  5,  "Payed", "None" },
	{  8,  4, 10, "Cancel", "None" },
	{  9, 11, 15, "Cancel", "None" },
	{ 10,  7,  7, "Cancel", "None" },
	{ 11, 15, 11, "Cancel", "None" },
	{ 12,  1, 11, "Cancel", "None" },
	{ 13, 14,  7,  "Payed", "None" },
	{ 14, 15, 14,  "Payed", "None" },
	{ 15,  3,  9,  "Payed", "None" }
};

struct T_orders
orders[] = {
	{  1,  2, "Shipped", "2009-02-21 15:26:19", "None" },
	{  2, 11, "Shipped", "1974-06-24 22:10:26", "None" },
	{  3,  4, "Shipped", "1982-12-29 21:10:11", "None" },
	{  4, 15, "Packing", "1974-08-10 08:15:16", "None" },
	{  5,  5, "Packing", "2010-06-08 02:20:49", "None" },
	{  6,  7, "Packing", "1975-12-23 15:59:43", "None" },
	{  7, 15, "Packing", "1976-09-01 09:27:00", "None" },
	{  8, 10, "On Road", "1997-01-27 19:12:01", "None" },
	{  9,  3, "On Road", "1983-09-08 12:32:49", "None" },
	{ 10,  2, "On Road", "1982-12-09 09:42:23", "None" },
	{ 11,  9, "On Road", "1979-12-07 02:03:49", "None" },
	{ 12,  2, "On Road", "1976-01-18 08:09:12", "None" },
	{ 13, 15, "On Road", "2002-12-06 14:13:30", "None" },
	{ 14, 10, "On Road", "2002-09-13 07:38:09", "None" },
	{ 15,  8, "On Road", "1971-05-10 01:54:18", "None" }
};

struct T_products
products[] = {
	{  1,    "food", "None" },
	{  2,    "book", "None" },
	{  3,    "food", "None" },
	{  4,    "food", "None" },
	{  5, "clothes", "None" },
	{  6, "clothes", "None" },
	{  7, "clothes", "None" },
	{  8,    "book", "None" },
	{  9,    "book", "None" },
	{ 10,   "phone", "None" },
	{ 11,   "phone", "None" },
	{ 12,   "phone", "None" },
	{ 13,   "phone", "None" },
	{ 14,   "music", "None" },
	{ 15,   "music", "None" }
};

struct T_shipment_items
shipment_items[] = {
	{ 11, 12 },
	{ 10, 15 },
	{ 10, 12 },
	{  2,  2 },
	{ 14, 10 },
	{  3,  7 },
	{  4,  5 },
	{ 13,  7 },
	{ 12, 10 },
	{  5, 13 },
	{ 15,  4 },
	{  4, 11 },
	{ 12, 15 },
	{  5,  5 },
	{  2, 10 }
};

struct T_shipments
shipments[] = {
	{  1,  5, 13,  "3452", "1983-08-13 22:34:11", "None" },
	{  2,  7,  2,  "0114", "1977-11-10 12:11:25", "None" },
	{  3, 10,  5,   "478", "2006-01-17 03:08:05", "None" },
	{  4,  5,  2, "08858", "1982-01-24 12:13:16", "None" },
	{  5,  6, 15, "35342", "1981-11-13 23:20:42", "None" },
	{  6,  4,  3,  "7480", "1978-05-17 00:03:43", "None" },
	{  7, 13, 15,  "7662", "1999-10-12 10:41:49", "None" },
	{  8,  9, 10,  "2323", "1983-03-08 16:14:58", "None" },
	{  9,  8, 10,  "5991", "1986-06-07 13:54:27", "None" },
	{ 10, 14, 15,  "0182", "1973-06-20 14:26:43", "None" },
	{ 11,  8,  2,  "1334", "1992-08-13 04:04:52", "None" },
	{ 12,  2,  9,  "2421", "1985-11-12 12:41:34", "None" },
	{ 13,  3, 10,  "2424", "1970-02-02 05:23:57", "None" },
	{ 14, 12,  3,  "4029", "2014-01-15 20:52:15", "None" },
	{ 15,  7,  9,  "2436", "1991-04-01 15:24:24", "None" }
};

#endif