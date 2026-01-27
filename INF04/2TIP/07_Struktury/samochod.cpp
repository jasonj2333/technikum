#include <iostream>
using namespace std;

//Utwórz struckturę Car zawierającą pola:
//- brand
//- model
//- year
//- price
//- dateFirstRegistration (struct Data)

struct Data
{
    unsigned int dd, mm, yy;
};

struct Car
{
    string brand, model;
    int year;
    int price;
    Data dateFirstRegistration;
};

int main()
{
    Car maluch = { "Fiat", "126p", 1980, 15000, {1,1,1981} };
    Car polonez = { "FSO", "Polonez 1500", 1985, 12000, {1,12,1985} };
    Car skoda = { "Skoda", "120L", 1984, 9000, {1,9,1984} };
    
    Car komis[] = { maluch, polonez, skoda };

    for (Car car : komis) {
        cout << "Samochod: " << endl;
        cout << car.brand << " - " << car.model << endl;
        cout << "Rocznik: " << car.year << endl;
        cout << "Cena: " << car.price << endl;
        cout << "Data pierwszej rejestracji: " << car.dateFirstRegistration.dd << "." << car.dateFirstRegistration.mm << "." << car.dateFirstRegistration.yy << endl;
        cout << " ------------------------ " << endl;
    }
}

