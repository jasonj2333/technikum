#include<iostream>
using namespace std;

class Pracownik{
public:
    string imie;
    string nazwisko;
    void wyswietlDane() {
		cout << "Dane pracownika: " << endl;
		cout << "Imię: " << imie << endl;
		cout << "Nazwisko: " << nazwisko << endl;
	}
};

int main()
{
    //Deklaracja zmiennej wskaźnikowej w_pracownik wskazującej na dowolny obiekt należący do typu Pracownik
    Pracownik *w_pracownik;
    //Utworzenie obiektu typu Pracownik (instancji klasy) wskazywanego przez wskaźnik w_ pracownik
    w_pracownik = new Pracownik(); //pamięć zaalokowana dynamicznie na stercie
    //Nadanie wartości zmiennym członkowskim obiektu pracownik
    w_pracownik->imie = "Jan";
    w_pracownik->nazwisko= "Kowalski";
    //Prezentacja danych zapisanych w zmiennych członkowskich obiektu pracownik na ekranie monitora
    w_pracownik->wyswietlDane();

    //Usunięcie (zniszczenie obiektu) wskazywanego przez wskaźnik w_pracownik
    delete w_pracownik;
    
    return 0;
}