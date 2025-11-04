#include <iostream>

using namespace std;

int main()
{
    int* w_ocena = nullptr;

    w_ocena = new int; //dynamiczne alokowanie pamięci

    *w_ocena = 4;
    cout << "Ocena: " << *w_ocena << endl;

    delete w_ocena; //Zwolnienie miejsca w pamięci na które wskazuje wskaznik
    w_ocena = nullptr;


    double* w_bok1 = new double(2);
    double* w_bok2 = new double(3);
    double* w_pole = new double;
    double* w_obwod = new double;

    *w_pole = (*w_bok1) * (*w_bok2);
    *w_obwod = 2 * (*w_bok1) + 2 * (*w_bok2);
    cout << "Wyniki: " << endl;
    cout << "Pole: " << *w_pole << endl;
    cout << "Obwod: " << *w_obwod << endl;

    delete w_bok1;
    delete w_bok2;
    delete w_pole;
    delete w_obwod;
}
