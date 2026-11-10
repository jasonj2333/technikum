#include <iostream>

using namespace std;

int main()
{
	double a, b;
	char znak;

	cout << "Podaj pierwsza liczbe: ";
	cin >> a;
	cout << "Podaj druga liczbe: ";
	cin >> b;
	cout << "Podaj znak (+, -, *, /): ";
	cin >> znak;

	switch (znak) {
	case '+':
		cout << "Wynik dodawania: " << a + b << endl;
		break;
	case '-':
		cout << "Wynik odejmowania: " << a - b << endl;
		break;
	case '*':
		cout << "Wynik mnozenia: " << a * b << endl;
		break;
	case '/':
		if (b != 0) {
			cout << "Wynik dzielenia: " << a / b << endl;
		} else {
			cout << "Blad: dzielenie przez zero!" << endl;
		}
		break;
	default:
		cout << "Nie ma takiej operacji!" << endl;
		break;
	}

	int dzien;
	cout << "Podaj dzien tygodnia (1-7): ";
	cin >> dzien;

	switch (dzien) {
	case 1:
		cout << "Poniedzialek" << endl;
		break;
	case 2:
		cout << "Wtorek" << endl;
		break;
	case 3:
		cout << "Sroda" << endl;
		break;
	case 4:
		cout << "Czwartek" << endl;
		break;
	case 5:
		cout << "Piatek" << endl;
		break;
	case 6:
		cout << "Sobota" << endl;
		break;
	case 7:
		cout << "Niedziela" << endl;
		break;
	default:
		cout << "Blad: nie ma takiego dnia tygodnia!" << endl;
		break;
	}
}
