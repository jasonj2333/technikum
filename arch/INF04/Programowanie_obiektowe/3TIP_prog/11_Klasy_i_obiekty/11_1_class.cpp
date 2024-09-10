#include<iostream>
using namespace std;

class Pracownik
{
public: //specyfikator dostępu
	//Deklaracja zmiennych członkowskich
	string imie;
	string nazwisko;
	//Definicje funkcji członkowskich
	void wyswietlDane() {
		cout << "Dane pracownika: " << imie << " " << nazwisko << endl;
	}

};

int main()
{
    
    return 0;
}