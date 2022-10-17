#include<iostream>
using namespace std;

//Definicja abstrakcyjnej klasy bazowej Osoba
class Osoba {
public:
    //Deklaracje zmiennych członkowskich
    string imie, nazwisko;
    /*UWAGA:
    Klasa abstrakcyjna może zawierać deklaracje zwyklech - instancyjnych zmiennych i metod członkowskich.*/

    //Deklaracja (prototyp) metody abstrakcyjnej - funkcji czysto wirtualnej
    virtual void wyswietlDane() = 0;
};

//Definicja klasy pochodnej Pracownik
class Pracownik : public Osoba {
public: 
    string stanowisko;
	//Definicja metody abstracyjnej zadeklarowanej w bazowej klasie abstrakcyjnej:
	void wyswietlDane() {
		cout << imie << " " << nazwisko << ", stanowisko: " << stanowisko << endl;
	}
    /*UWAGA:
    Metoda abstracyjna zadeklarowana w bazowej klasie abstrakcyjnej powinna zostać zdefiniowana w jej klasie 
    pochodnej.*/
};

//Definicja klasy pochodnej Uczen
class Uczen : public Osoba {
public:
    string klasa;
    //Definicja metody abstracyjnej zadeklarowanej w bazowej klasie abstrakcyjnej:
    void wyswietlDane() {
        cout << imie << " " << nazwisko << ", klasa: " << klasa << endl;
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