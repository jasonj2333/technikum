#include<iostream>
using namespace std;

int main()
{
    //Deklaracja i inicjalizacja zmiennej o nazwie zmiennaInt należącej do typu całkowitego int
    int zmiennaInt = 10;

    //Prezentacja informacji dotyczącej zmiennej zmiennaInt na ekranie monitora
    cout << "Informacje dotyczące zmiennej zmiennaInt:" << endl;
    cout << "wartość: " << zmiennaInt << endl;
    cout << "rozmiar (w bajtach): " << sizeof(zmiennaInt) << endl;
    cout << "adres: " << &zmiennaInt << endl;
    cout << endl;

    //Deklaracja i inicjalizacja zmiennej o nazwie zmiennaInt należącej do typu rzeczywistego double
    double zmiennaDouble= 1.5;

    //Prezentacja informacji dotyczącej zmiennej zmiennaDouble na ekranie monitora
    cout << "Informacje dotyczące zmiennej zmiennaDouble: " << endl;
    cout << "wartość: " << zmiennaDouble << endl;
    cout << "rozmiar (w bajtach): " << sizeof(zmiennaDouble) << endl;
    cout << "adres: " << &zmiennaDouble << endl;

    return 0;
}