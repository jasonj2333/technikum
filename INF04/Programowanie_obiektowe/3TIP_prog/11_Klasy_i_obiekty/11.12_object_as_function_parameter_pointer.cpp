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
Pracownik *pobierzDane(Pracownik*);
void wyswietlDane(const Pracownik*);

int main()
{
    //Utworzenie obiektu wskazywanego przez wskaźnik w_pracownik jako instacji klasy Pracownikj
    Pracownik *w_pracownik = new Pracownik();
    //Pobranie danych pracownika z klawiatury
    w_pracownik = pobierzDane(w_pracownik);
    //Prezentacja danych pracownika na ekranie
    wyswietlDane(w_pracownik);
    return 0;
}

//definicja funkcji zewnętrzynych
Pracownik* pobierzDane(Pracownik *w_p){
    cout << "Imie: "; cin >> w_p->imie;
    cout << "Nazwisko: "; cin >> w_p->nazwisko;

    return w_p;
}

void wyswietlDane(const Pracownik *w_p){
    cout << "Dane pracownika: " << endl;
    cout << "Imię: " << w_p->imie << endl;
	cout << "Nazwisko: " << w_p->nazwisko << endl;
}