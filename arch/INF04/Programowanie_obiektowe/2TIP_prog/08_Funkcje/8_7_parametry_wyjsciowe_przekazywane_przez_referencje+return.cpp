#include<iostream>
using namespace std;

//Prorotypy funkcji
double polePr(double, double, double&); 
double obwodPr(double, double,double&); 
/* UWAGA:
Funkcje polePr() i obwodPr() mają po trzy parametry. Dwa pierwsze są przekazywane przez wartość, a trzeci przez referencje. 
Funkcje przekazują na zewnątrz obliczone wartości za pośrednictwem wartości zwracanych oraz za pomocą parametru referecyjnego. */

int main()
{
    double bok1 = 1; //pierwszy bok prostokąta
    double bok2 = 2; //drugi bok prostokąta

    double pole = polePr(bok1, bok2, pole); //Wywołanie funkcji polePr()

    /* UWAGA:
    Wynik wywołania funkcji polePr(), przekazywany jest do programu głównego za pośrednictwem wartości zwracanej, został przypisany do zmiennej pole */

    double obwod; //obwód prostokąta

    //Wywołanie funkcji obwodPr()
    obwodPr(bok1, bok2, obwod);
    /* UWAGA:
    Wynik wywołania funkcji obwodPr() został przekazany przez referencję do argumentu stanowiącego zmienną obwod. */


    cout << "Wyniki: " << endl;
    cout << "Pole = " << pole << endl;
    cout << "Obwod = " << obwod << endl;

    return 0;
}

//Definicje funkcji PolePr() i obwodPr()
double polePr(double b1, double b2, double &poleP) {
    poleP = b1 * b2; //ustalenie wartości parametry wyjściowego

    //Funkcja zwraca na zewnątrz wartość parametru wyjściowego poleP
    return poleP; 
}

double obwodPr(double b1, double b2, double &obwodP) {
    obwodP =  2 * b1 + 2 * b2; 
    return obwodP;
}
