#include <iostream>
#include <cmath>

//Deklaracja i inicjalizacja globalnej stałej o nazwie g_waga_standard należącej do typu double
const double g_waga_standard = 0.5;

//Deklaracja zmiennej globalnej
double g_waga;
//UWAGA:
//Zmienna globalna (global variable) to taka, która została zadeklarowana na zewnątrz jakielkolwiek funkcji.
//Zasięg (scope) zmiennej globalnej zaczyna się od miejsca deklaracji i obejmuje wszystkie funkcje zdefiniowane
//w tym pliku, aż do jego końca

//Deklaracja - prototyp funkcji
int ocenaKoncowa(float, float);

using namespace std;

int main() {
	//Testowa prezentacja wartości stałej globalnej g_waga_standard
	cout << "Waga: " << g_waga_standard << endl;

	//Testowa prezentacja wartości zmiennej globalnej g_waga
	cout << "Waga: " << g_waga << endl;

	//Nadanie (modyfikacja) wartości zmiennej globalnej g_waga
	g_waga = 0.75;
	cout << "Waga: " << g_waga << endl;

	double ocenaJPolski = 3;
	cout << "Ocena końcowa z języka polskiego: " 
		 << ocenaKoncowa(g_waga_standard, ocenaJPolski) << endl;

	double ocenaJNiemiecki = 4;
	cout << "Ocena końcowa z języka niemieckiego: "
		<< ocenaKoncowa(g_waga, ocenaJNiemiecki) << endl;

	return 0;
}

//Definicja funkcji
int ocenaKoncowa(float waga, float ocena) {
	return round(waga * ocena);
}