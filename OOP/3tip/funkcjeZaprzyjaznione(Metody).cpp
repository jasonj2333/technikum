#define _USE_MATH_DEFINES
#include <iostream>
#include<cmath>
using namespace std;

class Promien;

class Kolo {
public:
    double pole(Promien pPromien);
    double obwod(Promien pPromien);
};

class Kula {
public:
    double objetosc(Promien);
    double pole(Promien);
};

class Promien {
    double _r;
public:
    void setPromien(double r) {
        _r = r;
    }

    double getPromien() {
        return _r;
    }

    friend double Kolo::pole(Promien);
    friend double Kolo::obwod(Promien);
    friend double Kula::pole(Promien);
    friend double Kula::objetosc(Promien);
};

//Utworzyc klase Kula z metodami pole i objetosc
//Utworzyc relacje przyjazni pomiędzy Promien a w/w metodami

int main()
{
    Promien promien;
    promien.setPromien(2);

    Kolo kolo;
    cout << "Promien: " << promien.getPromien() << endl;
    cout << "Pole kolo: " << kolo.pole(promien) << endl;
    cout << "Obwod kolo: " << kolo.obwod(promien) << endl;

    Kula kula;
    cout << "Promien: " << promien.getPromien() << endl;
    cout << "Pole kuli: " << kula.pole(promien) << endl;
    cout << "Objetosc kuli: " << kula.objetosc(promien) << endl;
}

double Kolo::pole(Promien p) {
    return M_PI * p._r * p._r;
}

double Kolo::obwod(Promien p) {
    return 2 * M_PI * p._r;
}

double Kula::objetosc(Promien p) {
    return double(4) / double(3) * M_PI * p._r * p._r * p._r;
}
double Kula::pole(Promien p) {
    return 4 * M_PI * p._r;
}