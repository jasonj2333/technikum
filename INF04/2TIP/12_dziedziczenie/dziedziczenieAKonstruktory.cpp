#include <iostream>
#include<string>
using namespace std;

class Pojazd {
public:
    string marka;
    int rokProdukcji;

    Pojazd(){}

    Pojazd(string marka, int rokProdukcji) : marka{ marka }, rokProdukcji{rokProdukcji} {}

    string zwrocDane() {
        return marka + ", rok produkcji: " + to_string(rokProdukcji);
    }
};

class Samochod : public Pojazd {
public:
    int liczbaDrzwi;

    //Samochod() {};

    Samochod(string marka, int rokProdukcji, int liczbaDrzwi) {
        this->marka = marka;
        this->rokProdukcji = rokProdukcji;
        this->liczbaDrzwi = liczbaDrzwi;
    }

    Samochod(string marka, int rokProdukcji) : Pojazd(marka, rokProdukcji){
        liczbaDrzwi = 2;
    }

    string zwrocDane() {
        return Pojazd::zwrocDane() + ", liczba drzwi: " + to_string(liczbaDrzwi);
    }
};

int main()
{
    //Pojazd pojazd("Ursus", 1999);
    Samochod samochod("Fiat 126p", 1981, 2);
    cout << samochod.zwrocDane() << endl;

    Samochod samochod2("Ferrari", 1996);
    cout << samochod2.zwrocDane() << endl;
}


