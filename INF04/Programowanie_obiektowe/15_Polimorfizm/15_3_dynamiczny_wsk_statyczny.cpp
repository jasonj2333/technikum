#include<iostream>
using namespace std;

//Definicja klasy bazowej Pracownik
class Pracownik {
public:
    string imie, nazwisko;
    //Prototyp metody publicznej zwrocDane()
    void zwrocDane();
};

//Definicja klasy pochodnej Nauczyciel
class Nauczyciel : public Pracownik {
public:
    string przedmiot;
    //Prototyp metody publicznej zwrocDane()
    void zwrocDane();
};

//Definicja klasy pochodnej Wychowawca
class Wychowawca : public Nauczyciel {
public:
    string klasa;
    //Prototyp metody publicznej zwrocDane()
    void zwrocDane();
};
//UWAGA:
//W każdej z klas wchodzących w skład łańcucha dziedziczenia zadeklarowano metodę publiczną (zwrocDane())
//o takiej samej nazwie oraz identycznych parametrach (liczbie i typie) i typach zwracanych wartości.

//Definicje metod
void Pracownik::zwrocDane() {
    cout << "Wywołanie metody zwrocDane() zdefiniowanej w klasie Pracownik" << endl;
    cout << "Imię: " << imie << endl;
    cout << "Nazwisko: " << nazwisko << endl;
}

void Nauczyciel::zwrocDane() {
    cout << "Wywołanie metody zwrocDane() zdefiniowanej w klasie Nauczyciel" << endl;
    cout << "Imię: " << imie << endl;
    cout << "Nazwisko: " << nazwisko << endl;
    cout << "Przedmiot: " << przedmiot << endl;
}

void Wychowawca::zwrocDane() {
    cout << "Wywołanie metody zwrocDane() zdefiniowanej w klasie Wychowawca" << endl;
    cout << "Imię: " << imie << endl;
    cout << "Nazwisko: " << nazwisko << endl;
    cout << "Przedmiot: " << przedmiot << endl;
    cout << "Klasa: " << klasa << endl;
}

//UWAGA:
//Implemetacja i funkcjonalność każdej ze zdefiniowanych metod zwrocDane() jest w dowolna.

int main()
{
    //Deklaracja wskaźnika w_pracownik typu statycznego Pracownik
    Pracownik *w_pracownik;
    /*UWAGA:
    Zmienna w_pracownik jest zmienną statyczną, która może wskazywać (z definicji) na obiekty typu bazowego
    Pracownik oraz obiekty klas pochodnych klasy Pracownik czyli obiekty klas Nauczyciel i Wychowawca*/

    //Utworzenie obiektu pracownik1 jako instacji klasy Pracownik
    Pracownik pracownik1;
    //Przypisane wskaźnikowi w_pracownik adresu obiektu pracownik1
    w_pracownik = &pracownik1;
    //Nadanie wartości zmiennym członkowskim obiektu pracownik1
    w_pracownik->imie = "Jan";
    w_pracownik->nazwisko = "Kowalski";
    //Wywołanie metody zwrocDane()
    w_pracownik->zwrocDane(); //zostaje wywołana metoda z klasy bazowej Pracownik
    cout << endl;

    //Utworzenie obiektu pracownik2 jako instacji klasy Nauczyciel
    Nauczyciel pracownik2;
    //Przypisane wskaźnikowi w_pracownik adresu obiektu pracownik2
    w_pracownik = &pracownik2;
    //Nadanie wartości zmiennym członkowskim obiektu pracownik2
    w_pracownik->imie = "Adam";
    w_pracownik->nazwisko = "Nowak";
    /*UWAGA:
    Użycie dereferencji w_pracownik-> pozwala jedynie uzyskać dostęp do elementów członkowskich klasy
    Nauczyciel odziedziczonych po klasie bazowej Pracownik - czyli zmiennych imie i nazwisko.
    Dostęp do elementów członkowskich zdefiniowanych bezpośrednio w klasie pochodnej Nauczyciel nie jest
    możliwy. Tym samym próba wykonania przypisania:
    w_pracownik->przedmiot = "Informatyka";
    zakończy się komunikatem o błędzie i informacją, że klasa Pracownik nie zawiera elementu członkowskiego
    przedmiot.*/

    //Wywołanie metody zwrocDane()
    w_pracownik->zwrocDane(); //zostaje wywołana metoda odziedziczona po klasie bazowej Pracownik
    cout << endl;
    
    //Utworzenie obiektu pracownik3 jako instacji klasy Wychowawca
    Wychowawca pracownik3;
    //Przypisane wskaźnikowi w_pracownik adresu obiektu pracownik2
    w_pracownik = &pracownik3;
    //Nadanie wartości zmiennym członkowskim obiektu pracownik3
    w_pracownik->imie = "Alicja";
    w_pracownik->nazwisko = "Zielińska";
    //w_pracownik->przedmiot = "Informatyka"; //Instukcja błędna!
    //w_pracownik->klasa = "3A"; //Instukcja błędna!
    

    //Wywołanie metody zwrocDane()
    w_pracownik->zwrocDane(); //zostaje wywołana metoda odziedziczona po klasie bazowej Pracownik
    cout << endl;
    
    /*PODSUMOWANIE:
    W programie nie występuje przesłanianie metody zwrocDane(). Metoda ta jest metodą jednopostaciową (definicja
    z klasy bazowej), a nie wielopostaciową - jeśli spojrzeć z perspektywy jej wywołania za pośrednictwem
    wskaźnika w_pracownik. Tym samym żaden polimorfizm tutaj nie zachodzi.*/
    return 0;
}