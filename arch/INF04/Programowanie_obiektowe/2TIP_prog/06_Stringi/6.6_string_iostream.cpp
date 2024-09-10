#include <iostream>
#include <limits>
#include <string>

using namespace std;

int main()
{
	//Deklaracja zmiennej łańcuchowej lancuch
	string lancuch;
	int liczba;
	cout << "Podaj nazwe jezyka programowania: ";
	cin >> lancuch;
	cout << lancuch << endl;

	cout << "Podaj dwuczlonowa nazwe jezyka programowania (np. Visual Basic): ";
	cin >> lancuch;
	cout << lancuch << endl;
	/*
	UWAGA:
	Wprowadzenie danych wejściowych z klawiatury przy użyciu strumienia cin wraz
	operatorem wyodrebnienia >> wiaze się z ty, że biala spacja (np. tabulator)
	kończy wprowadzanie danych.
	*/
    
	//Opróżnienie strumienia wejściowego
	cin.ignore(numeric_limits<std::streamsize>::max(), '\n');

    cout << "Podaj jakas liczbe: ";
	cin >> liczba;
	/*
	UWAGA:
	Działanie metody ignore() polega na odrzuceniu (ang. discard) wszystkich
	znaków w strumieniu wejściowym aż do napotkania znaku odgrywającego rolę
	ogranicznika, a następnie wyodrębnienie pozostałej części łańcucha.
	Pierwszy argument metody ignore() stanowi liczbę znaków do wyodrębnienia,
	a drugi znak ogranizaczający.
	Tutaj pierwszy argument oznacza maksymalną (teoretyczną) liczbę znaków, którą
	może obsługiwać bufor strumienia. Praktycznie reprezentuje on nieograniczną
	liczbę znaków. Drugi argument odpowiada naciśnięciu klawisza enter;
	*/
	
    cin.ignore(numeric_limits<std::streamsize>::max(), '\n');
	cout << "Podaj dwuczlonowa nazwe jezyka programowania (np. Visual Basic): ";
	getline(cin, lancuch);
	/*
	UWAGA:
	Wywołanie funkcji getline() spowoduje wczytanie linii tekstu do strumienia
	wejsciowego (tutaj cin) i dołączenie go do zmiennej łańcuchowej typu string.
	Funkcja getline() czyta cały wiersz, w tym wszystkie początkowe i końcowe
	białe znaki, aż do naciśnięcia klawisza Enter;
	*/
	cout << lancuch << endl;
}


