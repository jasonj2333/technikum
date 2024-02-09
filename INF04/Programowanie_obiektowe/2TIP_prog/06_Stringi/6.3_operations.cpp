#include <iostream>
#include <cstring>

using namespace std;

int main()
{
	//Deklaracja i inicjalizacja C-napisów
	char napis1[30] = "Community";
	char napis2[30] = "community";

	//Określenie długości napisów
	cout << "Długość 1 napisu w znakach: " << strlen(napis1) << endl;
	cout << "Długość 2 napisu w znakach: " << strlen(napis2) << endl;

	/*UWAGA:
		Funkcja strlen() zwraca liczbę znaków w łańcuchu, nie uwzględniając znaku specjalnego \0 na końcu łańcucha
	*/

	//Określenie rozmiaru napisów
	cout << "Rozmiar 1 napisu w bajtach: " << sizeof(napis1) << endl;
	cout << "Rozmiar 2 napisu w bajtach: " << sizeof(napis2) << endl;

	//Porównywanie C-napisów strcmp(argument1, argument2)
	cout << "Czy napisy są identyczne?: " << strcmp(napis1, napis2) << endl;
	// 0 - jeśli są identyczne
	// -1 gdy argument 1 jest mniejszy od 2
	// 1 gdy gdy argument 1 jest większy

	//Skopiowanie literałów łańcuchowych do zmiennych napis1 i napis2
	strcpy_s(napis1, "Visual Studio");
	cout << "napis1: " << napis1 << endl;

	strcpy_s(napis2, "Community");
	cout << "napis2: " << napis2 << endl;

	//Dodanie literału " ", a następnie C-napisu napis2 do napisu1
	strcat_s(napis1, " ");
	strcat_s(napis1, napis2);
	cout << "napis1: " << napis1 << endl;

	//Sprawdzenie czy literał "Studio" jest podłańcuchem napisu1
	cout << "Napis \"Studio\" stanowi podłańcuch łańcucha " << napis1 << " od pozycji " << strstr(napis1, "Studio") << endl;

	//Sprawdzenie czy znak 'm' jest zawarty w łańcuchu
	cout << "Znak 'm' jest zawarty w łańcuchu " << napis1 << " od pozycji " << strchr(napis1, 'm') << endl;
}


