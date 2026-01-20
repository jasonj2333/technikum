#include <iostream>

using namespace std;

struct Pracownik; //Deklaracja

int main()
{
	//Zlozony typ danych definiowany przez programiste.
	//Posiada pola różnych typow, w typow zlozonych - sa one domyslnie publiczne
	//Nie powinna posiadac funkcji czlonkowskich (metod)
	struct Data {
		unsigned int dd, mm, rr;
	};
	
	struct Pracownik { //Definicja
		//Deklaracja pól (zmiennych członkowskich)
		string imie;
		string nazwisko;
		int nr_ewid;
		Data data_zatrudnienia;
	};
	
	Pracownik pracownik1 = {}; //Inicjalizacja zerowa
	pracownik1.imie = "Tomek";
	pracownik1.nazwisko = "Atomek";
	pracownik1.nr_ewid = 123;
	pracownik1.data_zatrudnienia.dd = 17;
	pracownik1.data_zatrudnienia.mm = 1;
	pracownik1.data_zatrudnienia.rr = 2026;

	cout << "Informacje o pracowniku" << endl;
	cout << "Imie: " << pracownik1.imie << endl;
	cout << "Nazwisko: " << pracownik1.nazwisko << endl;
	cout << "Numer ewidencyjny: " << pracownik1.nr_ewid << endl;
	cout << "Data zatrudnienia: " << pracownik1.data_zatrudnienia.dd << "." << pracownik1.data_zatrudnienia.mm << "." << pracownik1.data_zatrudnienia.rr << endl;

	Pracownik pracownik2 = { "Anna", "Kowalska", 46, {20,1,2026} };
	cout << "Informacje o pracowniku" << endl;
	cout << "Imie: " << pracownik2.imie << endl;
	cout << "Nazwisko: " << pracownik2.nazwisko << endl;
	cout << "Numer ewidencyjny: " << pracownik2.nr_ewid << endl;
	cout << "Data zatrudnienia: " << pracownik1.data_zatrudnienia.dd << "." << pracownik1.data_zatrudnienia.mm << "." << pracownik1.data_zatrudnienia.rr << endl;

	Pracownik pracownik3 { "Wojciech", "Zareba", 234, {20,1,2025} };
	cout << "Informacje o pracowniku" << endl;
	cout << "Imie: " << pracownik3.imie << endl;
	cout << "Nazwisko: " << pracownik3.nazwisko << endl;
	cout << "Numer ewidencyjny: " << pracownik3.nr_ewid << endl;
	cout << "Data zatrudnienia: " << pracownik1.data_zatrudnienia.dd << "." << pracownik1.data_zatrudnienia.mm << "." << pracownik1.data_zatrudnienia.rr << endl;
	
}



