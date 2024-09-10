#include<iostream>
using namespace std;

struct Data {
    int dd, mm, rr;
};

//Definicja klasy Pracownik
class Pracownik
{
public:
	string imie;
	string nazwisko;
	Data dataUrodzenia{1,1,1900}; //wewnątrz klasowy inicjalizator zmiennej członkowskiej

    //Definicja konstruktora domyślnego
    Pracownik(){
        imie = "Tomek";
        nazwisko = "Atomek";
        dataUrodzenia = {1,1,2001};
    }
    //Definicje konstruktorów parametrycznych
    Pracownik(string pImie, string pNazwisko){
        imie = pImie;
        nazwisko = pNazwisko;
    }

    Pracownik(string pImie, string pNazwisko, Data pDataUrodzenia){
        imie = pImie;
        nazwisko = pNazwisko;
        dataUrodzenia = pDataUrodzenia;
    }


    void wyswietlDane() {
		cout << "Dane pracownika: " << endl;
		cout << "Imię: " << imie << endl;
		cout << "Nazwisko: " << nazwisko << endl;
		cout << "Data urodzenia: " << dataUrodzenia.dd << "." << dataUrodzenia.mm << "." << dataUrodzenia.rr << endl;
	}

};

int main(){
    //Utworzenie obiektu klasy Pracownik
    Pracownik pracownik;
    // UWAGA:
    // Po zaalokowaniu pamięci dla obiektu pracownik został wywołany w sposób niejawny konstruktor domyślny zdefiniowany przez programistę. Zmienne członkowskie tego obiketu została zainicjalizowane wartościami domyślnymi określonymi w definicji tego kontruktora.
    Pracownik pracownik2("Anna", "Nowak");
    // UWAGA:
    // Po zarezrwowaniu pamięci operacyjne dla obiektu pracownik2 został wywołany w sposób niejawny kontruktor parametryczny zdefiniowany przez programistę. Zmienne członkowskie zostały zainicjowane wartościami argumentów wywołania tego kontruktora. Zmienna dataUrodzenia została zainicjowana wartościami domyślnymi jej składowych, które zostały ustalone w obrębie definicji klasy.
    Pracownik pracownik3("Konrad", "Kowalski", {12,7,1999}); 
    //UWAGAL
    //Kontruktor parametryczny został wywołany w sposób niejawny. Wszystkie zmienne członkowskie obiektu pracownik3 zostały zainicjowane zadanymi wartościami argumnetów wywołania tego konstruktora.
    
    //Wyświetlenie wartości zmiennych członkowskich obiektu pracownik.
    pracownik.wyswietlDane();
    return 0;
}