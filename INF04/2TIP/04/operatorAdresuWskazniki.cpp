#include <iostream>
using namespace std;

int main()
{
    int zmiennaInt = 10;
    cout << "Informacje o zmiennej: " << endl;
    cout << "Wartosc zmiennej: " << zmiennaInt << endl;
    cout << "Rozmiar (w bajtach): " << sizeof(zmiennaInt) << endl;
    cout << "Adres: " << &zmiennaInt << endl;

    float zmiennaFloat = 10.7;
    cout << "Informacje o zmiennej: " << endl;
    cout << "Wartosc zmiennej: " << zmiennaFloat << endl;
    cout << "Rozmiar (w bajtach): " << sizeof(zmiennaFloat) << endl;
    cout << "Adres: " << &zmiennaFloat << endl;

    double zmiennaDouble = 10.7;
    cout << "Informacje o zmiennej: " << endl;
    cout << "Wartosc zmiennej: " << zmiennaDouble << endl;
    cout << "Rozmiar (w bajtach): " << sizeof(zmiennaDouble) << endl;
    cout << "Adres: " << &zmiennaDouble << endl;

    long long int zmiennaLInt = 621321312312;
    cout << "Informacje o zmiennej: " << endl;
    cout << "Wartosc zmiennej: " << zmiennaLInt << endl;
    cout << "Rozmiar (w bajtach): " << sizeof(zmiennaLInt) << endl;
    cout << "Adres: " << &zmiennaLInt << endl;
    
    //Wskaźniki - pointers
    int jPolski, matematyka;

    int* w_jPolski{}; //wskaźnik - zainicjonawany wartością adresu 0, nullptr;
    w_jPolski = &jPolski; //teraz nasz wskaźnik wskazuje na zmienną jPolski

    int* w_matematyka{ &matematyka };

    cout << "Podaj ocene z j. polskiego: "; cin >> jPolski;
    cout << "Ocena z polskiego: " << jPolski << endl;
    cout << "Adres zmiennej jPolski: " << w_jPolski << endl;
    cout << "Ocena z polskiego (wskaznik): " << *w_jPolski << endl; //operator dereferencji

    cout << "Podaj ocene z matmy: "; cin >> matematyka;
    cout << "Ocena z matmy: " << matematyka << endl;
    cout << "Adres zmiennej jPolski: " << w_matematyka << endl;
    cout << "Ocena z matmy (wskaznik): " << *w_matematyka << endl; //operator dereferencji
}
