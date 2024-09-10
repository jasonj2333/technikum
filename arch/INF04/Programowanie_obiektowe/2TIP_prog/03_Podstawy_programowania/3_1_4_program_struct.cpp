//Dyrektywy preprocesora
#include<iostream>

//Deklaracja użycia standardowej przestrzeni nazw
using namespace std;

//Program główny
int main()
{
    //Instrukcje programu
    int bok1, bok2;
    cout << "Obliczanie pola i obwodu prostokata" << endl;
    cout << endl;
    cout << "Podaj dlugosc pierwszego boku: ";
    cin >> bok1;
    cout << "Podaj dlugosc drugiego boku: ";
    cin >> bok2;

    int pole = bok1 * bok2;
    int obwod = 2 * bok1 + 2 * bok2;

    cout << endl << "Wyniki:" << endl;
    cout << "Pole wynosi: " << pole << endl;
    cout << "Obwod wynosi: " << obwod << endl;
    
    //Przesłanie do systemu operacyjnego statusu wyjścia programu
    return 0;
}