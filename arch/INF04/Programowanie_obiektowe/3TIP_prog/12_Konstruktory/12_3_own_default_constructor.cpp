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

    //Definicja konstruktora domyślnego
    Pracownik(){
        imie = "Tomek";
        nazwisko = "Atomek";
        dataUrodzenia = {1,1,2001};
    }
    // UWAGA:
    // W konstruktorze domyślnym zdefiniowanym samodzielnie przez programistę zainicjowano zadanymi wartościami domyślnymi wszystkie zmienne członkowskie klasy Pracownik. Nie jest to jednak wymagane.
    // W oglności ciało konstruktura domyślnego moze być puste.

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
    // UWAGA:
    // Po utworzeniu obiektu pracownik przez kompilator następuje automatyczne wywołanie konstruktora domyślnego zdefiniowanego przez programistę.
    // Wszystkie zmienne członkowskie obiektu pracownik zostały zainicjowane wartościami domyślnymi określonymi w definicji konstruktora.
    
    //Wyświetlenie wartości zmiennych członkowskich obiektu pracownik.
    pracownik.wyswietlDane();
    return 0;
}