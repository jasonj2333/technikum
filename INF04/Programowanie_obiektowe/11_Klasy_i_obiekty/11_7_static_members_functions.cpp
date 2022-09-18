#include<iostream>
using namespace std;

//Definicja klasy Pracownik
class Pracownik
{
	//Deklaracja prywatnej zmiennej członkowskiej statycznej o nazwie s_szkola
	static string s_szkola;
public:
	//Deklaracja zmiennych członkowskich instancyjnych
	string imie;
	string nazwisko;
	//Prototyp metody statycznej s_zwrocSzkola();
	static string s_zwrocSzkola();
	//Definicja metody statycznej s_ustaw_Szkola()
	static void s_ustawSzkola(string pSzkola) {
		s_szkola = pSzkola;
	}
	//Definicja metody instancyjnej wyswietlDane()
	void wyswietlDane() {
		cout << "Dane pracownika: " << endl;
		cout << "Imię: " << imie << endl;
		cout << "Nazwisko: " << nazwisko << endl;
		cout << "Szkoła: " << s_szkola << endl;
	}

};
//Inicjalizacja zmiennych klasowych s_szkola i s_stanowisko
string Pracownik::s_szkola = "Technikum informatyczne";
//Definicja metody statycznej s_zwrocSzkola()
string Pracownik::s_zwrocSzkola() {
	return s_szkola;
};

int main()
{
	//Utworzenie obiektu pracownik1 jako instacji klasy Pracownik
	Pracownik pracownik1;
	//Przypisanie wartości zmiennych instancyjnych obiektu pracownik1
	pracownik1.imie = "Jan";
	pracownik1.nazwisko = "Kowalski";
	cout << "Dane pracownika: " << endl;
	//Odwołanie się do zmiennych instacyjnych obiektu pracownik1	
	cout << "Imię: " << pracownik1.imie << endl;
	cout << "Nazwisko: " << pracownik1.nazwisko << endl;
	//Odwołanie się do zmiennej klasowej za pośrednictwem metody statycznej s_zwrocSzkola()
	cout << "Szkoła: " << Pracownik::s_zwrocSzkola() << endl;

	//Utworzenie obiektu pracownik2 jako instacji klasy Pracownik
	Pracownik pracownik2;
	//Przypisanie wartości zmiennych instancyjnych obiektu pracownik2
	pracownik2.imie = "Adam";
	pracownik2.nazwisko = "Nowak";
	//Zmiana wartości zmiennej klasowej s_szkola za pośrednictwem metody statycznej s_ustawSzkola()
	Pracownik::s_ustawSzkola("Technikum Elektroniczne");

	cout << "Dane pracownika: " << endl;
	cout << "Imię: " << pracownik2.imie << endl;
	cout << "Nazwisko: " << pracownik2.nazwisko << endl;
	//Odwołanie się do zmiennej klasowej za pośrednictwem metody statycznej s_zwrocSzkola()
	cout << "Szkoła: " << Pracownik::s_zwrocSzkola() << endl;

    return 0;
}