#include<iostream>
using namespace std;


//Definicja klasy Pracownik
class Pracownik {
private:
    //Deklaracja zmiennych członkowskich
    string imie, nazwisko;
    string stanowisko;
    int nr_legit;
    /*UWAGA:
    Szczegóły implemetacji danych pracownika przechowywanych w zmiennych członkowskich
    nie są dostępne dla świata zewnętrzego - są ukryte i niedostępne bezpośrednio dla kodu otoczenia klasy.*/
public: 
    //Definicje publicznych getterów i setterów
    void setImie(string pImie) {
        this->imie = pImie;
    }
    string getImie() {
        return this->imie;
    }
    void setNazwisko(string pNazwisko) {
        this->nazwisko = pNazwisko;
    }
    string getNazwisko() {
        return this->nazwisko;
    }
    void setStanowisko(string pStanowisko) {
        this->stanowisko = pStanowisko;
    }
    string getStanowisko() {
        return this->stanowisko;
    }
    void setNrLegit(int pNrLegit) {
        const int temp = 1000;
        this->nr_legit = pNrLegit + temp;
    }
    int getNrLegit() {
        return this->nr_legit;
    }
    /*UWAGA:
    Settery i Gettery stanowią publiczny interfejs danych pracownika, odpowiadających prywatnym
    zmiennym członkowskim klas.*/
};

//Definicja zwyklej funkcji, niezależnej od klasy Pracownik
void wyswietlDane(Pracownik pPracownik) {
    cout << "Imię: " << pPracownik.getImie() << endl;
    cout << "Nazwisko: " << pPracownik.getNazwisko() << endl;
    cout << "Stanowisko: " << pPracownik.getStanowisko() << endl;
    cout << "Nr Legitymacji: " << pPracownik.getNrLegit() << endl;
}


int main()
{
    //Utworzenie obiektu pracownik jako instacji klasy Pracownik
    Pracownik pracownik;

    //Nadanie wartości zmiennym członkowskim obiektu pracownik
    pracownik.setImie("Jan"); 
    pracownik.setNazwisko("Kowalski");
    pracownik.setStanowisko("nauczyciel");
    pracownik.setNrLegit(12);
    /*UWAGA:
    Ustalenie/zmiana danych pracownika jest realizowana za pomocą publicznych danych dostępowych - setterów.
    Metody te stanowią interfejs wspomnianych danych, które, jako prywatne, nie są dostępne w sposób bezpośredni
    w otoczeniu klasy.*/
    
    //Prezentacja danych pracownika:
    cout << "Dane pracownika: " << endl;
    //Wywołanie funkcji wyswietlDane() niezależnej od klasy Pracownik
    wyswietlDane(pracownik);

  
    return 0;
}