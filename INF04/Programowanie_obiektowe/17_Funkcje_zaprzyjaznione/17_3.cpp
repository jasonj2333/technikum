#define _USE_MATH_DEFINES // w celu użycia stałej M_PI
#include <cmath>
#include <iostream>
using namespace std;

//Definicja klasy Promien
class Promien {
private:
    //Deklaracja prywatnej zmiennej członkowskiej
    double _r;
public:
    //Prototypu publicznych funkcji dostępowych:
    void setPromien(double r);
    double getPromien();

    // Deklaracje klas zaprzyjaźnionych
    friend class Kolo;
    friend class Kula;
    /*UWAGA:
    Powyższe deklaracje z użyciem słowa kluczowego friend skutkują ustaleniem relacji przyjaźni pomiędzy klasą
    Promien a klasami Kolo i Kula. Klasy Kolo i Kula stanowią klasy zaprzyjaźnione klasy Promien.*/
};

// Definicje metod klasy Promien:
void Promien::setPromien(double r) { //setter
    _r = r;
}

double Promien::getPromien() { //getter
    return _r;
}

//Definicja klasy Kolo
class Kolo { //Klasa zaprzyjaźniona klasy Promien
public:
    //Deklaracje metod publicznych.
    double pole(Promien);
    double obwod(Promien);
 };



//Definicje metod pole() i obwod klasy Kolo:
double Kolo::pole(Promien promien) {
    return M_PI * promien._r * promien._r;
}
double Kolo::obwod(Promien promien) {
    return 2 * M_PI * promien._r;
}

//Definicja klasy Kula
class Kula { //Klasa zaprzyjaźniona klasy Promien
public:
    //Deklaracje metod publicznych.
    double objetosc(Promien);
    double pole(Promien);
};



//Definicje metod pole() i obwod klasy Kula:
double Kula::objetosc(Promien promien) {
    return double(4)/double(3) * M_PI * promien._r * promien._r * promien._r;
}
double Kula::pole(Promien promien) {
    return 4 * M_PI * promien._r;
}


int main() {
    //Utworzenie obiektu promien będącego instacją klasy Promien
    Promien promien;
    promien.setPromien(1);

    //Utworzenie obiektu kolo klasy Kolo
    Kolo kolo;

    //Obliczenie i wyświetlenie pola i obwodu koła
    cout << "Pole koła: " << kolo.pole(promien) << endl;
    cout << "Obwód koła: " << kolo.obwod(promien) << endl;
    /*UWAGA:
    Za pośrednictwem metod pole() i obwod() obiektu kolo klasy Kolo (która jest klasą zaprzyjaźnioną)
    klasy Promien, uzyskano dostęp do prywatnej zmiennej członkowskiej _r zdefiniowanej w klasie Promien.
    Należy zwrócić uwagę, że argument wywołania metod pole() i obwod() jest obiektem promien klasy Promien.*/

    //Utworzenie obiektu kula klasy Kula
    Kula kula;
    promien.setPromien(2); //wywołanie metody instancyjnej klasy Promien

    //Obliczenie i wyświetlenie pola i obwodu koła
    cout << "Objętość kuli: " << kula.objetosc(promien) << endl;
    cout << "Pole kuli: " << kula.pole(promien) << endl;
    /*UWAGA:
    Dostęp do prywatnej zmiennej członkowskiej _r zdefiniowanej w klasie Promien uzyskano za pomocą metod
    objetosc() i pole() obiektu kula, będącego instacją klasy Kula. Przy tym klasa Kula jest klasą zaprzyjaźnioną
    klasy Promien.
    Obiekt promien klasy Promien jest argumentem wywołania metod objetosc() i pole().*/

    return 0;
}