#pragma once
#include "Rate.h"
class Kolekcija
{
	Kupovina** niz;
	int n;
	int max_broj;
public:
	Kolekcija();
	Kolekcija(int x);
	~Kolekcija();
	void vrati(const char* c);
	void kupi(Kupovina* k);
	void spisak();
	void najvica_najmanja(Kupovina* max, Kupovina* min);
	int broj_kupovina(int d, int g);
	double ukupna_cena(int d,int g);
	double dugovanja(int d, int g);
	Kupovina* operator[](int i);
};

