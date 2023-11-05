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

    void wyswietlDane() {
		cout << "Dane pracownika: " << endl;
		cout << "Imię: " << imie << endl;
		cout << "Nazwisko: " << nazwisko << endl;
		cout << "Data urodzenia: " << dataUrodzenia.dd << "." << dataUrodzenia.mm << "." << dataUrodzenia.rr << endl;
	}

    // UWAGA:
    // Nalezy zwrocić uwagę, ze wewnątrz klasy Pracownik nie jest zawarta definicja zadnego konstruktora.
    // Ponadto zadna ze zmiennych członkowskich klasy Pracownik nie została zainicjowana.
};

int main(){
    //Utworzenie obiektu klasy Pracownik
    Pracownik pracownik; //wywołanie domyślnego konstruktora klasy Pracownik w sposob niejawny
    // UWAGA:
    // Pomimo, ze w klasie Pracownik nie zdefiniowano zadnego konstruktora, to po utworzeniu obiektu  pracownik - czyli zaalokowaniu
    // dla niego niezbednej pamięci operacyjnej przez kompilator - następuje automatyczne wywołanie konstruktora domyślnego bezparametrowego - konstruktora niejawnego.
    
    //Wyświetlenie wartości zmiennych członkowskich obiektu pracownik.
    pracownik.wyswietlDane();
    return 0;
}