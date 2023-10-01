#include<iostream>
using namespace std;

//Definicja C-struktury Data
struct Data {
    //Deklaracja pól C-struktury
    int dd, mm, rr;
};

//Definicja klasy Pracownik
class Pracownik
{
public:
	//Deklaracja zmiennych członkowskich połączona z ich inicjalizacją zerową
	int id{};
	string imie {};
	string nazwisko {};
	Data data_urodzenia{}; //Zmienna członkowska data_urodzenia należy do typu strukturowego Data
};

int main()
{
	//Utworzenie obiektu pracownik jako instacji klasy Pracownik
	Pracownik pracownik {1, "Tomek", "Atomek", Data{1,1,2001}};
	//Lub
	Pracownik pracownik1;
	pracownik1.id = 2;
	pracownik1.imie = "Zofia";
	pracownik1.nazwisko = "Kowalska";
	pracownik1.data_urodzenia.dd = 12;
	pracownik1.data_urodzenia.mm = 7;
	pracownik1.data_urodzenia.rr = 1996;

	//Wyświetlenie kontrolne bieżących wartości zmiennych członkowskich obiektu pracownik
	cout << "Numer identyfikacyjny: " << pracownik.id << endl;
	cout << "Imię: " << pracownik.imie << endl;
	cout << "Nazwisko: " << pracownik.nazwisko << endl;
	cout << "Data urodzenia: " << endl;
	cout << "dzień: " << pracownik.data_urodzenia.dd << endl;
	cout << "miesiąc: " << pracownik.data_urodzenia.mm << endl;
	cout << "rok: " << pracownik.data_urodzenia.rr << endl;

	//Wyświetlenie kontrolne bieżących wartości zmiennych członkowskich obiektu pracownik
	cout << "Numer identyfikacyjny: " << pracownik1.id << endl;
	cout << "Imię: " << pracownik1.imie << endl;
	cout << "Nazwisko: " << pracownik1.nazwisko << endl;
	cout << "Data urodzenia: " << endl;
	cout << "dzień: " << pracownik1.data_urodzenia.dd << endl;
	cout << "miesiąc: " << pracownik1.data_urodzenia.mm << endl;
	cout << "rok: " << pracownik1.data_urodzenia.rr << endl;
    return 0;
}