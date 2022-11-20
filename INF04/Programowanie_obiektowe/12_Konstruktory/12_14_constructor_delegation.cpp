#include<iostream>
using namespace std;

//Definicja klasy Prostokat
class Prostokat {
    //Deklaracje zmiennych członkowskich
    double bok1, bok2;
    string kolor;
public:
    //Prototypy konstruktorów
    Prostokat(); //konstruktor domyslny
    Prostokat(double, double); //konstruktor parametryczny
    
    //Deklaracje (prototypy) funkcji członkowskich
    void wyswietlDane();
    void ustawKolor(string);
};

//Definicja konstruktora domyślnego
Prostokat::Prostokat(){
    cout << "Nastapiło wywołanie konstruktora domyślnego..." << endl;
    //Wywołanie metody ustawKolor()
    ustawKolor("bialy"); //Ustawienie wartości domyślnej zmiennej członkowskiej kolor
}
//Definicja konstruktora parametrycznego
Prostokat::Prostokat(double bok1, double bok2) : bok1{bok1}, bok2{bok2} {
    cout << "Nastapiło wywołanie konstruktora parametrycznego..." << endl;
    //Wywołanie metody ustawKolor()
    ustawKolor("bialy"); //Ustawienie wartości domyślnej zmiennej członkowskiej kolor
}

//UWAGA
//W celu uniknięcia powielania kodu w zdefiniowanych konstruktorach w każdym z nich wywoływana jest ta sama funkcja ustawKolor(), z argumentem "bialy".
//Wartość początkowa "bialy" jest traktowana jako wartość domyślna zmiennej członkowskiej kolor.

//Definicje funkcji członkowskich zadeklarowanych w klasie Prostokat
void Prostokat::wyswietlDane(){
    cout << "Pierwszy bok: " << bok1 << endl;
    cout << "Drugi bok: " << bok2 << endl;
    cout << "Kolor: " << kolor << endl;
};
void Prostokat::ustawKolor(string pKolor){
    kolor = pKolor;
};


int main()
{
    //Utworzenie obiektu p1
    Prostokat p1;
    //Wyświetlenie parametrów prostokąta
    p1.wyswietlDane();
    cout << endl;

    //Utworzenie obiektu p2
    Prostokat p2(1, 2);
    //Wyświetlenie parametrów prostokąta
    p2.wyswietlDane();
    cout << endl;
    //Ustawienie - modyfikacja wartości zmiennej członkowskiej obiektu p2.
    p2.ustawKolor("czarny");
    //UWAGA
    //Modyfikacja wartości prywatnej zmiennej członkowskiej kolor została wykonana przez wywołanie publicznej metody dostępowej ustawKolor();

    //Ponowne wyświetlenie parametrów prostokąta p2
    p2.wyswietlDane();
    cout << endl;
    return 0;
}