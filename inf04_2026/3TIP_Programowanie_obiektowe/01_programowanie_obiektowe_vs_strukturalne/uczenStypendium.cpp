#include <iostream>
using namespace std;

class Uczen
{
	double srednia;
public:
	string imie;

	Uczen(string, double);
	bool czyOtrzymaStypendium();

};

Uczen::Uczen(string imie, double srednia) : imie{imie}, srednia(srednia){}

bool Uczen::czyOtrzymaStypendium() {
	return true ? srednia >= 4.75 : false;
}

int main()
{
	Uczen uczen1("Tomek", 3.25);
	Uczen uczen2("Ala", 5.1);
	Uczen uczen3("Wojtek", 4.72);
	cout << boolalpha;
	cout << "Uczen: " << uczen1.imie << endl;
	cout << "Srednia: " << uczen1.czyOtrzymaStypendium() << endl;
	cout << "Uczen: " << uczen2.imie << endl;
	cout << "Srednia: " << uczen2.czyOtrzymaStypendium() << endl;
	cout << "Uczen: " << uczen3.imie << endl;
	cout << "Srednia: " << uczen3.czyOtrzymaStypendium() << endl;

}

