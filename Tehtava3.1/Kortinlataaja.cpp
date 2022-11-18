#include <iostream>
#include <string>
#include "Kortinlataaja.h"
#include "Matkakortti.h"
using namespace std;

void Kortinlataaja::Lataa(Matkakortti* mk)
{
	float sum;
	int sumVuosi;
	int sumKk;
	int sumPv;

	cout << "Paljonko ladataan arvoa? ";
	cin >> sum;
	mk->LataaArvoa(sum);

	cout << "Montako vuotta ladataan aikaa? ";
	cin >> sumVuosi;
	cout << "Montako kuukautta ladataan aikaa? ";
	cin >> sumKk;
	cout << "Montako päivää ladataan aikaa? ";
	cin >> sumPv;

	mk->LataaAikaa(sumVuosi, sumKk, sumPv);

	cout << "Arvoa on: " << mk->getArvo() << "\n";
	cout << "Kortilla on vuosia: " << mk->getVuosi() << "\n";
	cout << "Kortilla on kuukausia: " << mk->getKk() << "\n";
	cout << "kortilla on päiviä: " << mk->getPv() << "\n";

}