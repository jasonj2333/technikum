#include<iostream>
using namespace std;

// - typy predefiniowane
// - typy zdefiniowane przez użytkownika

// Typy wbudowane
// - typy całkowite
// - typy zmiennoprzecinkowe
// - typ znakowy
// - typ logiczny
// - typ void

int main()
{
    int zmienna1 = 1; //C-inicjalizacja, inicjalizacja kopiująca
    int zmienna2 (zmienna1 + 1); //inicjalizacja bezpośrednia lub konstruktorowa
    
    //inicjalizacja jednolita lub klamrowa
    int zmienna3 {}; //inicjalizacja zerowa
    int zmienna4 {zmienna3 + 1}; //inicjalizacja jednolita bezpośrednia
    int zmienna5 = {zmienna4 + 1}; //inicjalizacja jednolita kopiująca

    //Zalecanym sposobem inicjalizacji zmiennej jest inicjalizacja bezpośrednia jednolita.

    return 0;
}