#include "Kolekcija.h"
Kolekcija::Kolekcija() {
	n = 0;
	max_broj = 0;
	niz = 0;
}
Kolekcija::Kolekcija(int x) {
	n = 0;
	max_broj = x;
	niz = new Kupovina * [x];
	for (int i = 0; i < max_broj; i++) {
		niz[i] = 0;
	}
}
Kolekcija::~Kolekcija() {
	for (int i = 0; i < n; i++) {
		if (niz[i] != 0) {
			delete niz[i];
			niz[i] = 0;
		}
	}
	delete[] niz;
	niz = 0;
}
void Kolekcija::vrati(const char* c) {
	int x = 0;
	for (int i = 0; i < n; i++) {
		if (strcmp(niz[i]->vrati_kod(),c)) {
			x = 1;
			for (int j = i; j < n; j++) {
				niz[j] = niz[j + 1];
			}
			delete niz[n-1];
			niz[n] = 0;
			n--;
		}
	}
	if (x == 0) {
		cout << "Proizvod nije pronadjen" << endl;
	}
}
void Kolekcija::kupi(Kupovina* k) {
	if (n <= max_broj) {
		niz[n] = k;
		n++;
	}
	else {
		cout << "Nema mesta u kolekciji" << endl;
	}
}
void Kolekcija::spisak() {
	for (int i = 0; i < n; i++) {
		niz[i]->print();
	}
}
void Kolekcija::najvica_najmanja(Kupovina* max, Kupovina* min) {
	int manji, veci;
	manji = veci = 0;
	for (int i = 0; i < n; i++) {
		if (niz[manji] > niz[i]) {
			manji = i;
		}
		if (niz[veci] < niz[i]) {
			veci = i;
		}
	}
	max = niz[veci];
	min = niz[manji];
}
int Kolekcija::broj_kupovina(int d, int g) {
	int brojac = 0;
	for (int i = 0; i < n; i++) {
		if (niz[i]->vrati_dane() >= d && niz[i]->vrati_dane() <= g) {
			brojac++;
		}
	}
	return brojac;
}
double Kolekcija::ukupna_cena(int d, int g) {
	double brojac = 0;
	for (int i = 0; i < n; i++) {
		if (niz[i]->vrati_dane() >= d && niz[i]->vrati_dane() <= g) {
			brojac += niz[i]->ukupna_cena();
		}
	}
	return brojac;
}
double Kolekcija::dugovanja(int d, int g) {
	double brojac = 0;
	for (int i = 0; i < n; i++) {
		if (niz[i]->vrati_dane() >= d && niz[i]->vrati_dane() <= g) {
			brojac += niz[i]->vrati_dug();
		}
	}
	return brojac;
}
Kupovina* Kolekcija::operator[](int i) {
	return niz[i];
}