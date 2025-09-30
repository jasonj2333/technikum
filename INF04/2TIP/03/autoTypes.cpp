#include <iostream>
#include <bitset>
using namespace std;

int main()
{
    int zmienna1{ 5 };
    decltype(zmienna1) zmienna2; //Dedukcja typu na podstawie zmiennej wzorcowej
    zmienna2 = 7;

    decltype(zmienna2 + 1.9) zmienna3;  //dedukacja na podstawie wyrażenia
    zmienna3 = 3.14;
    cout << zmienna3 << endl;
    cout << typeid(zmienna3).name() << endl;

    //dedukacja na podstawie inicjalizacji
    auto zmienna4 = 4.5f;
    auto zmienna5{ zmienna3 + 2 };
    cout << typeid(zmienna5).name() << endl;

    //Stałe i literały
    cout << 1 + 3 + 7 << endl;
    cout << 167 << endl;
    cout << 035 << endl; //ósemkowy
    cout << bitset<8>(0x1F) << endl; //szesnatkowym
    cout << 0b10101 + 0b11 << endl; //binarnym
    cout << 7.25f << endl;
    cout << 7.25 << endl;
    cout << 'C' << endl;
    cout << "C++" << endl;
    cout << true << endl;

    const float PI = 3.14;
    

}
