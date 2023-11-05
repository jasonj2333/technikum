#include<iostream>
using namespace std;

int main()
{
    //Deklaracja i inicjalizacja zmiennej bok1 typu double
    double bok1 = 1;
    //Deklaracja zmiennej wskaźnikowej (wskaźnika) w_bok1 na zmienną typu double
    double* w_bok1;
    //Przypisane wskaźnikowi w_bok1 adresu zmiennej bok1
    w_bok1 = &bok1;

    //Deklaracja i inicjalizacja zmiennej bok1 typu double
    double bok2 = 1;
    //Deklaracja zmiennej wskaźnikowej (wskaźnika) w_bok2 na zmienną typu double
    double* w_bok2;
    //Przypisane wskaźnikowi w_bok2 adresu zmiennej bok2
    w_bok2 = &bok2;

    //Deklaracja zmiennej pole typu double
    double pole;
    //Deklaracja i inicjalizacja wskaźnika w_pole
    double* w_pole = &pole;
    /*UWAGA:
    We wskaźniku w_pole zostaje zapamiętany adres zmiennej pole typu double*/

    //Obliczanie pola prostokąta - wykorzystanie wskaźników i operatora dereferencji
    *w_pole = *w_bok1 * *w_bok2; //równoważne pole = bok1 * bok2

    //Deklaracja zmiennej obwod typu double, deklaracja i inicjalizacj wskaźnika w_obwod
    double obwod;
    double* w_obwod = &obwod;
    /*UWAGA:
    We wskaźniku w_obwod pamiętany jest adres zmiennej obwod typu double*/

    //Obliczanie obwodu prostokąta - wykorzystanie wskaźników i operatora dereferencji
    *w_obwod = 2 * (*w_bok1)  + 2 * (*w_bok2); //równoważne obwod = 2 * bok1 + 2 * bok2

    //Prezentacja wyników - wykorzystanie wskaźników
    cout << "Wyniki: " << endl;
    cout << "Pole: " << *w_pole << endl;
    cout << "Obwód: " << *w_obwod << endl;

    return 0;
}