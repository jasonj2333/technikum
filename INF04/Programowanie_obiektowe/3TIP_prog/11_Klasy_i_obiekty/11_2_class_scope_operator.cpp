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
	imie = pNazwisko;
}


int main()
{

    return 0;
}