#include<iostream>
using namespace std;

//Definicja interfesu Info
class Info {
public:
    //Deklaracja (prototyp) metody abstrakcyjnej 
    virtual void wyswietlDane() = 0;
};
//UWAGA:
//Klasa abstrakcyjna - interfejs Info zawiera wyłączanie deklaracje metody abstrakcyjnej wyswietlDane(),
//natomiast nie zawiera definicji, żadnych innych zmiennych ani funkcj członkowskich.

//Definicja klasy bazowej Osoba
class Osoba {
public:
    //Deklaracje zmiennych członkowskich
    string imie, nazwisko, szkola;

};


//Definicja klasy pochodnej Pracownik
class Pracownik : public Info, public Osoba {
    /*UWAGA:
    Klasa pochodna Pracownik dziedziczy po interfejsie Info oraz klasie Osoba. Jest to dziedziczenie wielokrotne.*/
public: 
    //Deklaracja zmiennych członkowskich
    string stanowisko;
	//Definicja metody wyswietlDane() zadeklarowanej w interfejsie Info jako metody abstrakcyjnej:
	void wyswietlDane() {
        cout << "Imię: " << this->imie << endl;
        cout << "Nazwisko: " << this->nazwisko << endl;
        cout << "Stanowisko: " << this->stanowisko << endl;
	}
};

//Definicja klasy pochodnej Uczen
class Uczen : public Info, public Osoba {
    /*UWAGA:
    Klasa pochodna Uczen dziedziczy po interfejsie Info oraz klasie Osoba.*/
public:
    //Deklaracja zmiennych członkowskich
    string klasa;
    //Definicja metody wyswietlDane() zadeklarowanej w interfejsie Info jako metody abstrakcyjnej:
    void wyswietlDane() {
        cout << "Imię: " << this->imie << endl;
        cout << "Nazwisko: " << this->nazwisko << endl;
        cout << "Klasa: " << this->klasa << endl;
    }
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
    cout << endl;

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