#include<iostream>
using namespace std;

//Definicja funkcji globalnej obliczNWD(), pozwalającej wyznaczyć NWD
int obliczNWD(int l1, int l2) {
    while (l1 != l2) {//iteracje są wykonywane dopóki liczby l1 i l2 są różne
        //Ustalenie nowej wartości (zmiejszenie) większej z liczb przez odjęcie od niej liczby mniejszej
        if (l1 > l2) //Jeśli wartość l1 jest większa od wartości l2
            l1 = l1 - l2;
        else if (l2 > l1) //Jeśli wartość l2 jest większa od wartości l1
            l2 = l2 - l1;
    }
    /*UWAGA:
    Po wykonanych iteracja l1 jest równa l2.
    Pętla (i funkcja), kończy działanie jeśli wartości obu liczb są równe.*/
    return l1;
}

int main()
{
    int liczba1, liczba2; //Liczby dla których wyznaczany jest NWD
    int nwd; //NWD
    //Pobranie wartości dwóch liczb całkowitych z klawiatury
    cout << "Dane wejściowe" << endl;
    cout << "Podaj wartość pierwszej liczby: ";
    cin >> liczba1;
    cout << "Podaj wartość drugiej liczby: ";
    cin >> liczba2;
    //Wyznaczenie NWD
    nwd = obliczNWD(liczba1, liczba2);
    //Wyświetlenie wyniku wyznaczonej wartości NWD
    cout << "Wynik" << endl;
    cout << "NWD = " << nwd <<endl;

    return 0;
}