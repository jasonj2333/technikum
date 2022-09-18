#define _USE_MATH_DEFINES // w celu użycia stałej M_PI
#include <cmath>
#include <iostream>
using namespace std;

//Deklaracja klasy Promien
class Promien;

//Definicja klasy Kolo
class Kolo {
public:
    //Deklaracje metod publicznych.
    double pole(Promien pPromien);
    double obwod(Promien pPromien);
    /*UWAGA:
    Metody pole() i promien() stanowią funkcje zaprzyjaznione klasy Promien*/
};

//Definicja klasy Promien
class Promien {
private:
    //Deklaracja prywatnej zmiennej członkowskiej
    double _r;
public:
    //Definicje publicznych metod dostępowych do zmiennej prywatnej _r:
    void setPromien(double r) { //setter
        _r = r;
    }

    double getPromien() { //getter
        return _r;
    }

    // Prototypy funkcji zaprzyjaźnionych - pole() i obwod() znajdują się klasie Kolo
    friend double Kolo::pole(Promien);
    friend double Kolo::obwod(Promien);
};

//Definicje metod pole() i obwod klasy Kolo:
double Kolo::pole(Promien pPromien) {
    return M_PI * pPromien._r * pPromien._r;
}
double Kolo::obwod(Promien pPromien) {
    return 2 * M_PI * pPromien._r;
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
    Powyżej wywołano metody pole() i obwod(), które stanowią funkcje zaprzyjaźnione klasy Promien*/

    return 0;
}