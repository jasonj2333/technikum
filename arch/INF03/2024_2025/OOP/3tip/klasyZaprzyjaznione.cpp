#define _USE_MATH_DEFINES
#include <iostream>
#include <cmath>

// M_PI

using namespace std;

class Promien {
    double _r;
public:
    void setPromien(double);
    double getPromien();

    friend class Kolo;
    friend class Kula;
};

class Kolo {
public:
    double pole(Promien);
    double obwod(Promien);
};

class Kula {
public:
    double pole(Promien);
    double objetosc(Promien);
};

int main()
{
    Promien promien;
    promien.setPromien(2);

    Kolo kolo;
    cout << "Promien wynosi: " << promien.getPromien() << endl;
    cout << "Pole kola wynosi: " << kolo.pole(promien) << endl;
    cout << "Obwod kola wynosi: " << kolo.obwod(promien) << endl;

    Kula kula;
    cout << "Promien wynosi: " << promien.getPromien() << endl;
    cout << "Pole kula wynosi: " << kula.pole(promien) << endl;
    cout << "Obwod kula wynosi: " << kula.objetosc(promien) << endl;
}

void Promien::setPromien(double r) {
    _r = r;
}

double Promien::getPromien() {
    return _r;
}

double Kolo::pole(Promien promien) {
    return M_PI * promien._r * promien._r;
}
double Kolo::obwod(Promien promien) {
    return 2 * M_PI * promien._r;
}

double Kula::objetosc(Promien promien) {
    return double(4) / double(3) * M_PI * promien._r * promien._r * promien._r;
}
double Kula::pole(Promien promien) {
    return 4 * M_PI * promien._r;
}


