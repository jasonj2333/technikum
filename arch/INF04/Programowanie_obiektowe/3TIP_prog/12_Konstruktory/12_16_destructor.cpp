#include<iostream>
using namespace std;
//Definicja klasy Pracownik
class Pracownik
{
    //Deklaracje prywatnych zmiennych członkowskich
	string imie;
	string nazwisko;
public:
    //Prototyp konstruktora domyślnego
    Pracownik();
    //Prototyp konstruktora parametrycznego 
    Pracownik(string, string);
    //Prototyp destruktora
    ~Pracownik();
    // - w klasie można zdefiniować tylko jeden destruktor
    // - destruktor nie ma żadnych parametrów(argumentów)
    // - destruktor nie zwraca do swojego otoczenia żadnej wartości
    // - destruktor nie może być zadeklarowany jako static albo const
    //Destruktory są wywoływane automatycznie w sposób niejawny w sytuacji gdy obiekt jest niszczony lub usuwany tj.:
    // - w chwili zakończenia programu (z wyjątkiem awaryjnego zabicia aplikacji)
    // - w chwili zakończenia wywoływania funkcji, w której obiekt został zdefiniowany (w przypadku inicjalizacji na stosie)
    // - na końcu bloku kodu, w którym obiekt został zdefiniowany (w przypadku inicjalizacji na stosie)
    // - w chwili wywołania operatora delete

    //Prototyp funkcji członkowskiej
    void wyswietlDane();

};
//Prototyp funkcji pomocnicznej
void funkcjaPomocnicza();

int main(){
    {//Początek bloku
      //Utworzenie obiektu klasy Pracownik
        Pracownik pracownik1; 
        pracownik1.wyswietlDane();  
    } //koniec bloku
    //UWAGA:
    //Koniec bloku, oznacza koniec życia obiektu pracownik1, co wiąże się z wywołaniem destruktora i zniszczeniem obiektu;
    cout << endl;
    
    //Utworzenie obiektu typu Pracownik wskazywanego przez wskaźnik w_pracownik2:
    Pracownik *w_pracownik2 = new Pracownik("Jan", "Kowalski");
    w_pracownik2->wyswietlDane();
    //Usunięcie obiektu wskazywanego przez wskaźnik w_pracownik2
    delete w_pracownik2;
    // UWAGA:
    // Użycie operatora delete spowoduje wywołanie destruktora obiektu.
    cout << endl;

    //Wywołanie zewnętrznej funkcji pomocnicznej
    funkcjaPomocnicza();
    cout << endl;
    cout << "Wykonanie pozostałych instrukcji w programie..." <<endl;
    return 0;
}

Pracownik::Pracownik(){
    cout << "Nastapiło wywołanie konstruktora domyślnego..." << endl;
    imie = "Tomek";
    nazwisko = "Atomek";
}

Pracownik::Pracownik(string pImie, string pNazwisko){
    cout << "Nastapiło wywołanie konstruktora parametrycznego..." << endl;
    imie = pImie;
    nazwisko = pNazwisko;
}

Pracownik::~Pracownik(){
    cout << "Nastapiło wywołanie destruktora..." << endl;
}

void Pracownik::wyswietlDane() {
		cout << "Dane pracownika: " << endl;
		cout << "Imię: " << imie << endl;
		cout << "Nazwisko: " << nazwisko << endl;
}

void funkcjaPomocnicza(){
    cout << "Nastapiło wywołanie funkcji pomocnicznej..." << endl;
    Pracownik pracownik;
    pracownik.wyswietlDane();
}