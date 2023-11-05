#include<iostream>
using namespace std;

int main()
{
    //Deklaracja i inicjalizacja zmiennej o nazwie zmiennaInt należącej do typu long int
    long int zmiennaLongInt = 10;

    //Prezentacja informacji dotyczącej zmiennej zmiennaLongInt na ekranie monitora
    cout << "Informacje dotyczące zmiennej zmiennaLongInt:" << endl;
    cout << "wartość: " << zmiennaLongInt << endl;
    cout << "rozmiar (w bajtach): " << sizeof(zmiennaLongInt) << endl;
    cout << "adres: " << &zmiennaLongInt << endl;
    cout << endl;

    //Deklaracja i inicjalizacja zmiennej o nazwie zmiennaInt należącej do typu float
    float zmiennaFloat= 1.5;

    //Prezentacja informacji dotyczącej zmiennej zmiennaFloat na ekranie monitora
    cout << "Informacje dotyczące zmiennej zmiennaFloat: " << endl;
    cout << "wartość: " << zmiennaFloat << endl;
    cout << "rozmiar (w bajtach): " << sizeof(zmiennaFloat) << endl;
    cout << "adres: " << &zmiennaFloat << endl;

    return 0;
}