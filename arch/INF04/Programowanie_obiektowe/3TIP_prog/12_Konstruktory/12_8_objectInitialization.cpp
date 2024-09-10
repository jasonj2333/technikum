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
	Data dataUrodzenia{1,1,1900}; 

    Pracownik(string pImie = "Tomek", string pNazwisko = "Atomek", Data pDataUrodzenia = {1,1,2001}){
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
    Pracownik pracownik2("Anna", "Nowak"); 
    Pracownik pracownik3("Konrad", "Kowalski", {12,7,1999}); 
    
    
    //Wyświetlenie wartości zmiennych członkowskich obiektu pracownik.
    pracownik3.wyswietlDane();
    return 0;
}