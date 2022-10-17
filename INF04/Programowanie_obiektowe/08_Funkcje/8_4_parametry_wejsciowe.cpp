#include<iostream>
using namespace std;

//Definicja funkcji polePr()
double polePr(double b1, double b2){ //parametry (formalne ) przekazywane przez wartość
    //Operacje w ciele funkcji są realizowane przy pomocy jej parametrów
    return b1 * b2; //funkcja zwraca na zewnątrz obliczoną wartość wyrażenia b1 * b2

}

/* UWAGA: 
Funkcja polePr() ma dwa parametry wejściowe przekazywane przez wartość. Oba parametry są typu double
Funkcja polePr() zwraca na zewnątrz wartość typu double */

//Deklaracja - prototyp funkcji odwodPr()
double obwodPr(double, double);

/* UWAGA: 
Funkcja obwodPr() ma dwa parametry wejściowe przekazywane przez wartość. Oba parametry są typu double
Funkcja obwodPr() zwraca na zewnątrz wartość typu double 

Definicja funkcji obwodPr() jest zamieszczona w dalszej części programu - poniżej programu głównego.
*/

int main()
{
    //Deklaracja i inicjalizacja zmiennych pomocniczych - boki prostokąta
    double bok1 = 1;
    double bok2 = 2;

    double pole; //pole prostokąta

    //Wywołanie funkcji polePr() jako części składowej wyrażenia
    pole = polePr(bok1, bok2);
    /* UWAGA:
    W wyrażeniu powyżej, wynik wykonania funkcji polePr() jest podstawiany do zmiennej pole.
    Argumentami wywołania funkcji polePr() są zmienne pomocnicze bok1 i bok2 zdefiniowane wcześniej
     */

    double obwod = obwodPr(bok1, bok2); //Wywołanie funkcji obwodPr()
    /* UWAGA:
    Wywołanie funkcji obwodPr() jest realizowane z dwoma argumentami bok1 i bok.
    Wynik wywołania funkcji zostaje przypisany do zmiennej obwod. */

    cout << "Pole i obwod prostokata:" << endl;
    cout << "Pole = "<< pole << endl;
    cout << "Obwod = " << obwod << endl;

    return 0;
}

//Definicja funkcji obwodPr()
double obwodPr(double b1, double b2) {
    return 2 * b1 + 2 * b2; //funkcja zwraca na zewnątrz wartość wyrażenia 2 * b1 + 2 * b2
}