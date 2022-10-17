#include <iostream>
using namespace std;

//Deklaracja stałej globalnej - liczba elementów tablicy
const int n = 5;

//Deklaracja - prototypy funkcji
void daneWejsciowe(double*);
void sumaElementow(const double*, double&);
//UWAGA:
//W zadeklarowanych powyżej funkcjach w przekazywaniu tablic do/z funkcji wykorzystano zapis wskaźnikowy double*.
//Oznacza to, że do/z funkcji jest jest przekazywana cała tablica, lecz jedynie wskaźnik do tablicy(jej pierwszego elementu).
//Tak określony parametr może odgrywać rolę wejścia i wyjścia funkcji w zależności od kontekstu jej wywołania.

int main()
{
    //Deklaracja tablicy
    double tablica[n];
    double suma; //zmienna pomocnicza reprezentująca sumę elementów tablicy
    
    cout << "Dane wejściowe: " << endl;
    //Wywołanie funkcji daneWejsciowe() z argumentem tablica
    daneWejsciowe(tablica);

    //Wywołanie funkcji sumaElementow() z argumentemi tablica i suma
    sumaElementow(tablica, suma);
 
    cout << "Suma elementów tablicy: "<< suma << endl;


    return 0;
}

//Definicje funkcji
void daneWejsciowe(double *t) { 
    for (int i = 0; i < n; i++)
    {
        cout << "element[" << i << "] = ";
        cin >> *(t+i);
    }
};

void sumaElementow(const double *t, double &suma) {
    suma = 0;
    for (int i = 0; i < n; i++)
    {
        suma += *t;
        t++;
    }
}

//UWAGA:
//Jeżeli w programie głównym zadeklarowano tablicę double tablica[n]; to chwili wywołania zdefiniowanych powyżej funkcji
//wskaźnik tablica jest kopiowany do parametru formalnego t, będącego wskaźnikiem na zmienną typu double, która stanowi
//typ elementów składowych tablicy.
//Dzięki arytmetyce wskaźnika zapisy:
//* a) *(t+i) w funkcji daneWejciowe() oraz
//* b) *t w funkcji sumaElementow(), gdzie t zmienia się w każdej iteracji wraz z inkrementacją i,
//są równoważne zapisowi t[i] i w rezultacie zapisowi tablica[i].