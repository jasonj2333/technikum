#include <iostream>
#include "tablice.h"

using namespace std;

int suma(int tablica[], int rozmiar) {
	int suma = 0;

	for (int i = 0; i < rozmiar; i++) {
		suma += tablica[i];
	}
	return suma;
}

double srednia(int tablica[], int rozmiar) {
	int sumaLiczb = suma(tablica, rozmiar);
	return sumaLiczb/double(rozmiar);
}

int minimum(int tablica[], int rozmiar) {
	int min = tablica[0];

	for (int i = 1; i < rozmiar; i++) {
		if (tablica[i] < min) min = tablica[i];
	}
	return min;
}

int maksimum(int tablica[], int rozmiar) {
	int maks = tablica[0];

	for (int i = 1; i < rozmiar; i++) {
		if (tablica[i] > maks) maks = tablica[i];
	}
	return maks;
}

void wypisz(int tablica[], int rozmiar) {

	for (int i = 0; i < rozmiar; i++) {
		cout << tablica[i] << " ";
	}
	cout << endl;
}

void wpisz(int tablica[], int rozmiar) {

	for (int i = 0; i < rozmiar; i++) {
		cout << "Podaj kolejny element tablicy: ";
		cin >> tablica[i];
	}
	cout << endl;
}