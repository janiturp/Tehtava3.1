#pragma once
#include <iostream>
#include "Matkakortti.h"
using namespace std;

class Kortinlukija
{
	private:
		// Vaihdoton raitiovaunumatka. 1,50€
		float matka0 = 1.50;
		// Kaupungin sisäinen matka. 2,50€
		float matka1 = 2.50;
		// Seutumatka tai vyöhykelisä. 5.50€
		float matka2 = 5.50;
	public:
		void LueKortti(Matkakortti*);
		bool TarkistaKelpoisuus();
		void OtaMaksu();
		float getMatka0();
		float getMatka1();
		float getMatka2();
};