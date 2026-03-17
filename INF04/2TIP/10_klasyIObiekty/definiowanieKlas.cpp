#include <iostream>
using namespace std;

struct Data {
    int dd, mm, rr;
};

class Pracownik {
    //zmienne czlonkowskie
    string imie;
    string nazwisko;
    Data dataZatrudnienia;
public:    
    //funkcje członkowskie - metody
    void wyswietlDane() {
        cout << "Dane pracownika: " << imie << " " << nazwisko << endl;
        cout << "Data zatrudnienia: " << dataZatrudnienia.dd << "." << dataZatrudnienia.mm << "." << dataZatrudnienia.rr << endl;
    }

    //Akcesory - publiczne metody dostepowe
    //Settery
    void ustawImie(string); //Deklaracja funkcji
    void ustawNazwisko(string);
    void ustawDateZatrudnienia(Data);
    //Gettery
    string zwrocImie();
    string zwrocNazwisko();
};

int main()
{
    Pracownik pracownik1;
    //pracownik1.imie = "Tomek";
    //pracownik1.nazwisko = "Atomek";
    pracownik1.ustawImie("Tomek");
    pracownik1.ustawNazwisko("Atomek");
    cout << pracownik1.zwrocImie() << endl;
    pracownik1.ustawDateZatrudnienia({ 17, 3, 2026 });
    pracownik1.wyswietlDane();
}


void Pracownik::ustawImie(string pImie) {
    imie = pImie;
}

void Pracownik::ustawNazwisko(string nazwisko) {
    this->nazwisko = nazwisko;
}

void Pracownik::ustawDateZatrudnienia(Data data) {
    dataZatrudnienia = data;
}

string Pracownik::zwrocImie() {
    return imie;
}
string Pracownik::zwrocNazwisko() {
    return nazwisko;
}