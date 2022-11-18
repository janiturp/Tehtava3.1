#include "Kortinlukija.h"

Matkakortti* kortti;
int valinta;

void Kortinlukija::LueKortti(Matkakortti* k)
{
	kortti = k;
}

bool Kortinlukija::TarkistaKelpoisuus()
{
	if (kortti->getVuosi() > 0 || kortti->getKk() > 0 || kortti->getPv() > 0)
	{
		return true;
	}
	else 
	{
		return false;
	}
}

void Kortinlukija::OtaMaksu()
{
	cout << "Valitse matka: \n";
	cout << "0 = vaihdoton raitiovaunumatka\n";
	cout << "1 = kaupungin sisäinen matka\n";
	cout << "2 = seutumatka tai vyöhkelisä\n";
	cin >> valinta;

	if (Kortinlukija::TarkistaKelpoisuus())
	{
		switch (valinta)
		{
		default: 
			cout << "Laiton valinta.";
		case 0:
			if (kortti->getArvo() >= Kortinlukija::getMatka0())
			{
				kortti->Maksu(Kortinlukija::getMatka0());
				cout << "Maksu onnistui. Kortin uusi arvo: " << kortti->getArvo();
			}
			else
			{
				cout << "Kortilla liian vähän arvoa!";
			}

		case 1:
			if (kortti->getArvo() >= Kortinlukija::getMatka1())
			{
				kortti->Maksu(Kortinlukija::getMatka1());
				cout << "Maksu onnistui. Kortin uusi arvo: " << kortti->getArvo();
			}
			else
			{
				cout << "Kortilla liian vähän arvoa!";
			}

		case 2:
			if (kortti->getArvo() >= Kortinlukija::getMatka2())
			{
				kortti->Maksu(Kortinlukija::getMatka2());
				cout << "Maksu onnistui. Kortin uusi arvo: " << kortti->getArvo();
			}
			else
			{
				cout << "Kortilla liian vähän arvoa!";
			}


			break;
		}
	}
	else
	{
		cout << "Kortilla ei tarpeeksi rahaa tai ladattua aikaa!";
	}
}

float Kortinlukija::getMatka0() 
{
	return matka0;
}

float Kortinlukija::getMatka1()
{
	return matka1;
}

float Kortinlukija::getMatka2()
{
	return matka2;
}