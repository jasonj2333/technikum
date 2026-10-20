#include <iostream>
#include <string>
using namespace std;

int main()
{
	int wiek = 16.5;
	double temperatura = 36.6;
	char grupa = 'A'; //typ znakowy
	bool pada = false; //typ logiczny
	string imie = "Jan"; //typ tekstowy
	const double PI = 3.141592; //stała

	cout << "Wiek: " << wiek << endl;
	cout << "Temperatura: " << temperatura << endl;
	cout << "Grupa: " << grupa << endl;
	cout << "Pada: " << pada << endl;
	cout << "Imie: " << imie << endl;
	cout << "PI: " << PI << endl;

	int a, b;

	cout << "Podaj wartosc a: ";
	cin >> a;
	cout << "Podaj wartosc b: ";
	cin >> b;

	cout << "Pole prostokata o bokach " << a << " i " << b << " wynosi: " << a * b << endl;
	cout << "Iloraz calkowity: " << a / b << endl;
	cout << "Reszta: " << a % b << endl;
	cout << "Iloraz: " << (double)a / b << endl;
	cout << "Iloraz: " << 11/3.0 << endl;
	cout << "Iloraz: " << int( 9/2.0 )<< endl;


}

