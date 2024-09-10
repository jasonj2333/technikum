#include<iostream>
using namespace std;

int main()
{
    //operatory porównania == < > <= >= !=
    // wynik -> bool
    int zmienna1 = 1;
    int zmienna2 = 2;
    bool wynik;

    wynik = zmienna1 == zmienna2;
    wynik = zmienna1 < zmienna2;

    //operatory logiczne ! && and || or
    int zmienna3 = 1;
    int zmienna4 = -1;
    bool wynik1;

    wynik1 = !(zmienna3 < zmienna4);
    wynik1 = (zmienna3 > 0) && (zmienna4 > 0);

    int a(1), b(10), c(100);
    bool w1(a < b && b < c || a == b);
    bool w2((a < b) && (b < c) || (a == b));
    bool w3(a < b && (b < c || a == b));

    //operator przecinkowy - pozwala na wykonanie większej liczby instrukcji w sytuacji gdy składnia języka wymaga tylko jednej
    int bok1, bok2, pole;
    pole = (bok1 = 1, bok2 = 2, bok1 * bok2);
    return 0;
}