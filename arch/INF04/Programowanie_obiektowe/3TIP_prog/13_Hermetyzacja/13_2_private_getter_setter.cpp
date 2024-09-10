#include <iostream>
using namespace std;

//Definicja klasy Prostokat
class Prostokat {
private:
	//Definicje prywatnych zmiennych członkowskich
	double bok1{ 0 };
	double bok2{ 0 };
public:
	//Prototypy konstruktorów
	Prostokat();
	Prostokat(double, double);

	//Prototypy publicznych danych dostępowych - akcesorów
	void setBok1(double); //setter zmiennej członkowskiej bok1
	double getBok1();//getter zmiennej członkowskiej bok1
	void setBok2(double); //setter zmiennej członkowskiej bok2
	double getBok2();//getter zmiennej członkowskiej bok1
};

//Definicje kontruktorów
Prostokat::Prostokat() {};
Prostokat::Prostokat(double pBok1, double pBok2) {
	bok1 = pBok1;
	bok2 = pBok2;
};

//Definicje akcesorów - setterów i getterów:
void Prostokat::setBok1(double pBok1) {
	bok1 = pBok1;
}

double Prostokat::getBok1() {
	return bok1;
}

void Prostokat::setBok2(double pBok2) {
	bok2 = pBok2;
}

double Prostokat::getBok2() {
	return bok2;
}


int main() {
	//Deklaracja i inicjalizacja zmiennych reprezentujących boki prostokąta:
	double dlugosc = 1; //Pierwszy bok
	double szerokosc = 2; //Drugi bok

	//Utworzenie obiektu prostokat.
	Prostokat prostokat;
	/*UWAGA:
	Wywołanie zdefiniowanego kontruktora domyślnego nie skutkuje inicjalizacją zmiennych
	członkowskich bok1 i bok2*/
	
	//Nadanie wartości początkowych zmiennym członkowskim bok1 i bok2:
	prostokat.setBok1(dlugosc); //Wywołanie settera setBok1() z argumentem dlugosc
	prostokat.setBok2(szerokosc); //Wywołanie settera setBok2() z argumentem szerokosc

	//Prezentacja danych prostokąta na ekranie monitora
	cout << "Długość boków prostokąta" << endl;
	cout << "Pierwszy bok: " << prostokat.getBok1() << endl; //wywołanie gettera getBok1()
	cout << "Drugi bok: " << prostokat.getBok2() << endl; //wywołanie gettera getBok2()

	return 0; 
}

