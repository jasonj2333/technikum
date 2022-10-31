#include<iostream>
using namespace std;

class Osoba{
    int id;
    string imie;
public:
    static int licznik;

    Osoba(){
        id = 0;
        imie = "";
        licznik++;
    }

    Osoba(int id, string imie) : id{id}, imie{imie}{ //class member initializer list - lista inicjalizacyjna zmiennych członkowskich
        licznik++;
    }

    Osoba(const Osoba &osoba){
        id = osoba.id;
        imie = osoba.imie;

        licznik++;
    }

    void powitanie(string gosc){
        if(imie == "") cout << "Brak danych" << endl;
        else cout << "Cześć " << gosc <<", mam na imie " << imie << endl;
    }

};

int Osoba::licznik = 0;

int main()
{
    int id;
    string imie;
    cout << "Liczba zarejestrowanych osob to: " << Osoba::licznik << endl;
    Osoba osoba1 = Osoba();
    //Osoba osoba1;

    cout << "Podaj id osoby: "; 
    cin >> id;
    cout << "Podaj imie: "; 
    cin >> imie;
    Osoba osoba2(id, imie);

    Osoba osoba3(osoba2);

    osoba1.powitanie("Jan");
    osoba2.powitanie("Jan");
    osoba3.powitanie("Jan");
    cout << "Liczba zarejestrowanych osob to: " << Osoba::licznik << endl;

    return 0;
}