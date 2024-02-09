#include<iostream>
using namespace std;

//Definicja klasy bazowej Pracownik
class Pracownik {
public:
    //Prototyp metody publicznej zwrocDane()
    void zwrocDane();
};

//Definicja klasy pochodnej Nauczyciel
class Nauczyciel : public Pracownik {
public:
    //Prototyp metody publicznej zwrocDane()
    void zwrocDane();
};

//Definicja klasy pochodnej Wychowawca
class Wychowawca : public Nauczyciel {
public:
    //Prototyp metody publicznej zwrocDane()
    void zwrocDane();
};
//UWAGA:
//W każdej z klas wchodzących w skład łańcucha dziedziczenia zadeklarowano metodę publiczną (zwrocDane())
//o takiej samemej nazwie oraz identycznych parametrach (liczbie i typie) i typach zwracanych wartości.

//Definicje metod
void Pracownik::zwrocDane() {
    cout << "Wywołanie metody zwrocDane() zdefiniowanej w klasie Pracownik" << endl;
}

void Nauczyciel::zwrocDane() {
    cout << "Wywołanie metody zwrocDane() zdefiniowanej w klasie Nauczyciel" << endl;
}

void Wychowawca::zwrocDane() {
    cout << "Wywołanie metody zwrocDane() zdefiniowanej w klasie Wychowawca" << endl;
}

//UWAGA:
//Implemetacja  i funkcjonalność każdej ze zdefiniowanych metod zwrocDane() jest w ogólności dowolna.

int main()
{
    //Utworzenie obiektu pracownik1 jako instacji klasy Pracownik
    Pracownik pracownik1;
    //Wywołanie metody zwrocDane()
    pracownik1.zwrocDane();
    /*UWAGA:
    Powyższe wywołanie dotyczy metody zwrocDane() zdefiniowanej w klasie Pracownik*/

    //Utworzenie obiektu pracownik2 jako instacji klasy Nauczyciel
    Nauczyciel pracownik2;
    //Wywołanie metody zwrocDane()
    pracownik2.zwrocDane();
    /*UWAGA:
    Powyższe wywołanie dotyczy metody zwrocDane() zdefiniowanej w klasie Nauczyciel*/

    //Utworzenie obiektu pracownik3 jako instacji klasy Wychowawca
    Wychowawca pracownik3;
    //Wywołanie metody zwrocDane()
    pracownik3.zwrocDane();
    /*UWAGA:
    Powyższe wywołanie dotyczy metody zwrocDane() zdefiniowanej w klasie Wychowawca*/
    return 0;
}