#include<iostream>
using namespace std;

struct Data {
    int dd, mm, rr;
};

//Definicja klasy Pracownik
class Pracownik
{
	string imie;
	string nazwisko;
	Data dataUrodzenia; 
public:
    //Definicja konstruktora domyślnego z listą inicjalizatorów zmiennych członkowskich
    Pracownik() : 
        imie{"Tomek"},
        nazwisko{"Atomek"},
        dataUrodzenia{1,1,2001}
    {
        cout << "Komunikat kontrolny: wywołano konstruktor domyślny";
    }
    //Definicja konstruktora parametrycznego z listą inicjalizatorów zmiennych członkowskich
    Pracownik(string pImie, string pNazwisko, Data pDataUrodzenia) :
        imie{pImie},
        nazwisko{pNazwisko},
        dataUrodzenia{pDataUrodzenia}
    {
        cout << "Komunikat kontrolny: wywołano konstruktor parametryczny";
    }


    void wyswietlDane() {
		cout << "Dane pracownika: " << endl;
		cout << "Imię: " << imie << endl;
		cout << "Nazwisko: " << nazwisko << endl;
		cout << "Data urodzenia: " << dataUrodzenia.dd << "." << dataUrodzenia.mm << "." << dataUrodzenia.rr << endl;
	}

};

int main(){
    //Utworzenie obiektu klasy Pracownik
    Pracownik pracownik; 
    Pracownik pracownik2("Anna", "Nowak", {4,5,2005}); //niejawne wywołanie kontruktora
    Pracownik pracownik3 = Pracownik("Konrad", "Kowalski", {12,7,1999}); //jawne wywołanie kontruktora

    //Wyświetlenie wartości zmiennych członkowskich obiektu pracownik.
    pracownik3.wyswietlDane();
    return 0;
}