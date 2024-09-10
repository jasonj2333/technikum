#include <iostream>
#include <limits>

using namespace std;

int main()
{
  //Deklaracja i inicjalizacja zmiennej wersja1
	char wersja1[15]{ "C++ 98" };
	cout << wersja1 << endl;

	cout << "Podaj inna wersje, np. C++17: ";
	cin >> wersja1; //pobiera do znaku białego np. spacji, tabulatora, końca wiersza
	cout << wersja1 << endl;

	//Deklaracja C-napisu wersja2
	char wersja2[15];
	cout << "Podaj wersje C#, np. 8.0: ";
	cin >> wersja2; //zainicjowana wartoscią ASCI 0 (NUL) \0
	cout << wersja2 << endl;

	//Deklaracja C-napisu wersja3
	char wersja3[15];
	cout << "Podaj alternatywna nazwe Visual C++ 2015 (Visual C++ 14.0): ";
	//cin >> wersja3; // - tylko do białego znaku
	
	//Opróżnienie strumienia wejściowego
	cin.ignore(numeric_limits<std::streamsize>::max(), '\n');

	//Wprowadzenie wartości zmiennej wersja3
	cin.get(wersja3, 15);
	cout << wersja3 << endl;
}


