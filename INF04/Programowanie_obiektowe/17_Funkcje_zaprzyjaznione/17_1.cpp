#define _USE_MATH_DEFINES // w celu użycia stałej M_PI
#include <cmath>
#include <iostream>
using namespace std;

//Definicja klasy Kolo
class Kolo{
    //Deklaracja zmiennej członkowskiej (domyślnie prywatnej)
    double _r;
public:
    //Definicje konstruktorów
    Kolo() {}
    Kolo(double r){
        _r = r;
    }
    //Deklaracje (prototypy) funkcji członkowskich.
    void setPromien(double); //setter
    double getPromien(); //gettter
    double pole();
    double obwod();

    // Prototypy funkcji zaprzyjaźnionych
    friend void setPromienFriendKolo(Kolo&, double);
    friend double getPromienFriendKolo(Kolo);
    /* UWAGA:
    Funkcja zaprzyjaźniona musi mieć conajmniej jeden parametr typu obiektowego należący do klasy, której jest przyjacielem.
    Wynika to z faktu, że funkcja zaprzyjaźniona uzyskuje dostęp do prywatnych zmiennych członkowskich klasa za pośrednictwem obiektu będącego jej instacją, który jest argumentem jej wywołania. */
};

//Definicje metod członkowskich klasy Kolo:
void Kolo::setPromien(double r){
    _r = r;
}

double Kolo::getPromien(){
    return _r;
}

double Kolo::pole(){
    return M_PI * _r * _r;
}
double Kolo::obwod(){
    return 2 * M_PI * _r;
}

//Definicje funkcji zaprzyjaźnionych
void setPromienFriendKolo(Kolo &kolo, double r){
    kolo._r = r;
}

double getPromienFriendKolo(Kolo kolo){
    return kolo._r;
}
/* UWAGA
Funkcje zaprzyjaźnione zostały zdefiniowane tutaj jako zwykłe funkcje globalne, które nie zależą do żadnej klasy. Definicje te mogą znajdować się w dowolnym miejscu programu. */

int main() {
    //Utworzenie obiektu kolo1 klasy Kolo
    Kolo kolo1; //niejawne wywołanie kontruktora domyślnego
    //OBSŁUGA OBIEKTU ZA POMOCĄ METOD INSTANCYJNYCH
    kolo1.setPromien(1);
    //Prezentacja wartości zmiennej _r - wywołanie gettera getPromien()
    cout << "Promień koła: " << kolo1.getPromien() << endl;
    //Wyświetlenie pola i obwodu koła kolo1
    cout << "Pole koła: " << kolo1.pole() << endl;
    cout << "Obwód koła: " << kolo1.obwod() << endl;

    //Utworzenie obiektu kolo2 klasy Kolo
    Kolo kolo2; //niejawne wywołanie kontruktora domyślnego

    //OBSŁUGA OBIEKTU ZA POMOCĄ FUNKCJI ZAPRZYJAŹNIONYCH
    //Nadanie wartości prywatnej zmiennej _r - wykorzystanie funkcji zaprzyjaźnionej setPromienFriendKolo()
    setPromienFriendKolo(kolo2, 2);
    /* UWAGA:
    Obiekt kolo2 jest argumentem wywołania funkcji zaprzyjaźnionej setPromienFriendKolo().
    Dostęp do prywatnej zmiennej członkowskiej _r klasy Kolo uzyskuje się za pośrednictwem tego właśnie obiektu. */
    
    //Prezentacja wartości zmiennej _r - wykorzystanie funkcji zaprzyjaźnionej getPromienFriendKolo()
    cout << "Promień koła: " << getPromienFriendKolo(kolo2)<< endl;
    /* UWAGA:
    Obiekt kolo2 jest argumentem wywołania funkcji zaprzyjaźnionej getPromienFriendKolo() */
    
    //Wyświetlenie pola i obwodu koła kolo2
    cout << "Pole koła: " << kolo2.pole() << endl;
    cout << "Obwód koła: " << kolo2.obwod() << endl;

    return 0;
}