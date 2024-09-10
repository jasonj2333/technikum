#include <iostream>
using namespace std;

//Definicja klasy Prostokat
class Prostokat {
public:
	//Definicje zmiennych członkowskich
	double bok1{ 0 };
	double bok2{ 0 };

	//Prototypy konstruktorów
	Prostokat();
	Prostokat(double, double);

	//Prototyp metody dostępowej
	void wyswietlBoki();

};

//Definicje kontruktorów
Prostokat::Prostokat() {};
Prostokat::Prostokat(double pBok1, double pBok2) {
	bok1 = pBok1;
	bok2 = pBok2;
};

//Definicja metody wyswietlBoki()
void Prostokat::wyswietlBoki() {
	cout << "Komunikat kontrolny - wywołanie metody wyswietlBoki()" << endl;
	cout << "Pierwszy bok: " << bok1 << endl;
	cout << "Drugi bok: " << bok2 << endl;
}

//UWAGA:
//Powiązanie zmiennych członkowskich (danych) bok1 i bok2 z funkcją członkowską wyswietlBoki() następuję już 
//na poziomie definicji tej metody

void wyswietlBoki(double b1, double b2) {
	cout << "Komunikat kontrolny - wywołanie funkcji zewnętrznej wyswietlBoki()" << endl;
	cout << "Pierwszy bok: " << b1 << endl;
	cout << "Drugi bok: " << b2 << endl;
}

//UWAGA:
//Funkcja wyswietlBoki() została zdefiniowana w przestrzeni globalnej - na zewnątrz klasy Prostokat.
//Jest zatem ona w pełni niezależna od klasy Prostokat

int main() {
	//Deklaracja i inicjalizacja zmiennych reprezentujących boki prostokąta:
	double dlugosc = 1; //Pierwszy bok
	double szerokosc = 2; //Drugi bok
	
	//Wywołanie funkcji zewnętrznej wyswietlBoki():
	wyswietlBoki(dlugosc, szerokosc);
	cout << endl;

	//Utworzenie obiektu prostokat.
	Prostokat prostokat(1, 2);
	//Wywołanie funkcji członkowskiej wyswietlBoki();
	prostokat.wyswietlBoki();


	return 0; 
}

