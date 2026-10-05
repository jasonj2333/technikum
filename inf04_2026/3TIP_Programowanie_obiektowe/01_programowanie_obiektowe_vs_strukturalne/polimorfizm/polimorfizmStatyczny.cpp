#include <iostream>

using namespace std;

class Pracownik {
public:
	string imie, nazwisko, stanowisko;
	//Przeciążamy metodę zwrocDane() w celu zwrócenia danych pracownika w dwóch różnych formatach
	string zwrocDane();
	void zwrocDane(string&, string&, string&);
};

class Nauczyciel : public Pracownik {
public:
	string przedmiot;
	string zwrocDane();
};

class Wychowawca : public Nauczyciel {
public:
	string klasa;
	string zwrocDane();
};

int main()
{
	Pracownik pracownik;
	pracownik.imie = "Jan";
	pracownik.nazwisko = "Kowalski";
	pracownik.stanowisko = "Programista";
	cout << "Dane pracownika: " << pracownik.zwrocDane() << endl;

	string imie, nazwisko, stanowisko;
	pracownik.zwrocDane(imie, nazwisko, stanowisko);
	cout << "Dane pracownika: " << imie << " " << nazwisko << " Stanowisko: " << stanowisko << endl;

	Nauczyciel nauczyciel;
	nauczyciel.imie = "Anna";
	nauczyciel.nazwisko = "Nowak";
	nauczyciel.stanowisko = "Nauczyciel";
	nauczyciel.przedmiot = "Matematyka";
	cout << "Dane nauczyciela: " << nauczyciel.zwrocDane() << endl;

	Wychowawca wychowawca;
	wychowawca.imie = "Piotr";
	wychowawca.nazwisko = "Wiśniewski";
	wychowawca.stanowisko = "Nauczyciel";
	wychowawca.przedmiot = "Biologia";
	wychowawca.klasa = "IIa";
	cout << "Dane wychowawcy: " << wychowawca.zwrocDane() << endl;
}

string Pracownik::zwrocDane() {
	return imie + " " + nazwisko + " " + stanowisko;
}

void Pracownik::zwrocDane(string& imie, string& nazwisko, string& stanowisko) {
	imie = this->imie;
	nazwisko = this->nazwisko;
	stanowisko = this->stanowisko;
}

string Nauczyciel::zwrocDane() {
	return Pracownik::zwrocDane() + " Przedmiot: " + przedmiot;
}

string Wychowawca::zwrocDane() {
	return Nauczyciel::zwrocDane() + " Klasa: " + klasa;
}





