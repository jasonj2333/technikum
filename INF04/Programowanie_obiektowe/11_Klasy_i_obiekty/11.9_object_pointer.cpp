#include<iostream>
using namespace std;

class Pracownik{
public:
    string imie;
    string nazwisko;
    void wyswietlDane() {
		cout << "Dane pracownika: " << endl;
		cout << "Imię: " << imie << endl;
		cout << "Nazwisko: " << nazwisko << endl;
	}
};

int main()
{
    //Utworzenie obiektu pracownik należącego do typu Pracownik
    Pracownik pracownik;
    //Deklaracja i inicjalizacja zmiennej wskaźnikowej w_pracownik wskazującej na dowolny obiekt należący do typu Pracownik
    Pracownik *w_pracownik = nullptr;
    //Przypisanie wskaźnikowi adresu obiektu pracownik
    w_pracownik = &pracownik;
    //Nadanie wartości zmiennym członkowskim obiektu pracownik
    w_pracownik->imie = "Jan";
    w_pracownik->nazwisko= "Kowalski";
    //Prezentacja danych zapisanych w zmiennych członkowskich obiektu pracownik na ekranie monitora
    w_pracownik->wyswietlDane();
    return 0;
}