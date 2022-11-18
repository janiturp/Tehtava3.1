#include <iostream>
#include <string>
#include "Matkakortti.h"
using namespace std;

float Matkakortti::getArvo() const
{
	return _arvo;
}

int Matkakortti::getVuosi() const
{
	return _vuosi;
}

int Matkakortti::getKk() const
{
	return _kk;
}

int Matkakortti::getPv() const
{
	return _pv;
}

void Matkakortti::AlustaKortti()
{
	_arvo = 0;
	_vuosi = 0;
	_kk = 0;
	_pv = 0;
}

void Matkakortti::LataaArvoa(float summa)
{
	_arvo += summa;
}

void Matkakortti::LataaAikaa(int vuosi, int kk, int pv)
{
	_vuosi += vuosi;
	_kk += kk;
	_pv += pv;
}

void Matkakortti::Maksu(float summa)
{
	_arvo -= summa;
}