#include<iostream>
using namespace std;

//Definicja klasy Pracownik
class Pracownik
{
public: //Wszystkie elementy członkowskie klasy Pracownik są publiczne
	//Deklaracja statycznych zmiennych członkowskich (zmiennych klasowych)
	static string s_szkola;
	static string s_stanowisko;
	//Deklaracja zmiennych członkowskich instancyjnych
	string imie;
	string nazwisko;
	//Prototyp funkcji członkowskich
	void wyswietlDane();

};
//Inicjalizacja zmiennych klasowych s_szkola i s_stanowisko
string Pracownik::s_szkola = "Technikum informatyczne";
string Pracownik::s_stanowisko = "nauczyciel";
//Definicja funkcji członkowskiej wyswietlDane() zadeklarowanej w klasie pracownik
void Pracownik::wyswietlDane() {
	cout << "Dane pracownika: " << endl;
	cout << "Imię: " << imie << endl;
	cout << "Nazwisko: " << nazwisko << endl;
	cout << "Szkoła: " << s_szkola << endl;
	cout << "Stanowisko: " << s_stanowisko << endl;
}

int main()
{
	//Utworzenie obiektu pracownik1 jako instacji klasy Pracownik
	Pracownik pracownik1;
	//Przypisanie wartości zmiennych instancyjnych obiektu pracownik1
	pracownik1.imie = "Jan";
	pracownik1.nazwisko = "Kowalski";
	//Wywołanie metody instancyjnej wyswietlDane()
	pracownik1.wyswietlDane();

	//Zmiana zmiennej klasowej s_stanowisko
	Pracownik::s_stanowisko = "portier";
	/*UWAGA:
	Odwołanie się do zmiennej klasowej s_stanowisko jest tutaj realizowane przy użyciu nazwy klasy, w której
	zmienna ta została zadeklarowana, oraz operatora zakresu ::.
	Nowa (zmieniona) wartość zmiennej klasowej s_stanowisko obowiązuje dla wszystkich obiektów klasy.
	*
	Możliwość odwołania się do zmiennej klasowej s_stanowisko w programie głównym, a więc na zewnątrz klasy Pracownik,
	w której zmienna ta została zadeklarowana, wynika z jej publicznego statusu.*/

	//Utworzenie obiektu pracownik2 jako instacji klasy Pracownik
	Pracownik pracownik2;
	//Przypisanie wartości zmiennych instancyjnych obiektu pracownik2
	pracownik2.imie = "Jan";
	pracownik2.nazwisko = "Nowak";
	//Wywołanie metody instancyjnej wyswietlDane()
	pracownik2.wyswietlDane();
    return 0;
}