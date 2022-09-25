#include<iostream>
using namespace std;

//Definicja struktury Data
struct Data{
    //Deklaracje pól - zmiennych członkowskich
    int dd, mm, rr;
};

//Definicja struktury Samochod
struct Samochod{
    //Deklaracje pól - zmiennych członkowskich
    string marka, model;
    int rok_produkcji;
    int cena;
    Data data_rejestracji;

};

// UWAGA
// Elementami członkowskimi struktur Data i Samochod są wyłącznie zmienne członkowskie.
// Struktury te nie zawierają żadnych metod ani innych składników


int main()
{
    //Deklaracje i utworzenie struktur (obiektów) samochod1, samochod2
    Samochod samochod1, samochod2;

    //Wprowadzenie wartości pól struktury samochod1 z klawiatury;
    cout << "Podaj dane samochodu:" << endl;
    cout << "Marka: "; cin >> samochod1.marka;
    cout << "Model: "; cin >> samochod1.model;
    cout << "Rok produkcji: "; cin >> samochod1.rok_produkcji;
    cout << "Cena: "; cin >> samochod1.cena;
    cout << "Data pierwszej rejestracji: " << endl;
    cout << "dzień: "; cin >> samochod1.data_rejestracji.dd;
    cout << "miesiac: "; cin >> samochod1.data_rejestracji.mm;
    cout << "rok: "; cin >> samochod1.data_rejestracji.rr;
    cout << endl;

    //Skopiowanie wszystkich zmiennych członkowskich struktury samochod1 do samochod2:
    samochod2 = samochod1;

    //Kontrolne wyświetlenie na ekranie monitora danych przechowywanych w strukturze samochod2
    cout << "Dane samochodu:" << endl;
    cout << "Marka: " << samochod2.marka << endl;
    cout << "Model: " << samochod2.model << endl;
    cout << "Rok produkcji: " << samochod2.rok_produkcji << endl;
    cout << "Cena: " << samochod2.cena << endl;
    cout << "Data pierwszej rejestracji:" << endl;
    cout << "dzień: " << samochod2.data_rejestracji.dd << endl;
    cout << "miesiac: " << samochod2.data_rejestracji.mm << endl;
    cout << "rok: " << samochod2.data_rejestracji.rr << endl;
    cout << endl;
    return 0;
}