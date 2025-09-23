#include <iostream>
using namespace std;

//Operatory
/*
    - przypisania
    - arytmetycznych
    - bitowych
    - porównania
    - logicznych
*/


int main()
{
    int zmienna1, zmienna2(5), zmienna3;
    
    zmienna1 = 1;
    zmienna2;
    zmienna3  = { zmienna2 + 7 };

    int zmienna4 = 3, zmienna5(4), zmienna6{12};

    //przypisanie żłożone +=, -=, *=, /=, %=
    zmienna4 = zmienna4 + 1;
    zmienna5 += 1;
    zmienna6 %= 2;
    zmienna5 *= zmienna1 + 5;

    //cw
    int x = 1, y = 1;
    //zwieksz y o x
    y += x;
    //zwieksz x o y
    x += y;
    //utworz z = x + y
    int z = x + y;
    //wyswietl wszystkie 3 zmienne
    cout << x << " " << y << " " << z << endl;
    z = y = x;
    cout << x << " " << y << " " << z << endl;

    //operatory arytmetyczne jednoargumentowe +, -, ++, --
    int zmienna7 = 3, zmienna8 = -2;
    cout << -zmienna8 << " " << -zmienna7 << endl;
    int wynik = ++zmienna7 + zmienna8--;
    cout << wynik << endl;
    cout << zmienna7 << " " << zmienna8 << endl;

    //operatory arytmetyczne dwuargumentowe +, -, * , /, %(tylko dla int)
    // priorytety ++, --; * / %; + -
    int a = 99, b = 20, c = 3;
    int w = ++a + b % c;
    cout << w << endl; //102

    a = 99, b = 20, c = 3;
    w = a++ + --b % c--; //100 a=100 b=19 c=2
    cout << w << " " << a << " " << b << " " << c << endl;

    a = 99, b = 20, c = 3;
    w = (++a + b) % c;
    cout << w << " " << a << " " << b << " " << c << endl;

    //cw
    int a1{ 1 }, b1{ 1 }, c1{ 1 };
    int  w1{ ++a1 * --b1 + c1++ };
    cout << w1 << " " << a1 << " " << b1 << " " << c1 << endl;
    int w2{ ++a1 * (--b1 + c1++) };
    cout << w2 << " " << a1 << " " << b1 << " " << c1 << endl;

    //operatory bitowe
    int liczba1 = 7; //0111
    int liczba2 = 5; //0101
    int wynikB;

    wynikB = liczba1 & liczba2;
    cout << wynikB << endl;
    wynikB = liczba1 | liczba2;
    cout << wynikB << endl;
    wynikB = liczba1 ^ liczba2;
    cout << wynikB << endl;

    wynikB = ~liczba1;
    cout << wynikB << endl;

    wynikB = liczba1 << 1;
    cout << wynikB << endl;

    wynikB = liczba2 >> 1;
    cout << wynikB << endl;
}



