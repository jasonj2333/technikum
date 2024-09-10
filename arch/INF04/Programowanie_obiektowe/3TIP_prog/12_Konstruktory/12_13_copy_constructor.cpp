#include<iostream>
using namespace std;

//Definicja klasy Prostokat
class Prostokat {
    //Deklaracje zmiennych członkowskich
    double bok1, bok2;
public:
    //Prototypy konstruktorów
    Prostokat(); //konstruktor domyslny
    Prostokat(double, double); //konstruktor parametryczny
    Prostokat(const Prostokat&); //konstruktor kopiujący
    
    //Deklaracje (prototypy) funkcji członkowskich
    void pobierzBoki(double&, double&);
    void ustawBoki(double, double);
    double pole();
    double obwod();
};

//Definicje "zwykłych" konstruktorów
Prostokat::Prostokat(){
    cout << "Nastapiło wywołanie konstruktora domyślnego..." << endl;
    bok1 = 2;
    bok2 = 3;
}

Prostokat::Prostokat(double bok1, double bok2) : bok1{bok1}, bok2{bok2} {
    cout << "Nastapiło wywołanie konstruktora parametrycznego..." << endl;
}

//Definicja konstruktora kopiującego
Prostokat::Prostokat(const Prostokat& wzorzec){
    cout << "Nastapiło wywołanie konstruktora kopiującego..." << endl;
    bok1 = wzorzec.bok1;
    bok2= wzorzec.bok2;
}

//Definicje funkcji członkowskich zadeklarowanych w klasie Prostokat
void Prostokat::pobierzBoki(double &pBok1, double &pBok2){
    pBok1 = bok1;
    pBok2 = bok2;
};

void Prostokat::ustawBoki(double pBok1, double pBok2){
    bok1 = pBok1;
    bok2 = pBok2;
};

double Prostokat::pole() {
    return bok1 * bok2;
}

double Prostokat::obwod() {
    return 2 * bok1 + 2 * bok2;
}

//Definicja funkcji zewnętrznej niezależnej od klasy Prostokat
Prostokat kopiujProstokat(Prostokat prostokat){
    return prostokat;
}

//UWAGA:
//Parametrem formalnym funkcji kopiujProstokat() jest obiekt klasy Prostokat, który jest przekazywany do funkcji przez wartość. Dlatego też na stosie podczas wywołania funkcji zostanie wykonana kopia obiektu jako argumentu tego wywołania.
//Funkcja zwraca na zewnątrz obiekt typu Prostokat. Tym samym na stosie w trakcie wywołania tej funkcji ponownie zostanie wykonana kopia obiektu;

int main()
{
    //Zmienne pomocnicze
    double b1, b2;
    
    cout << "Pierwszy prostokat" << endl;
    //Utworzenie obiektu wzorcowego
    Prostokat p1(1, 2); //wywołanie konstruktora parametrycznego
    //Wyświetlenie wartości zmiennych członkowskich obiektu p1
    p1.pobierzBoki(b1, b2);
    cout << "bok1 = " << b1 <<  endl;
    cout << "bok2 = " << b2 <<  endl;
    cout << endl;

    cout << "Drugi prostokat" << endl;
    //Utworzenie obiektu p2 na podstawie obiektu p1
    Prostokat p2 = p1; 
    //UWAGA:
    //Na stosie zostaje utworzony obiekt p2 jako kopia obiektu wzorcowego p1.
    //Konstruktor kopiujący jest wywoływany w sposób niejawny
    p2.pobierzBoki(b1, b2);
    cout << "bok1 = " << b1 <<  endl;
    cout << "bok2 = " << b2 <<  endl;
    cout << endl;

    cout << "Trzeci prostokat" << endl;
    //Utworzenie obiektu p3 na podstawie obiektu p1
    Prostokat p3(p1); 
    //UWAGA:
    //Na stosie zostaje utworzony obiekt p3 nalezacy do klasy Prostokat, jako kopia obiketu wzorcowego p1.
    //Konstruktor kopiujący jest wywoływany w sposób jawny - bezpośredni.
    //Argumentem wywołania konstruktora kopiującego jest referencja do obiektu p1.
    p3.pobierzBoki(b1, b2);
    cout << "bok1 = " << b1 <<  endl;
    cout << "bok2 = " << b2 <<  endl;
    cout << endl;

    cout << "Czwarty prostokat" << endl;
    //Utworzenie obiektu p4 z użyciem konstruktora domyślnego
    Prostokat p4;
    //Skopiowanie obiektu p1 do obiektu p4
    p4 = kopiujProstokat(p1);
    //UWAGA:
    //Konstruktor kopiujący został w tym przypadku wywołany dwukrotnie: pierwszy raz podczas kopiowania argumentu  do funkcji kopiujProstokat(), a drugi - podczas zwracania wartości przez tą funkcje.
    //Obydwa wywołania konstruktora kopiującego są niejawne.

    p4.pobierzBoki(b1, b2);
    cout << "bok1 = " << b1 <<  endl;
    cout << "bok2 = " << b2 <<  endl;
    cout << endl;

    return 0;
}