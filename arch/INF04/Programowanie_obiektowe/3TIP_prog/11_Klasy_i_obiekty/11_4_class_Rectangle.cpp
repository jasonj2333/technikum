#include<iostream>
using namespace std;

//Definicja klasy Prostokat
class Prostokat {
public://Wszystkie zmienne członkowskie są publiczne
    //Deklaracje zmiennych członkowskich
    float bok1, bok2;
    //Deklaracje (prototypy) funkcji członkowskich
    float pole();
    float obwod();
};

//Definicje funkcji członkowskich zadeklarowanych w klasie Prostokat
float Prostokat::pole() {
    return bok1 * bok2;
}

float Prostokat::obwod() {
    return 2 * bok1 + 2 * bok2;
}

int main()
{
    //Utworzenie obiektu prostokat jako instancji klasy Prostokat
    Prostokat prostokat;

    //Przypisanie zadanych wartości do zmiennych członkowskich obiektu prostokat
    prostokat.bok1 = 1;
    prostokat.bok2 = 2;
    //Kontrolne wyświetlenie długości boków prostokąta
    cout << "Pierwszy bok = " << prostokat.bok1 << endl;
    cout << "Drugi bok = " << prostokat.bok2 << endl;

    //Obliczenie pola i obwodu prostokąta i wyświetlenie ich wartości na ekranie monitora
    cout << "Pole wynosi: " << prostokat.pole() << endl; //odwołanie się do metody pole()
    cout << "Obwód wynosi: " << prostokat.obwod() << endl; //odwołanie się do metody obwod()

    return 0;
}