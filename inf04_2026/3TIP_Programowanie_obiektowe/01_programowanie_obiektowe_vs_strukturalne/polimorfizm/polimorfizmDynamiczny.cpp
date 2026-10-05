#include <iostream>
using namespace std;

class Pracownik {
public:	
	string imie, nazwisko;
	virtual void zwrocDane();
};

class PAdministracji : public Pracownik {
public:	
	string stanowisko;
	void zwrocDane();
};

class PObslugi : public Pracownik {
public:
	string kategoriaZaszergowania;
	void zwrocDane();
};

class Ksiegowa : public PAdministracji {
public:
	int liczbaKlientow;
	void zwrocDane();
};

int main()
{
	Pracownik* w_pracownik;
	Pracownik pracownik1;
	pracownik1.imie = "Jan";
	pracownik1.nazwisko = "Kowalski";

	w_pracownik = &pracownik1;
	//w_pracownik->zwrocDane();

	PAdministracji sekretarka;
	sekretarka.imie = "Anna";
	sekretarka.nazwisko = "Nowak";
	sekretarka.stanowisko = "Sekretarka";

	w_pracownik = &sekretarka;
	//w_pracownik->zwrocDane();

	Ksiegowa ksiegowa;
	ksiegowa.imie = "Maria";
	ksiegowa.nazwisko = "Wiśniewska";
	ksiegowa.stanowisko = "Ksiegowa";
	ksiegowa.liczbaKlientow = 50;

	w_pracownik = &ksiegowa;
	//w_pracownik->zwrocDane();

	Pracownik* pracownicy[] = { &pracownik1, &sekretarka, &ksiegowa };
	for (Pracownik* pracownik : pracownicy)
	{
		pracownik->zwrocDane();
	}

}

void Pracownik::zwrocDane() {
	cout << "Imie: " << imie << ", Nazwisko: " << nazwisko << endl;
}

void PAdministracji::zwrocDane() {
	cout << "Imie: " << imie << ", Nazwisko: " << nazwisko << ", Stanowisko: " << stanowisko << endl;
}

void PObslugi::zwrocDane() {
	cout << "Imie: " << imie << ", Nazwisko: " << nazwisko << ", Kategoria zaszeregowania: " << kategoriaZaszergowania << endl;
}

void Ksiegowa::zwrocDane() {
	cout << "Imie: " << imie << ", Nazwisko: " << nazwisko << ", Stanowisko: " << stanowisko << ", Liczba klientow: " << liczbaKlientow << endl;
}

