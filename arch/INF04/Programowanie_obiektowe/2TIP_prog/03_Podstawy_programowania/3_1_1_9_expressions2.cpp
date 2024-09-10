#include<iostream>
using namespace std;

int main()
{
    //Konwersja jawna - zdefiniowana przez użytkownika - rzutowanie typów

    //Deklaracja i inicjalizacja zmiennej typu float
    float zmiennaFloat = 1.5f;

    //Deklaracja zmiennej typu double
    double zmiennaDouble;
    zmiennaDouble = (double)zmiennaFloat; //rzutowanie w stylu języka C++
    //UWAGA:
    // W wyrażeniu powyżej występuje jawna konwersja typu wartości zmiennej zmiennaFloat z typu float na double (z mniejszego na większy);

    //Deklaracja zmiennej typu int
    int zmiennaInt = int(zmiennaDouble);//notacja funkcyjna

    //Rzutowanie typu w stylu C++ 11
    //zmiennaFloat = float{ zmiennaDouble + 1 };
    zmiennaDouble = double{ zmiennaFloat + 1 };

    zmiennaFloat = static_cast<float>(zmiennaDouble);

    return 0;
}