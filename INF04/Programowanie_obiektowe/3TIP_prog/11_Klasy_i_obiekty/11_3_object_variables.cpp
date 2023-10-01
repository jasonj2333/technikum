#include<iostream>
using namespace std;

class Pracownik
{
public: //specyfikator dostępu
	//Deklaracja zmiennych członkowskich
	string imie;
	string nazwisko;
	//Deklaracja funkcji członkowskich o nazwach ustawImie i ustawNazwisko
	void ustawImie(string);
	void ustawNazwisko(string);
	//Definicje funkcji członkowskich
	void wyswietlDane() {
		cout << "Dane pracownika: " << imie << " " << nazwisko << endl;
	}

};

//Definicje funkcji członkowskich ustawImie() i ustawNazwisko() zadeklarowanych w klasie Pracownik
void Pracownik::ustawImie(string pImie) {
	imie = pImie;
}

void Pracownik::ustawNazwisko(string pNazwisko) {
	nazwisko = pNazwisko;
}


int main()
{
	//Utworzenie obiektu pracownik jako instacji klasy Pracownik
	Pracownik pracownik;
	//Odwołanie się do zmiennych członkowskich obiektu pracownik
	pracownik.imie = "Jan";
	pracownik.nazwisko = "Kowalski";
	//Wywołanie funkcji członkowskiej (metody) należącej do obiektu pracownik
	pracownik.wyswietlDane();

	//Wywołanie funkcji członwskich ustawImie() i ustawNazwisko()
	pracownik.ustawImie("Adam");
	pracownik.ustawNazwisko("Nowak");
	//Wywołanie funkcji członkowskiej (metody) należącej do obiektu pracownik
	pracownik.wyswietlDane();
    return 0;
}