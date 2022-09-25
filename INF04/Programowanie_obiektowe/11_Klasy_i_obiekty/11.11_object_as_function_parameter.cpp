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

//Prototypy funkcji zewnętrzynych
Pracownik& pobierzDane(Pracownik&);
void wyswietlDane(const Pracownik&);

int main()
{
    //Utworzenie obiektu pracownik należącego do typu Pracownik
    Pracownik pracownik;
    //Pobranie danych pracownika z klawiatury
    pracownik = pobierzDane(pracownik);
    //Prezentacja danych pracownika na ekranie
    wyswietlDane(pracownik);
    return 0;
}

//definicja funkcji zewnętrzynych
Pracownik& pobierzDane(Pracownik& p){
    cout << "Imie: "; cin >> p.imie;
    cout << "Nazwisko: "; cin >> p.nazwisko;

    return p;
}

void wyswietlDane(const Pracownik& p){
    cout << "Dane pracownika: " << endl;
    cout << "Imię: " << p.imie << endl;
	cout << "Nazwisko: " << p.nazwisko << endl;
}