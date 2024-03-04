#pragma once
#include "Kupovina.h"
class Rate : public Kupovina
{
	double novac;
	int broj_rata;
	int period;
	int placene_rate;
public:
	Rate();
	Rate(const char* k, int s, int b, double c, double novac, int br, int per, int pr);
	~Rate();
	void print();
	double vrati_dug() {
		return cena - novac;
	};
};

