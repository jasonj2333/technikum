#include<iostream>
using namespace std;

//Definicja szblonu klasy Prostokąt
template<class T>
//UWAGA:
//Parametr szablonu klasy prostokąt jest uogólnionym typem danych T. To jedyny parametr tego szablonu.
class Prostokat {
public:
    //Deklaracje szablonów zmiennych członkowskich
    T bok1, bok2;
    //Definicja (szablonu) metody pole()
    T pole() {
        return bok1 * bok2;
    }
    //Deklaracja (szablonu) metody obwod()
    T obwod();
};

//Definicja (szablonu) metody obwod()
template <class T>
T Prostokat<T>::obwod() {
    return 2 * bok1 + 2 * bok2;
}

int main()
{
    //Utworzenie obiektu prostokat1
    Prostokat<float> prostokat1 { 1, 2 };//inicjalizacja listowa bezpośrednia
    /*UWAGA:
    Szablon klasy prostokąt został skonkretyzowany do typu rzeczywistego float. Innymi słowy została utworzona instancja
    szablonu klasy Prostokat skonkretyzowana do typu float.
    Literały całkowite 1 oraz 2, będące argumentami wywołania konstruktora obiektu prostokat1, zostają poddane niejawnej
    konwersji na literały rzeczywiste (konwersja rozszerzająca). */
    cout << "Pole wynosi: " << prostokat1.pole() << endl; //2
    cout << "Obwód wynosi: " << prostokat1.obwod() << endl; //6
    /*UWAGA:
    Funkcje członkowskie pole() i obwod() zwracają na zewnątrz wartości typu float. Wynika to z faktu, że kompilator
    jest w stanie samodzielnie wybrać typ wartości zwracanych przez te funkcje na podstawie typu danych, na których operują.*/


    //Utworzenie obiektu prostokat1
    Prostokat<double> prostokat2{ 1.0, 2.0 };
    /*UWAGA:
    Została utworzona instancja szablonu klasy Prostokat skonkretyzowana dla typu rzeczywistego double*/
    cout << "Pole wynosi: " << prostokat2.pole() << endl; 
    cout << "Obwód wynosi: " << prostokat2.obwod() << endl; 
    /*UWAGA:
    Funkcje członkowskie pole() i obwod() zwracają na zewnątrz wartości double.*/
    return 0;
}