#define _USE_MATH_DEFINES
#include <iostream>
#include <cmath>

using namespace std;

class Kolo {
    double _r;
public:
    Kolo(){}
    Kolo(double r) {
        _r = r;
    }

    void setPromien(double);
    double getPromien();
    double pole();
    double obwod();

    friend void setPromienFriendKolo(Kolo&, double);
    friend double getPromienFriendKolo(Kolo);
};

int main()
{
    Kolo kolo1(3);
    cout << "Promien kola wynosi: " << kolo1.getPromien() << endl;
    cout << "Pole kola wynosi: " << kolo1.pole() << endl;
    cout << "Obwod kola wynosi: " << kolo1.obwod() << endl;

    Kolo kolo2;
    kolo2.setPromien(2);
    cout << "Promien kola wynosi: " << kolo2.getPromien() << endl;
    cout << "Pole kola wynosi: " << kolo2.pole() << endl;
    cout << "Obwod kola wynosi: " << kolo2.obwod() << endl;

    Kolo kolo3;
    setPromienFriendKolo(kolo3, 4);
    cout << "Promien kola wynosi: " << getPromienFriendKolo(kolo3)<< endl;
    cout << "Pole kola wynosi: " << kolo3.pole() << endl;
    cout << "Obwod kola wynosi: " << kolo3.obwod() << endl;
    
}

void Kolo::setPromien(double r) {
    _r = r;
}

double Kolo::getPromien() {
    return _r;
}

double Kolo::pole() {
    return M_PI * _r * _r;
}
double Kolo::obwod() {
    return 2 * M_PI * _r;
}

void setPromienFriendKolo(Kolo& kolo, double r) {
    kolo._r = r;
}

double getPromienFriendKolo(Kolo kolo) {
    return kolo._r;
}