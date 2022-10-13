#include<iostream>
using namespace std;

//Definicja klasy Pracownik
class Pracownik {
public: 
	//Deklaracje zmiennych członkowskich
	string imie, nazwisko, stanowisko;

	//Deklaracje przeciążonych metod zwrocDane()
	string zwrocDane();
	void zwrocDane(string&, string&, string&);
	/*UWAGA:
	Funkcje członkowskie zadeklarowane powyżej mają tą samą nazwę, ale różnią się parametrami
	(liczbą i/lub typem) i/lub typem zwracanej wartości.*/
};

//Definicje funkcji członkowskich zwrocDane() z klasy Pracownik
string Pracownik::zwrocDane() {
	return imie + " " + nazwisko + ", stanowisko: " + stanowisko;
}

void Pracownik::zwrocDane(string &pImie, string &pNazwisko, string &pStanowisko) {
	pImie = imie;
	pNazwisko = nazwisko;
	pStanowisko = stanowisko;
}

int main()
{
	//Utworzenie obiektu pracownik jako instacji klasy Pracownik
	Pracownik pracownik;
	//Nadanie wartości zmiennym członkowskim obiektu pracownik
	pracownik.imie = "Jan"; 
	pracownik.nazwisko = "Kowalski"; 
	pracownik.stanowisko = "nauczyciel"; 

	//Wywołanie przeciążonej funkcji członkowskiej (metody) zwrocDane()
	cout << "Dane pracownika: " << pracownik.zwrocDane() << endl;
	/*UWAGA:
	Kompilator już na etapie kompilacji zdecyduje, która z funkcji zwrocDane() zdefiniowanych w klasie
	Pracownik zostanie w tym miejscu wywołana*/

	string imie, nazwisko, stanowisko; //zmienne pomocnicze
	pracownik.zwrocDane(imie, nazwisko, stanowisko);
	/*UWAGA:
	Kompilator już na etapie kompilacji zdecyduje, która z funkcji zwrocDane() zdefiniowanych w klasie
	Pracownik zostanie w tym miejscu wywołana*/

	cout << "Dane pracownika: ";
	cout << imie + " " + nazwisko + ", stanowisko: " + stanowisko;
    return 0;
}