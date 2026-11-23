#define _USE_MATH_DEFINES // M_PI
#include <iostream>
#include <cmath>

using namespace std;

class Promien;

class Kolo {
public:
    double pole(Promien pPromien);
    double obwod(Promien pPromien);
};

class Kula {
public:
    double pole(Promien pPromien);
    double objetosc(Promien pPromien);
};

class Promien {
private:
    double r;
public:
    Promien(double r) : r(r) {}

    double getPromien();
    void setPromien(double r);

    friend double Kolo::pole(Promien);
    friend double Kolo::obwod(Promien);
    friend Kula;
};

int main()
{
    Promien p(5);
    Kolo kolo;
    Kula kula;

    cout << "Pole kola: " << kolo.pole(p) << endl;
    cout << "Obwod kola: " << kolo.obwod(p) << endl;
    cout << "Pole kuli: " << kula.pole(p) << endl;
    cout << "Objetosc kula: " << kula.objetosc(p) << endl;
}

double Kolo::pole(Promien pPromien) {
    return pPromien.r * pPromien.r * M_PI;
}

double Kula::pole(Promien pPromien) {
    return 4 * pPromien.r * pPromien.r * M_PI;
}

double Kula::objetosc(Promien pPromien) {
    return 4/3 * pPromien.r * pPromien.r * pPromien.r * M_PI;
}

double Kolo::obwod(Promien pPromien) {
    return 2 * pPromien.r * M_PI;
}

double Promien::getPromien() {
    return r;
}

void Promien::setPromien(double r) {
    this->r = r;
}

