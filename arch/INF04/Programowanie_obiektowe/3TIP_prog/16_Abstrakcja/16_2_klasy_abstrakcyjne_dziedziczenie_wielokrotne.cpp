#include<iostream>
using namespace std;

//Definicja abstrakcyjnej klasy bazowej Osoba
class Osoba {
public:
    //Deklaracje zmiennych członkowskich
    string imie, nazwisko;

    //Deklaracja (prototyp) metody abstrakcyjnej - funkcji czysto wirtualnej
    virtual void wyswietlDane() = 0;
};

//Definicja abstrakcyjnej klasy bazowej Stanowisko
class Stanowisko {
public:
    string stanowisko;

    //Deklaracja (prototyp) metody abstrakcyjnej - funkcji czysto wirtualnej
    virtual void wyswietlDane() = 0;
};

//Definicja abstrakcyjnej klasy bazowej Klasa
class Klasa {
public:
    string klasa;

    //Deklaracja (prototyp) metody abstrakcyjnej - funkcji czysto wirtualnej
    virtual void wyswietlDane() = 0;
};

//Definicja klasy pochodnej Pracownik
class Pracownik : public Osoba, public Stanowisko {
public: 
	//Definicja metody abstracyjnej:
	void wyswietlDane() {
		cout << imie << " " << nazwisko << ", stanowisko: " << stanowisko << endl;
	}
    /*UWAGA:
    Metoda wyswietlDane() została zadeklarowana w klasach bazowych klasy Pracownik
    tj. klasach Osoba i Stanowisko.*/
};

//Definicja klasy pochodnej Uczen
class Uczen : public Osoba, public Klasa {
public:
    //Definicja metody abstracyjnej:
    void wyswietlDane() {
        cout << imie << " " << nazwisko << ", klasa: " << klasa << endl;
    }
    /*UWAGA:
    Metoda wyswietlDane() została zadeklarowana w klasach bazowych klasy Uczen
    tj. klasach Osoba i Klasa.*/
};

int main()
{
    //Utworzenie obiektu pracownik jako instacji klasy pochodnej Pracownik
    Pracownik pracownik;

    //Nadanie wartości zmiennym członkowskim obiektu pracownik
    pracownik.imie = "Jan"; 
    pracownik.nazwisko = "Kowalski";
    pracownik.stanowisko = "nauczyciel";
    cout << "Dane pracownika: " << endl;
    //Wywołanie funkcji wyswietlDane() zdefiniowanej w klasie pochodnej Pracownik
    pracownik.wyswietlDane();

    //Utworzenie obiektu uczen jako instacji klasy pochodnej Uczen
    Uczen uczen;

    //Nadanie wartości zmiennym członkowskim obiektu uczen
    uczen.imie = "Maria";
    uczen.nazwisko = "Nowak";
    uczen.klasa = "4A";
    cout << "Dane ucznia: " << endl;
    //Wywołanie funkcji wyswietlDane() zdefiniowanej w klasie pochodnej Uczen
    uczen.wyswietlDane();

    return 0;
}