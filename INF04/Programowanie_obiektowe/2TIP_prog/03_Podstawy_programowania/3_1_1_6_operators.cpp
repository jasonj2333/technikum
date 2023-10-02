#include<iostream>
//#include<bitset>
using namespace std;

int main()
{
    //operatory
    /*
    - przypisania
    - arytmetyczne
    - bitowe
    - porównania
    - logiczne
    */

    //przypisania - prostego
    int zmienna1, zmienna2, zmienna3;

    zmienna1 = 1;
    zmienna2 = (zmienna1 + 2);
    zmienna3 = { zmienna2 + 3 };

    //przypisania - złożonego += -= *= /= %=
    int zmienna4 = 3, zmienna5 = 4, zmienna6 = 5;

    zmienna4 += 1;
    zmienna5 *= zmienna1 + 1;
    zmienna6 %= 2;

    //cw
    int x = 1, y = 1;
    y += x; // 2
    x += y; // 3
    int z = y = x; //3
    cout << z << y << x << endl;

    // operatory arytmetyczne - jednoargumentowe +, -, ++ (preinkrementacja, postinkrementacja), -- (predekrementacja, postdekrementacja)
    int zmienna7 = 1, zmienna8 = 2;
    int wynik = ++zmienna7 + zmienna8; //4
    cout << wynik << endl;

    //arytmetyczne dwuaegumnetowe +, -, *, /, % (tylko int)
        //priorytety ++ --; * / %; + - 
    int a = 99, b = 20, c = 3;
    int w = ++a + b % c; // 102
    
    a = 99; b = 20; c = 3;
    w = a++ + --b % c--; // 100
    
    a = 99; b = 20; c = 3;
    w = (++a + b) % c;

    cout << w << endl;

    //cw
    int a1{ 1 }, b1{ 1 }, c1{ 1 };
    int w1{ ++a1 * --b1 + c1++ };
    int w2{ ++a1 * (--b1 + c++) };

    //operatory bitowe
    int liczba = 7; //0111
    int liczba2 = 5; //0101
    int wynikB;

    wynikB = liczba & liczba; //iloczny logiczny AND na odpowiadających sobie bitach
    wynikB = liczba | liczba; //suma logiczna OR na odpowiadających sobie bitach
    wynikB = liczba ^ liczba; //suma logiczna XOR na odpowiadających sobie bitach
    wynikB = ~liczba; //negacja logiczna NOT na każdym bicie //-1000
    wynikB = liczba << 1; //negacja logiczna NOT na każdym bicie //1110
    wynikB = liczba >> 1; //negacja logiczna NOT na każdym bicie //0011

    //cout << bitset<8>(wynikB) << endl;
    cout << wynikB << endl;

    return 0;
}