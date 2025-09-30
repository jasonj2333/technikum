#include <iostream>
using namespace std;

int main()
{
    //Konwersja niejawna
    long long zmiennaLong;
    const int stalaInt = 1;

    cout << typeid(zmiennaLong).name() << endl;

    zmiennaLong = stalaInt; //promocja typów 

    //auto zmiennaDouble = stalaInt + 1.5f; //float
    double zmiennaDouble = stalaInt + 1.5f; //double

    cout << typeid(zmiennaDouble).name() << endl;
    cout << zmiennaDouble << endl;

    int zmiennaInt;
    zmiennaInt = zmiennaDouble;
    
    //konwesja z typu większego na mniejszy wiąże się z utratą precyzji
    cout << zmiennaInt << endl;

    //Konwersja jawna
    float zmiennaFloat = 1.5f;
    zmiennaDouble = (double)zmiennaFloat; //rzutowanie
    zmiennaInt = int(zmiennaDouble);
    //C++11
    zmiennaDouble = double{ 5 + 7 };
    zmiennaFloat = static_cast<float>(zmiennaDouble);
}
