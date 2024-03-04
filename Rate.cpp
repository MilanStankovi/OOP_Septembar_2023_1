#include "Rate.h"
Rate::Rate() : Kupovina() {
	novac = 0;
	broj_rata = period = placene_rate = 0;
}
Rate::Rate(const char* k, int s, int b, double c, double novac, int br, int per, int pr) : Kupovina(k, s, b, c, 0) {
	this->novac = novac;
	broj_rata = br;
	period = per;
	placene_rate = pr;
}
void Rate::print() {
	Kupovina::print();
	cout << "Uplacen novac: " << novac << endl;
	cout << "Broj rata: "<< broj_rata << endl;
	cout << "Period izmedju 2 rate: " << period << endl;
	cout << "Broj placenih rata: "<< placene_rate << endl;
}
Rate::~Rate() {};