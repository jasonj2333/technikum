#define _USE_MATH_DEFINES
#include <cmath>
#include<iostream>
using namespace std;

//Definicja szablonu - wzorca funkcji polePr()
template <typename T> //Deklaracja parametru T szablonu
T poleKo(T pPromien) {
    return (M_PI * (pPromien * pPromien));
}


//Definicja szablonu - wzorca funkcji obwodPr()
template <typename T> //Deklaracja parametru T szablonu
T obwodKo(T pPromien) {
    return (2 * M_PI * pPromien);
}

int main()
{
    float promien{ 1.5 };
    cout << "Pole wynosi: " << poleKo<int>(promien) << endl;
    cout << "Obwód wynosi: " << obwodKo<int>(promien) << endl;

    cout << endl;
    cout << "Pole wynosi: " << poleKo(promien) << endl;
    cout << "Obwód wynosi: " << obwodKo(promien) << endl;

    return 0;
}