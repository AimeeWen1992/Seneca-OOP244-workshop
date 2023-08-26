///////////////////////////////////////////////////
// Workshop 1  : ShoppingRec.h
// Student Name: Rong-Yuan, Wen
// Student ID  : 114556228
// Email       : rwen1@myseneca.ca
// Section     : NGG
///////////////////////////////////////////////////

#ifndef SDDS_SHOPPINGREC_H 
#define SDDS_SHOPPINGREC_H

namespace sdds {
	const int MAX_TITLE_LENGTH = 50;

	struct ShoppingRec {
		char m_title[MAX_TITLE_LENGTH + 1];
		int m_quantity;
		bool m_bought;
	};

	ShoppingRec getShoppingRec();

	void displayShoppingRec(const ShoppingRec* shp);

	void toggleBoughtFlag(ShoppingRec* rec);

	bool isShoppingRecEmpty(const ShoppingRec* shp);
}
#endif