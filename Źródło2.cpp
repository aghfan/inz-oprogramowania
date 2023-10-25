#include <iostream>
using namespace std;

class Produkt {
public:
	string nazwa;
	float cena;

	Produkt(string nazwa = "", float cena = 0) {
		this->nazwa = nazwa;
		this->cena = cena;
	}

	float getPrice(){
		return cena;
	}
};


int main() {
	Produkt produkty[10];
	Produkt sort[10];

	for (int i = 0; i < 10; i++) {
		string nazwa;
		float cena;
		cin >> nazwa;
		cin >> cena;
		produkty[i] = Produkt(nazwa, cena);
	}

	float price = 10000;

	for (int i = 0; i < 10; i++) {
		if (produkty[i].getPrice() < price) {
			price = produkty[i].getPrice();
		}

	}

	return 0;
}