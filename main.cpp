#include "Rate.h"
#include "Kolekcija.h"

void main() {
	Kolekcija* k = new Kolekcija(6);
	k->kupi(new Kupovina("112e", 0,21,500.99,20));
	k->kupi(new Rate("172e", 1, 7, 540.99, 300, 3, 2, 1));
	k->kupi(new Kupovina("612e", 10, 3, 1500.99, 15));
	k->kupi(new Rate("112B", 3, 2, 8500.99, 2000, 3, 2, 1));
	k->kupi(new Rate("112F", 4, 1, 50.99, 20, 3, 2, 1));
	k->kupi(new Rate("112Z", 5, 20, 501.99, 200, 3, 2, 1));
	k->spisak();
	k->vrati("112B");
	cout << endl;
	k->spisak();
	//Kupovina* min;
	//Kupovina* max;
	//k->najvica_najmanja(max, min);
	cout << "----------------" << endl;
	//max->print();
	//min->print();
	delete k;
}