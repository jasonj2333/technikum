#include <iostream>
using namespace std;

int main() {
	{ // początek bloku kodu
		//Definicja (deklaracja i inicjalizacja) zmiennych lokalnych o nazwie bok1, bok2
		double bok1 = 1; //początek życia i zakresu widoczności zmiennej bok1
		double bok2 = 2; //początek życia i zakresu widoczności zmiennej bok2

		/*UWAGA:
		Zmienne bok1 i bok2 są zmiennymi lokalnymi względem bloku kodu, w którym zostały zdefiniowane
		Na zewnątrz tego bloku zmienne te są niedostepne*/

		cout << "Pole = " << bok1 * bok2 << endl;
		cout << "Obwod = " << 2 * bok1 + 2 * bok2 << endl;
	}//koniec życie i widoczności zmiennych lokalnych bok1 i bok2 
	
	//cout << "Pole = " << bok1 * bok2 << endl;
	//cout << "Obwod = " << 2 * bok1 + 2 * bok2 << endl;
	/*UWAGA:
	Instrukcje powyżej (oznaczone jako komentarz) są błędne, ponieważ zmienne lokalne bok1 i bok2 znajdują się 
	poza zakresem (out of scope) tj. nie zostały zadeklarowane w zakresie bloku ciała funkcji main()*/

	return 0; 
}

