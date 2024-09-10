#include <iostream>
using namespace std;

//Deklaracje funkcji
void polePr(double, double, double*);
//UWAGA:
//Funkcja typu void polePr() ma dwa parametry wejściowe przekazywane przez wartość i jeden parametr wyjściowy przekazywany
//przez wskaźnik.

double* obwodPr(const double*, const double*, double*);
//UWAGA:
//Funkcja obwodPr() ma trzy parametry formalne. Pierwsze dwa z dnich są parametrami wejściowymi
//będącymi wskaźnikami do stałych const, a trzeci jest to parametr wyjściowy przekazywany przez wskaźnik.
//Funkcja zwraca zewnątrz wskaźnik równoważny parametrowi wyjściowemu funkcji.


int main()
{
    double bok1 = 1; //pierwszy bok prostokąta
    double bok2 = 2; //drugi bok prostokąta
    
    double pole; //pole prostokąta
    //Deklaracja i inicjalizacja wskaźnika do zmiennej pole
    double* w_pole = &pole;

    //Wywołanie funkcji polePr()
    polePr(bok1, bok2, w_pole);
    /*UWAGA:
    Wywołanie funkcji polePr() stanowi instrukcję prostą.
    Argument wskaźnikowy w_pole odgrywa rolę wyjścia funkcji*/

    //Deklaracje wskazników wskazujących na zmienne bok1 i bok2
    double* w_bok1 = &bok1;
    double* w_bok2 = &bok2;

    double obwod; //obwód prostokąta
    //Deklaracja i inicjalizacja wskaźnika na zmienną obwód
    double* w_obwod = &obwod;

    //Wywołanie funkcji obwod
    w_obwod = obwodPr(w_bok1, w_bok2, w_obwod);
    /*UWAGA:
    Wszystkie argumenty wywołania funkcji obwodPr() są wskaźnikami.
    Argumenty w_bok1 i w_bok2 stanowią wejście funkcji, ponieważ są przekazywane jako wskaźniki do styłych const typu double.
    Wynika to z definicji funkcji. Parametr w_obwod reprezentuje jedno z dwóch wyjść funkcji.
    Drugim wyjściem jest wartość zwracana przez funkcję.*/

    cout << "Wyniki: " << endl;
    cout << "Pole = " << pole << endl;
    cout << "Obwod = " << obwod << endl;
    
    return 0;
}

//Definicje funkcji PolePr() i obwodPr()
void polePr(double b1, double b2, double *w_poleP) {
    *w_poleP = b1 * b2; 
    
}
//UWAGA:
//Parametry formalne b1, b1 funkcji polePr() stanowią wejście funkcji, ponieważ są przekazywane przez wartość.
//Parametr wskaźnikowy w_pole z kolei reprezentuje wyjście funkcji.

double* obwodPr(const double *w_b1, const double *w_b2, double *w_obwodP) {
    *w_obwodP = 2 * *w_b1 + 2 * *w_b2;
    //Funkcja przekazuje na zewnątrz wartość parametru wyjściowego w_obwod
    return w_obwodP;
}

//UWAGA:
//Parametry formalne b1, b1 funkcji polePr() stanowią wejście funkcji, ponieważ są przekazywane jako wskaźniki do stałych
//const typu double.
//Wyjście funkcji jest reprezentowany przez parametr wskaźnikowy w_obwod oraz zwracaną przez nią wartość.

