#include<iostream>
#include<cstdlib>
using namespace std;

//Definicja funkcji globalnej obliczNWD(), pozwalającej wyznaczyć NWD - metoda z dzieleniem
int obliczNWD(int l1, int l2) {
    //Wyznaczenie wartości bezwględnych obu liczb reprezentowanych parametry formalne funkcji
    l1 = abs(l1); l2 = abs(l2);
    /*UWAGA:
    Wyznaczenie wartości bezwględnych liczb l1 i l2 ma na celu uwzględnienie liczb całkowitych o dowolnym znaku
    - co wynika z definicji NWD. Wartość NWD z definicji jest nieujemna.*/

    if (l1 == 0) //Jeżeli wartość l1 jest równa 0
        return l2; //NWD jest równe wartości bezwględnej z l2

    if (l2 == 0) //Jeżeli wartość l2 jest równa 0
        return l1; //NWD jest równe wartości bezwględnej z l1

    if (l1 == l2) //Jeżeli wartości bezwględne obu są równe
        return l1; //NWD jest równe wartości bezwględnej z l1, która jest równa wartości bezwględnej l2

    if (l1 > l2) //Jeżeli wartości bezwględna l1 jest większa od wartości bezwględnej l2
        return obliczNWD(l1 - l2, l2); //Wywołanie rekurencyjne funkcji obliczNWD()
        /*UWAGA:
        Pierwszym argumentem wywołania funkcji obliczNWD jest zmiejszona wartość l1, drugim l2.*/

    if (l2 > l1) //Jeżeli wartości bezwględna l2 jest większa od wartości bezwględnej l1
        return obliczNWD(l1, l2 - l1); //Wywołanie rekurencyjne funkcji obliczNWD()
        /*UWAGA:
        Pierwszym argumentem wywołania funkcji obliczNWD jest wartość l1, drugim zmiejszona wartość l2.*/

    return l2;
}

//Definicja funkcji globalnej obliczNWD(), pozwalającej wyznaczyć NWD - metoda z dzieleniem
int obliczNWD_DIV(int l1, int l2) {
    l1 = abs(l1); l2 = abs(l2);
    if(l2 == 0) return l1;

    return obliczNWD_DIV(l2, l1 % l2);
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