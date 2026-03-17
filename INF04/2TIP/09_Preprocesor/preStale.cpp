#include <iostream>
using namespace std;

//#define PI 3.1415
#define NATURALNA unsigned int
#define LOGICZNA bool
//#define KWADRAT(x) x*x
#define DEBUG
#define SYSTEM 2

const double PI = 3.14;

constexpr int KWADRAT(int x) {
    return x * x;
}

int main()
{
    cout << PI << endl;
    cout << "Pole kola o promieniu 5 wynosi: " << PI * 5 * 5 << endl;

    NATURALNA liczba = 50;
    LOGICZNA wynik = (liczba > 0) ? true : false;
    cout << boolalpha;
    cout << wynik << endl;

    cout << KWADRAT(5) << endl;
    cout << KWADRAT(2.5) << endl;

    //Dyrektywy kompilacji warunkowej
#ifdef DEBUG
    cout << "Tryb debug" << endl;
#endif // DEBUG

#ifndef DEBUG
    cout << "Tryb produkcyjny" << endl;
#endif // !DEBUG

#if SYSTEM == 1
    cout << "Windows" << endl;
#elif SYSTEM == 2
    cout << "Linux" << endl;
#else
    cout << "Inny system" << endl;
#endif
}
