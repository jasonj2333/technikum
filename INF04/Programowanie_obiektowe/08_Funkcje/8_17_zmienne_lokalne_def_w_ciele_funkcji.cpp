#include <iostream>
using namespace std;

//Definicja funkcji polePr()
double polePr(double b1, double b2) {
	//Definicja (deklaracja i inicjalizacja) zmiennej lokalnej o nazwie temp
	double temp = b1 * b2;
	//UWAGA:
	/*Zakres widoczności zmiennej temp obejmuje wyłącznie ciało funkcji polePr().
	Na zewnątrz (w otoczeniu  funkcji) polePr() zmienna ta nie jest widoczna, czyli nie jest dostępna*/

	return temp; //koniec życia zmiennej temp, określony przez koniec działania fukcji
}//koniec zakresu widoczności zmiennej lokalnej temp.

//Definicja funkcji obwodPr()
double obwodPr(double b1, double b2) {
	//Definicja (deklaracja i inicjalizacja) zmiennej lokalnej o nazwie temp
	double temp = 2 * b1 + 2 * b2;

	return temp;
}

int main() {
	//Definicja (deklaracja i inicjalizacja) zmiennych lokalnych o nazwie bok1, bok2
	double bok1 = 1; //początek życia i zakresu widoczności zmiennej bok1
	double bok2 = 2; //początek życia i zakresu widoczności zmiennej bok2

	/*UWAGA:
	Zmienne lokalne bok1 i bok2 są dostępne bezpośrednio w ciele funkcji main() począwszy od miejsca ich definiowania
	oraz we wszystkich funkcjach, które są w niej wywołane*/

	cout << "Pole = " << polePr(bok1, bok2) << endl;
	cout << "Obwod = " << obwodPr(bok1, bok2) << endl;

	return 0; //koniec życie zmiennych lokalnych bok1 i bok2 określone przez koniec działania funkcji main()
}//koniec zakresu widoczności zmiennych lokalnych bok1 i bok2.

