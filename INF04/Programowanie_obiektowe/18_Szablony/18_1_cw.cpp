#define _USE_MATH_DEFINES
#include <cmath>
#include<iostream>
//#include <math.h>//M_PI           3.14159265358979323846  /* pi */
using namespace std;

//Definicja szablonu - wzorca funkcji polePr()
template <typename T> //Deklaracja parametru T szablonu
T poleKo(T pPromien, double pi) {
    return (pi * (pPromien * pPromien));
}


//Definicja szablonu - wzorca funkcji obwodPr()
template <typename T> //Deklaracja parametru T szablonu
T obwodKo(T pPromien, double pi) {
    return (2 * pi * pPromien);
}

int main()
{
    float promien{ 1.5 };
    cout << "Wartość liczby pi wynosi: " << M_PI << endl;
    cout << "Pole wynosi: " << poleKo<int>(promien, M_PI) << endl;
    cout << "Obwód wynosi: " << obwodKo<int>(promien, M_PI) << endl;

    cout << endl;
    cout << "Pole wynosi: " << poleKo(promien, M_PI) << endl;
    cout << "Obwód wynosi: " << obwodKo(promien, M_PI) << endl;

    return 0;
}