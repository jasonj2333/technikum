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
    //Deklaracje i utworzenie struktur (obiektu) samochod1
    Samochod samochod1;

    //Deklaracja i inicjalizacja wskaźnika wSamochod1;
    Samochod *wSamochod1 = &samochod1;
    // UWAGA
    // Wskaźnikowi wSamochod1 przypisano wartość początkową równą adresowi struktury (obiektu) samochod1.
    // Tym samym wskaźnik wSamochod1 wskazuje na tą strukturę

    //Wprowadzenie wartości pól struktury samochod1 z klawiatury;
    cout << "Podaj dane samochodu:" << endl;
    cout << "Marka: "; cin >> wSamochod1->marka;
    cout << "Model: "; cin >> wSamochod1->model;
    cout << "Rok produkcji: "; cin >> wSamochod1->rok_produkcji;
    cout << "Cena: "; cin >> wSamochod1->cena;
    cout << "Data pierwszej rejestracji: " << endl;
    cout << "dzień: "; cin >> wSamochod1->data_rejestracji.dd;
    cout << "miesiac: "; cin >> wSamochod1->data_rejestracji.mm;
    cout << "rok: "; cin >> wSamochod1->data_rejestracji.rr;
    cout << endl;

    // UWAGA:
    // Dostęp do zmiennych członkowskich (pól) struktury (obiektu) samochod1 został zrealizowany przy użyciu
    // wskaźnika wSamochod1 oraz operatora strzałkowego  ->

    //Utworzenie struktury typu Samochod, dla której pamięć operacyjna została zaalokowana w sposób dynamiczny
    Samochod *wSamochod2 = new Samochod;
    // UWAGA
    // Wskaźnik wSamochod2 wskazuje na strukturę typu Samochod, dla której pamięć została zaalokowana dynamicznie. Struktura wskazywana jest przez wskaźnik wSamochod2;

    // Skopiowanie wartości przechowywanych w polach struktury (obiektu) samochod1 do struktury - obiektu wskazywanego przez wskaźnik wSamochod2;
    *wSamochod2 = *wSamochod1;
    // UWAGA
    // Dostęp do obu struktur zrealizowano za pomocą operatora dereferencji * oraz wskaźników wSamochod1 i wSamochod2.


    //Kontrolne wyświetlenie na ekranie monitora danych przechowywanych w strukturze wskazywanej przez wskaźnik wSamochod2
    cout << "Dane samochodu:" << endl;
    cout << "Marka: " << wSamochod2->marka << endl;
    cout << "Model: " << wSamochod2->model << endl;
    cout << "Rok produkcji: " << wSamochod2->rok_produkcji << endl;
    cout << "Cena: " << wSamochod2->cena << endl;
    cout << "Data pierwszej rejestracji:" << endl;
    cout << "dzień: " << wSamochod2->data_rejestracji.dd << endl;
    cout << "miesiac: " << wSamochod2->data_rejestracji.mm << endl;
    cout << "rok: " << wSamochod2->data_rejestracji.rr << endl;
    cout << endl;

    delete wSamochod2;
    return 0;
}