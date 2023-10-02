#include<iostream>
using namespace std;

int main()
{
    int liczba = -1;
    cout << "Liczba = " << liczba << endl;

    int wb;

    //Zastosowanie instrukcji warunkowej
    if(liczba >= 0) wb = liczba;
    if(liczba < 0) wb = -liczba;

    cout << "Wartosc bezwgledna: " << wb << endl;
    return 0;
}