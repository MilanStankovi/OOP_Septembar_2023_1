#pragma once
#include <iostream>
using namespace std;
class Kupovina
{
protected:
	char* kod;
	int sifra;
	int broj_dana;
	double cena;
	double popust;
public:
	Kupovina();
	virtual ~Kupovina();
	Kupovina(const char* k, int s, int b, double c, double p);
	virtual double ukupna_cena();
	char* vrati_kod() { return kod; };
	virtual void print();
	int vrati_dane() { return broj_dana; };
	virtual double vrati_dug() { return 0; };
};

