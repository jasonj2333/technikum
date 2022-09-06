#include<iostream>
#include<cmath>
using namespace std;

//Definicja szablonu funkcji srednia()
template <typename T> //Deklaracja parametru T szablonu
T srednia(T wyklad, T cwiczenia, T laboratorium, T seminarium) {
    return (wyklad + cwiczenia + laboratorium + seminarium) / 4;
}

//Definicja specjalizowanej wersji szablonu funkcji srednia() dla typu danych double:
template <> 
double srednia(
    double wyklad,
    double cwiczenia,
    double laboratorium,
    double seminarium
    ){
    return ( round(wyklad) + round(cwiczenia) + round(laboratorium) + round(seminarium) ) / 4;
}

//Definicja specjalizowanej wersji szablonu funkcji srednia() dla typu danych float:
template <>
float srednia(
    float wyklad,
    float cwiczenia,
    float laboratorium,
    float seminarium
) {
    return (round(wyklad) + round(cwiczenia) + round(laboratorium) + round(seminarium)) / 4;
}

//UWAGA:
//Specjalizacje szablonu funkcji srednia() dla typów danych double i float zawierają inny kod źródłowy niż sam szablon,
//czyli funkcja uogólniona. Innymi słowy funkcja uogólniona i funkcje specjalizowane różnią się od siebie implementacją.

int main()
{
    //Wywołanie funkcji szablonowej srednia()
    cout << "Średnia z ocen: " << srednia(3, 4, 3, 4) << endl;
    /*UWAGA:
    Kompilator, napotykając wywołanie funkcji szablonowej srednia() dla argumentów typu int, najpierw sprawdza czy istnieje
    wersja specjalizowana szablonu tej funkcji dla tego typu danych.
    Jeśli kompilator nie znajdzie wersji specjalizowanej funkcji dla typu danych int, konkretyzuje szablon funkcji (funkcje uogólnioną)
    dla tego typu danych.*/

    //Ponowne wywołanie funkcji szabonowej srednia()
    cout << "Średnia z ocen: " << srednia<double>(3, 4, 3, 4) << endl;
    /*UWAGA:
    W wywołaniu funkcji szablonowej srednia() wyszczegolniono w jawny sposob argument szablonowy double.
    Zatem uogólniony typ danych T został w jawny sposób skonkretyzowany jako double.
    Typ argumentów z pozostałymi danymi - int, ma niżny priorytet od typu argumentu szablonowego.
    Kompilator w pierwszej kolejności poszukuje wersji specjalizowanej szablonu funkcji srednia() dla danych typu double.
    Funkcja specjalizowana dla typu double istnieje - zatem właśnie ona zostanie wykonana.*/


    //Ponowne wywołanie funkcji szabonowej srednia()
    cout << "Średnia z ocen: " << srednia(3.0, 4.0, 3.0, 4.0) << endl;
    /*UWAGA:
    Kompilator w pierwszej kolejności poszukuje wersji specjalizowanej szablonu funkcji srednia() dla danych typu double, 
    co wynika z typu, do którego należą argumenty wywołania funkcji.
    Kompilator znajduje wersję specjalizowaną szablonu funkcji średnia dla typu danych double i ją wykonuje. */

    return 0;
}