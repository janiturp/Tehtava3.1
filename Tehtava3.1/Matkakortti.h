#pragma once
#include <iostream>
#include <string>

class Matkakortti
{
private:
	float _arvo;
	int _vuosi, _kk, _pv;

public:
	// Nollataan muuttujat
	void AlustaKortti();

	// Kasvatetaan arvoa
	void LataaArvoa(float summa);

	// Parametrina on viimeinen voimassaolopäivämäärä
	void LataaAikaa(int vuosi, int kk, int pv);

	float getArvo() const;
	int getVuosi() const;
	int getKk() const;
	int getPv() const;

	void Maksu(float summa);
};


