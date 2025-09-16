#include <iostream>

using namespace std;

int a = 2, b = 2, c = 5;    // Integer
//short, long, long long, unsigned
float d = 2.5, e = 3.5;    // Floating point
double f = 5.99;           // Double precision floating point
char g = 'D';              // Character
bool h = true;             // Boolean
string i = "Hello";        // String - typ złożony
//void - typ pusty, może być użyty tylko jako typ zwracany przez funkcję
typedef unsigned char byte; // Definicja nowego typu danych
byte j = 97;             // Zmienna typu byte
using kbyte = unsigned short; // Definicja nowego typu danych
kbyte k = 65535;          // Zmienna typu kbyte

//Inicjalizacja zmiennych
int liczba = 5;          // Inicjalizacja (kopiującą) zmiennej typu int
float liczbaZmiennoprzecinkowa(5.99); // Inicjalizacja (bezpośrednią, konstruktorową) zmiennej typu float
double liczbaDouble { f + 2 }; // Inicjalizacja od C++11 (listową) zmiennej typu double
int klasa{}; //Inicjalizacja zerowa
bool prawda{}; //Inicjalizacja zerowa (fałsz)

float bok1 { 1.0 }; //Definicja i inicjalizacja zmiennej
float bok2 = { 2.0 };
float pole, obwod; //Deklaracja zmiennych


int main()
{
    cout << "Zmienna typu int: " << prawda << endl;
    pole = bok1 * bok2;
	obwod = 2 * (bok1 + bok2);
	cout << "Pole prostokata o bokach a="<< bok1 << " b=" << bok2 << " wynosi: " << pole << endl;
}
