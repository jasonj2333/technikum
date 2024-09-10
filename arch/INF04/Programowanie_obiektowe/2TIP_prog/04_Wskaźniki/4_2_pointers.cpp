#include<iostream>
using namespace std;

int main()
{
    int jPolski, matematyka;
    //Deklaracja i inicjalizacja wskaźnika w_jPolski
    int* w_JPolski{}; //wskaźnik w_JPolski zostanie zainicjowany adresem o wartości 0
    //Nadanie wskaźnikowi w_JPolski wartości równej adresowi zmiennej JPolski
    w_JPolski = &jPolski;

    //Deklaracja wskaźnika w_matematyka i nadanie mu wartości początkowej równennej adresowi zmiennej matematyka
    int* w_matematyka{ &matematyka };

    cout << "Podaj oceny semestralne ucznia: " << endl;
    cout << "Ocena z języka polskiego: "; cin >> jPolski;
    cout << "Ocena z matematyki: "; cin >> matematyka;

    cout << "Wprowadzono następujące dane: " << endl;
    cout << "wartość zmiennej jPolski: " << jPolski << endl;
    cout << "adres zmiennej jPolski: " << &jPolski << endl;
    cout << "adres przechowywany we wskaźniku w_JPolski: " << w_JPolski << endl;

    cout << "wartość zmiennej matematyka: " << matematyka << endl;
    cout << "adres zmiennej matematyka: " << &matematyka << endl;
    cout << "adres przechowywany we wskaźniku w_matematyka: " << w_matematyka << endl;
    return 0;
}