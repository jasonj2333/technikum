#include <iomanip>
#include<iostream>
using namespace std;

namespace p1
{
    typedef float real;
    const float PI = 3.14159;
}

namespace p2
{
    const double PI = 3.141592;
}

int main()
{
    //Przestrzeń nazw to deklaratywny region (zakres), w którym można deklarować i definiować różne elementy (jednostki) programu (typy danych, zmienne, stałe funkcje itp.) o określonych identyfikatorach. 
    // Przestrzeń nazw pozwala na grupowanie tych jednostek pod względem logicznym. Jeżeli dana jednostka np. stała, została zdefiniowana w określonej przestrzeni nazw, to zasięg - zakres (scope) - jej identyfikatora odnosi się wyłącznie do tej przestrzeni nazw.
    //Przestrzenie nazw pozwają podzielić zakres globalny na mniejsze zakresy z których każda ma swoją nazwę.


    cout << p1::PI << endl;
    cout << setprecision(8) << p2::PI << endl;

    return 0;
}