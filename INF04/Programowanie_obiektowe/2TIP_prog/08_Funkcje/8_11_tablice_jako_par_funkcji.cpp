#include <iostream>
using namespace std;

//Deklaracja stałej globalnej - liczba elementów tablicy
const int n = 5;

//Deklaracja - prototypy funkcji
void daneWejsciowe(double[]);
//UWAGA:
//W funkcji daneWejsciowe() w przekazywaniu tablic wykorzystano tradycyjny zapis tablicowy: typ_skladowy[] - double[].
//Zapis double[] jest zamieniany przez kompilator podczas kompilacji na zapis równoważny: double*.
//Oznacza to, że do funkcji nie jest przekazywana cała tablica, lecz jedynie wskaźnik do jej pierwszego elementu składowego.
//Tym samym tak określony parametr może odgrywać rolę wejścia lub wyjścia w zależności od kontekstu wywołania.

void sumaElementow(const double[], double&);
//UWAGA:
//Funkcja sumaElementow() ma dwa parametry. Pierwszy z nich jest wskaźnikiem do stałej const typu double, który
//odpowiada typowi elementów składowych tablicy. Parametr ten odgrywa rolę wejścia funkcji.
//Drugi parametr odgrywa referencję do zmiennej należącej do typu double.

int main()
{
    //Deklaracja tablicy rzeczywistej
    double tablica[n];
    double suma; //zmienna pomocnicza reprezentująca sumę elementów tablicy
    
    cout << "Dane wejściowe: " << endl;
    //Wywołanie funkcji daneWejsciowe() z argumentem tablica
    daneWejsciowe(tablica);
    /*UWAGA:
    Argument tablica to faktycznie wskaźnik do jej pierwszego elementu składowego*/

    //Wywołanie funkcji sumaElementow() z argumentemi tablica i suma
    sumaElementow(tablica, suma);
    /*UWAGA:
    Argument wskaźnikowy tablica odgrywa rolę wejścia funkcji sumaElementow(), ponieważ jest do niej przekazywany
    jako wskaźnik do stałej const typu double co wynika z deklaracji i definicji tej funkcji.
    Argument suma stanowi wyjście funkcji sumaElementów
    */

    cout << "Suma elementów tablicy: "<< suma << endl;


    return 0;
}

//Definicje funkcji, w których wykorzystano notację tradycyjną - tablicową
void daneWejsciowe(double t[]) { //t[] stanowi parametr wyjściowy
    for (int i = 0; i < n; i++)
    {
        cout << "element[" << i << "] = ";
        cin >> t[i];
    }
};

void sumaElementow(const double t[], double& suma) {// t[] stanowi parametr wejściowy, suma - parametr wyjściowy
    suma = 0;
    for (int i = 0; i < n; i++)
    {
        suma += t[i];
    }
}

//UWAGA:
//W definicjach funkcji powyżej parametr formalny t oznacza wskaźnik na typ double : double* t, który odpowiada typowi
//elementów składowych tablicy.
//Jeżeli w programie głównym zadeklarowano tablicę double tablica[n]; (jak tutaj) oraz w wywołaniu każdej z powyższych
//jej argumentem jest zmienna (wskaźnik) tablica, to wskaźnik ten jest kopiowany do parametru formalnego t.
//Zgodnie z zasadami arytmetyki wskaźników zapis tablica[i] jest równoważny zapisowi t[i] i dalej - zapisowi *(t+1)