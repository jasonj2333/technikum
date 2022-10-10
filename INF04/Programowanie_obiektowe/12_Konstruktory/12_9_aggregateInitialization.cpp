#include<iostream>
using namespace std;

struct Data {
    int dd, mm, rr;
};

//Definicja klasy Pracownik
class Pracownik
{
public:
	string imie;
	string nazwisko;
	Data dataUrodzenia; 

    // UWAGA:
    // Klasa pracownik nie zawiera żadnego konstruktura zdefiniowanego przez programistę

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
    //Utworzenie obiektu i inicjalizacja agregacyjna 
    Pracownik pracownik2 = {"Anna", "Nowak", {4,5,2005}}; 
    //UWAGA
    //Wszystkie zmiene członkowskie obiektu pracownik1 zainicjowano z wykorzystaniem inicjalizacji kopiującej z listą inicjalizacyjną

    //Utworzenie obiketu i inicjalizacja agregacyjna 
    Pracownik pracownik3{"Konrad", "Kowalski", {12,7,1999}}; 
    //UWAGA
    //Wszystkie zmiene członkowskie obiektu pracownik1 zainicjowano z wykorzystaniem inicjalizacji bezpośredniej z listą inicjalizacyjną
    
    //Wyświetlenie wartości zmiennych członkowskich obiektu pracownik.
    pracownik3.wyswietlDane();
    ą
    return 0;
}