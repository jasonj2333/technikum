#include <iostream>

using namespace std;

//definicja funkcji
void czesc(){
    cout << "Czesc !!!" << endl;
}

void witaj(string imie){
    cout << "Witaj " << imie << endl;
}

int dodaj(int a, int b){
    int wynik = a + b;
    return wynik;
}

int odejmij(int a, int b){
    return a - b;
}

int mnozenie(int a, int b){
    return a * b;
}

float dzielenie(float a, float b){
    if(b != 0) return a / b;

    cout << "Nie mozna dzielic przez 0" << endl;
    return 0;
}

int main()
{
    //Wywo³anie funkcji
    czesc();
    czesc();
    czesc();
    witaj("Anka");
    witaj("Tomek");
    witaj("Ola");
    cout << dodaj(4, 5) << endl;
    cout << dodaj(7, 3) << endl;
    cout << odejmij(7, 3) << endl;
    cout << mnozenie(7, 3) << endl;
    cout << dzielenie(7, 3) << endl;
    cout << dzielenie(7, 0) << endl;
    return 0;
}
