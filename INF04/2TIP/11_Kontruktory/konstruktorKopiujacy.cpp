#include <iostream>

using namespace std;

class Prostokat {
    double bok1, bok2;
public:
    Prostokat();
    Prostokat(double, double);
    Prostokat(const Prostokat&); //konstruktor kopiujący

    double pole();
    double obwod();
};

int main()
{
    Prostokat prostokat1;
    Prostokat prostokat2(5, 6);
    Prostokat prostokat3(prostokat1); //konstruktor kopiujacy - wywolany jawnie
    Prostokat prostokat4 = prostokat2;//konstruktor kopiujacy - wywolany niejawnie
}

Prostokat::Prostokat() {
    cout << "Nastapilo wywolanie konstruktora domyslnego" << endl;
    bok1 = 2;
    bok2 = 2;
}

Prostokat::Prostokat(double bok1, double bok2) : bok1{ bok1 }, bok2{ bok2 } {
    cout << "Nastapilo wywolanie konstruktora parametrycznego" << endl;
}

Prostokat::Prostokat(const Prostokat& wzorzec) {
    cout << "Nastapilo wywolanie konstruktora kopiujacego" << endl;
    bok1 = wzorzec.bok1;
    bok2 = wzorzec.bok1;
}

double Prostokat::pole(){
    return bok1 * bok2;
}

double Prostokat::obwod(){
    return (bok1 + bok2) * 2;
}
