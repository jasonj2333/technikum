#include<iostream>
using namespace std;

//Deklaracja stałej o nazwie stalaPom:
const float stalaPom = 100;

//Deklaracja i inicjalizacja zmiennej globalnej o nazwie zmiennaPom
float zmiennaPom = 100;

//Deklaracja tablicy o nazwie tablica na zewnątrz funkcji main()
float tablica[5];
//UWAGA:
//Domyślnie wszystkie elementy składowe tablic zostaną zainicjowane w sposób niejawny wartościami zerowymi

int main()
{
    //Wyświetlenie zawartości tablicy o nazwie tablica zadeklarowanej na zewnątrz funkcji main()
	for (int i = 0; i < 5; i++)
	{
		cout << "tablica[" << i << "] = " << tablica[i] << endl;
	}
	cout << endl;

	float tablica1[5] = { 1, 2, 3, 4, 5 + zmiennaPom - stalaPom };
	/*UWAGA:
	Pierwsze cztery elementy składowe tablicy tablica1 zostały zainicjowane za pomocą literałów.
	Z kolei ostatni, piąty element został zainicjowany wartością wyrażenia zawierającego stałą i zmienną.*/
	for (int i = 0; i < 5; i++)
	{
		cout << "tablica1[" << i << "] = " << tablica1[i] << endl;
	}
	cout << endl;

	float tablica2[10] = { 1, 2, 3, 4, 5 };
	/*UWAGA:
	Liczba zadeklarowanych elementów składowych tablicy tablica2 jest większa od liczby wartości początkowych jej
	elementów składowych zainicjowanych w sposób jawny.*/
	for (int i = 0; i < 10; i++)
	{
		cout << "tablica2[" << i << "] = " << tablica2[i] << endl;
	}
	cout << endl;

	float tablica3[] = { 1, 2, 3, 4, 5 };
	/*UWAGA:
	W deklaracji tablicy tablica3 nie podano liczby jej elementów. Dlatego też jej rozmiar zostanie ustalony automatycznie
	na podstawie liczby wartości początkowych jej elementów składowych zainicjowanych w sposób jawny.*/
	for (int i = 0; i < 5; i++)
	{
		cout << "tablica3[" << i << "] = " << tablica3[i] << endl;
	}
	cout << endl;

	float tablica4[] { 1, 2, 3, 4, 5 };//C++11
	for (int i = 0; i < 5; i++)
	{
		cout << "tablica4[" << i << "] = " << tablica4[i] << endl;
	}
	cout << endl;

	float tablica0a[5] = { };
	/*UWAGA:
	Wszystkie elementy składowe tablicy tablica0a zostały zainicjowane wartościami 0.*/
	for (int i = 0; i < 5; i++)
	{
		cout << "tablica0a[" << i << "] = " << tablica0a[i] << endl;
	}
	cout << endl;

	float tablica0b[5] { }; //C++11
	for (int i = 0; i < 5; i++)
	{
		cout << "tablica0b[" << i << "] = " << tablica0b[i] << endl;
	}
	cout << endl;


    return 0;
}