#include<iostream>
using namespace std;

struct Data {
    int dd, mm, rr;
};

//Definicja klasy Pracownik
class Pracownik
{
    //Deklaracje prywatnych zmiennych członkowskich
	string imie;
	string nazwisko;
	Data dataUrodzenia{1,1,1900}; 
public:
    //Prototyp konstruktora domyślnego
    Pracownik();
    //Prototyp konstruktora parametrycznego - 2 parametry - imie  i nazwisko, dataUrodzenia będzie miała domyślną wartość z definicji zmiennej klasowej
    Pracownik(string, string);
    //Prototyp konstruktora parametrycznego - 3 parametry (wszystkie)
    Pracownik(string, string, Data);

    //Prototyp funkcji członkowskiej
    void wyswietlDane();

};

int main(){
    //Utworzenie obiektu klasy Pracownik
    Pracownik pracownik; 
    Pracownik pracownik2("Anna", "Nowak"); 
    Pracownik pracownik3("Konrad", "Kowalski", {12,7,1999}); 
    
    
    //Wyświetlenie wartości zmiennych członkowskich obiektu pracownik.
    pracownik3.wyswietlDane();
    return 0;
}

Pracownik::Pracownik(){
    imie = "Tomek";
    nazwisko = "Atomek";
    dataUrodzenia = {1,1,2001};
}

Pracownik::Pracownik(string pImie, string pNazwisko){
    imie = pImie;
    nazwisko = pNazwisko;
}

Pracownik::Pracownik(string pImie, string pNazwisko, Data pDataUrodzenia){
    imie = pImie;
    nazwisko = pNazwisko;
    dataUrodzenia = pDataUrodzenia;
}

void Pracownik::wyswietlDane() {
		cout << "Dane pracownika: " << endl;
		cout << "Imię: " << imie << endl;
		cout << "Nazwisko: " << nazwisko << endl;
		cout << "Data urodzenia: " << dataUrodzenia.dd << "." << dataUrodzenia.mm << "." << dataUrodzenia.rr << endl;
	}