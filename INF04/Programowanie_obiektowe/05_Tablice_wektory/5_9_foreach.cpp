#include<iostream>
using namespace std;

int main()
{
    const int n{ 5 }; //rozmiar tablicy
    
    //Deklaracja zmiennej tablicowej o nazwie tablica
    double tablica[n];

    //Wprowadzenie z klawiatury wartości wszystkich elementów składowych tablicy
    cout << "Podaj wartość elementów składowych tablicy: " << endl;
    for (double& element : tablica) {
        cout << "element = ";
        cin >> element;
    }
    /*UWAGA:
    W pętli for powyżej zmienna element stanowi referencje do elementu składowego tablicy.
    Tym samym wartości elementów tablicy można zmieniać (nadawać wartość, modyfikować).*/

    //Obliczanie sumy wszystkich elementów zapisanych w tablicy.
    double suma{ 0 };
    for (double element : tablica) {
        suma += element;
    }
    /*UWAGA:
    W pętli for zmienna element stanowi kopię elementu tablicy. Oznacza to, że operacje są wykonywane na kopiach elementów,
    a nie na oryginałach. Tym samym zmiana wartości elementów tablicy jest niemożliwa,*/
    
    //Wyświetlenie wyniku - sumy elementów tablicy.
    cout << "Suma elementów tablicy wynosi: " << suma << endl;

    return 0;
}