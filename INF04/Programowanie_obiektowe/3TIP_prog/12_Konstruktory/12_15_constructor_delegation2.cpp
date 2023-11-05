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
    //Inicjalizacja zmiennej członkowskiej kolor
    kolor = "bialy";
}
//Definicja konstruktora parametrycznego z delegacją konstruktora domyślnego
Prostokat::Prostokat(double bok1, double bok2) : Prostokat::Prostokat() {
    cout << "Nastapiło wywołanie konstruktora parametrycznego..." << endl;
    this->bok1 = bok1;
    this->bok2 = bok2;
}

//UWAGA
//W celu uniknięcia powielania kodu który jest zawarty w konstruktorze domyślnym, wywołanie konstruktora domyślnego umieszczono na liście inicjalizacyjnej konstruktora parametrycznego

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