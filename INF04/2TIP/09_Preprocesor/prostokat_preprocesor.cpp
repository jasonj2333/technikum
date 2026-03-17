#include <iostream>
using namespace std;

#define DLUGOSC 10
#define SZEROKOSC 5
#define DEBUG

int main()
{
    int pole = DLUGOSC * SZEROKOSC;

#ifdef DEBUG
    cout << "Dlugosc wynosi: " << DLUGOSC << endl;
    cout << "Szerokosc wynosi: " << SZEROKOSC << endl;
#endif //DEBUG
    cout << "Pole wynosi: " << pole << endl;
}
