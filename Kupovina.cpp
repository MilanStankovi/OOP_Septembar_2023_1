#include "Kupovina.h"
Kupovina::Kupovina() {
	kod = 0;
	sifra = broj_dana = 0;
	cena = popust = 0;
}
Kupovina::~Kupovina() {
	delete[] kod;
}
Kupovina::Kupovina(const char* k, int s, int b, double c, double p) {
	kod = new char[strlen(k) + 1];
	strcpy(kod, k);
	sifra = s;
	broj_dana = b;
	cena = c;
	popust = p;
}
double Kupovina::ukupna_cena() {
	return (cena - cena * (popust / 100));
}
void Kupovina::print() {
	cout << "Kod proizvoda: " << kod << endl;
	cout << "Sifra proizvoda: " << sifra << endl;
	cout << "Redni broj dana: " << broj_dana << endl;
	cout << "Cena proizvoda: " << cena << endl;
	cout << "Popust: " << popust << endl;
}