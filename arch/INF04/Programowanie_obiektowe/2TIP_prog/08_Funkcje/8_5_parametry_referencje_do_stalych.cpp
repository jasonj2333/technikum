#include<iostream>
using namespace std;

//Prorotypy funkcji
float polePr(const float&, const float&); // Parametry wejściowe jako referencje do stałych const typu float
float obwodPr(const float&, const float&); // Parametry wejściowe jako referencje do stałych const typu float

int main()
{
    //Boki prostokąta
    float bok1 = 1;
    float bok2 = 2;

    //Wywołanie funkcji polePr()
    float pole = polePr(bok1, bok2);
    cout << "Pole = " << pole << endl;

    //Wywołanie funkcji polePr()
    float obwod = obwodPr(bok1, bok2);
    cout << "Obwod = " << obwod << endl;
    return 0;
}

//Definicje funkcji PolePr() i obwodPr()
float polePr(const float& b1, const float& b2) {
    //Modyfikacje wartości parametrów b1 i b2 nie jest możliwa, ponieważ mają one status "read only"
    return b1 * b2; //funkcja zwraca na zewnątrz wartość wyrażenia b1 * b2
}

float obwodPr(const float& b1, const float& b2) {
    //Modyfikacje wartości parametrów b1 i b2 nie jest możliwa, ponieważ mają one status "read only"
    return 2 * b1 + 2 * b2; //funkcja zwraca na zewnątrz wartość wyrażenia 2 * b1 + 2 * b2
}

//Przekazywanie parametrów do funkcji za pomocą referencji do stałych const jest zalecane dla dużych porcji danych np. C-struktur