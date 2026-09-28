#include <iostream>
using namespace std;

class Pojazd {
protected:
    int predkosc;
public:
    Pojazd(int p) : predkosc{ p } {}
    void jedz() {
        predkosc += 10;
    }
    int getPredkosc() const {
        return predkosc;
    }
};

class Samochod : public Pojazd {
    int drzwi;
public:
    Samochod(int p, int d) : Pojazd(p), drzwi{d} {}
    int getDrzwi() const {
        return drzwi;
    }
};

int main()
{
    Samochod samochod1(50, 4);
    samochod1.jedz();
    cout << "Aktulna predkosc: " << samochod1.getPredkosc() << endl;
    cout << "Liczba drzwi: " << samochod1.getDrzwi() << endl;
}

