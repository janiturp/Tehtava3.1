#include <iostream>
#include "Matkakortti.h"
#include "Kortinlataaja.h"
#include "Kortinlukija.h"
using namespace std;

int main()
{
	Kortinlataaja* lataaja = new Kortinlataaja();
	Matkakortti* mk = new Matkakortti();
	Kortinlukija* lukija = new Kortinlukija();
	mk->AlustaKortti();

	lataaja->Lataa(mk);
	lukija->LueKortti(mk);
	lukija->OtaMaksu();
}
