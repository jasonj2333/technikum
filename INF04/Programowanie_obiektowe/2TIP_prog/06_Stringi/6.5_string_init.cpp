#include <iostream>
#include <string>

using namespace std;

int main()
{
	//Deklaracja zmiennej łańcuhowej o nazwie lancuch1
	string lancuch1;
	cout << lancuch1 << endl;
	/*
	UWAGA:
	Łańcuch lancuch1 został zainicjowany wartością domyślną - zerową ""
	*/

	//Przypisanie wartości 
	lancuch1 = "C++";
	cout << lancuch1 << endl;

	string lancuch2 = "C++98";
	/*
	UWAGA:
	Łańcuch lancuch2 został zainicjalizowany przy pomocy inicjalizacji kopiującej
	*/
	cout << lancuch2 << endl;

	string lancuch3("C++03");
	/*
	UWAGA:
	Łańcuch lancuch3 został zainicjalizowany przy wykorzystaniu inicjalizacji konstruktorowej bezpośredniej.
	*/
	cout << lancuch3 << endl;

	string lancuch4 = ("C++11");
	/*
	UWAGA:
	Łańcuch lancuch4 został zainicjalizowany przy wykorzystaniu inicjalizacji konstruktorowej pośredniej.
	*/
	cout << lancuch4 << endl;

	string lancuch5{ "C++14" };
	/*
	UWAGA:
	Łańcuch lancuch5 został zainicjalizowany przy wykorzystaniu inicjalizacji jednolitej bezpośredniej.
	*/
	cout << lancuch5 << endl;

	string lancuch6 = { "C++17" };
	/*
	UWAGA:
	Łańcuch lancuch6 został zainicjalizowany przy wykorzystaniu inicjalizacji jednolitej pośredniej.
	*/
	cout << lancuch6 << endl;
}


