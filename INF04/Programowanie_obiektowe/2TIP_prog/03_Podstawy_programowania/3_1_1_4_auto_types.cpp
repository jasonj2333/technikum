#include<iostream>
using namespace std;

int main()
{
    int zmienna1{ 5 };
    decltype(zmienna1) zmienna2; //dedukcja typu zmiennej na podstawie zmiennej wzorcowej
    zmienna2 = 2;

    decltype(zmienna2 + 1.9) zmienna3; //dedukcja typu na podstawie wyrażenia
    zmienna3 = 3.14;

    cout <<  typeid(zmienna3).name() << zmienna3 << endl;

    // dedukcja typu na podstawie inicjalizacji

    auto zmienna4 = 4.5f;
    auto zmienna5 (zmienna1 + 2);
    auto zmienna6{ zmienna4 + 2 };

    cout << typeid(zmienna6).name() << zmienna6 << endl;

    return 0;
}