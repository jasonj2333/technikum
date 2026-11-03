#include <iostream>
#include <string>
using namespace std;

int main()
{
    string imie = "Aniaa";
	string kot = "Mruczek";

	cout << "Napis: " << imie << " dlugosc napisu: " << imie.size() << endl;
	cout << "Napis: " << kot << " dlugosc napisu: " << kot.length() << endl;
	cout << imie[0] << endl;
	cout << imie[1] << endl;
	cout << imie[2] << endl;
	cout << imie[3] << endl;
	cout << imie[4] << endl;
	cout << "Mam na imie " + imie + " i moj kot ma na imie " + kot + "\n";
	cout << "Czy moje imie zawiera literke 'a': " << imie.find('a') << endl;

	if (imie.find('e')) cout << "Tak"; 
	else cout << "Nie" << endl;

	if (string::npos == imie.find('e')) cout << "Nie" << endl;
	else cout << "Tak" << endl;

	if ("Ala" < "Ola") cout << "Ala jest mniejsza od Oli" << endl;
	else cout << "Ala jest wieksza od Oli" << endl;
	
	cout << "Podaj swoje imie: " << endl;
	string mojeImie;
	cin >> mojeImie; //wczytanie pojedynczego slowa (do spacji)
	cout << "Podales imie: " << mojeImie << endl;
	
	cin.ignore(); //wyczyszczenie bufora wejscia (pozostalego po wczytaniu pojedynczego slowa)
	
	cout << "Podaj swoje imie i nazwisko: " << endl;
	string imieNazwisko;
	getline(cin, imieNazwisko); //wczytanie calego wiersza (do znaku nowej linii)
	cout << "Podales imie i nazwisko: " << imieNazwisko << endl;

	cout << "Podaj a i b: " << endl;
	int a, b;
	cin >> a >> b;
	cout << "Wartosc a: " << a << ", wartosc b: " << b << endl;
	cout << "Pole prostokata o bokach a i b: " << a * b << endl;

	// Zadanie hasło
	string haslo;
	cout << "Podaj haslo: ";
	cin >> haslo;
	if (haslo.size() < 5) {
		cout << "Haslo jest za krotkie" << endl;
	}
	else {
		if (haslo == "tajne") {
			cout << "Wchodzisz do systemu" << endl;
		}
		else {
			cout << "Brak dostepu" << endl;
		}
	}

	int punkty = 47;

	if (punkty > 90) cout << "Ocena celujacy";
	else if (punkty > 80) cout << "Ocena bardzo dobra";
	else if (punkty > 70) cout << "Ocena dobra";
	else cout << "Ocena niedostateczny";
}
