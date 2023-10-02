#include<iostream>
using namespace std;

int main()
{
    //stałe i literały

    cout << 1 + 3 - 7 << endl; //literał całkowity
    cout << 35 << endl; //dziesitny
    cout << 035 << endl; //osemkowy
    cout << 0x35 << endl; //szesnatkowy
    cout << 1.8 + 3.123 - 7 << endl; //literał zmienno przecinkowy
    cout << 1.2345f << endl; //literał zmienno przecinkowy
    cout << 'C' + '+' + '+' << endl; //literały znakowe
    cout << "C++" << endl; //literały łańcuchowe
    cout << true << endl; //literały łańcuchowe

    //stałe nazwane
    const float PI = 3.14159;

    return 0;
}