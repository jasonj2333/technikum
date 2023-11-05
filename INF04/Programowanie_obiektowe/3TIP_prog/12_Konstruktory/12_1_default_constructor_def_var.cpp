#include<iostream>
using namespace std;

struct Data {
    int dd, mm, rr;
};

//Definicja klasy Pracownik
class Pracownik
{
public:
	string imie {"Tomek"};
	string nazwisko {"Atomek"};
	Data dataUrodzenia {1,1,2001}; 

    void wyswietlDane() {
		cout << "Dane pracownika: " << endl;
		cout << "Imię: " << imie << endl;
		cout << "Nazwisko: " << nazwisko << endl;
		cout << "Data urodzenia: " << dataUrodzenia.dd << "." << dataUrodzenia.mm << "." << dataUrodzenia.rr << endl;
	}

    // UWAGA:
    // Nalezy zwrocić uwagę, ze wewnątrz klasy Pracownik nie jest zawarta definicja zadnego konstruktora.
    // Kazda ze zmiennych członkowskich klasy Pracownik została zainicjowana ustaloną wartością domyślną.
};

int main(){
    //Utworzenie obiektu klasy Pracownik
    Pracownik pracownik; //wywołanie domyślnego konstruktora klasy Pracownik w sposob niejawny
    // UWAGA:
    // Po zarezerwowaniu przez kompilator pamięci operacyjnej dla zmiennje pracowniki, czyli po utworzeniu obiektu pracownik, następuje automatyczne wywołanie konstruktora niejawnego.
    //Zmienne członkowskie obiektu zostały zainicjowane wartościami domyślnymi określonymi w definicji klasy
    
    //Wyświetlenie wartości zmiennych członkowskich obiektu pracownik.
    pracownik.wyswietlDane();
    return 0;
}