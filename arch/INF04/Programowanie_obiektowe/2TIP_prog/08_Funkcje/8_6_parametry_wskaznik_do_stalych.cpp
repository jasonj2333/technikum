#include<iostream>
using namespace std;

//Prorotypy funkcji
float polePr(const float*, const float*); // Parametry wejściowe jako wskaźnik do stałych const typu float
float obwodPr(const float*, const float*); // Parametry wejściowe jako wskaźnik do stałych const typu float

int main()
{
    //Boki prostokąta
    float bok1 = 1;
    float bok2 = 2;

    //Deklaracje wskazników wskazujących na zmienne bok1 i bok2
    float *w_bok1 = &bok1;
    float *w_bok2 = &bok2;

    //Wywołanie funkcji polePr() z parametrami aktualnymi (argumentami) w_bok1, w_bok2
    float pole = polePr(w_bok1, w_bok2);
    cout << "Pole = " << pole << endl;

    //Wywołanie funkcji polePr()
    float obwod = obwodPr(w_bok1, w_bok2);
    cout << "Obwod = " << obwod << endl;
    return 0;
}

//Definicje funkcji PolePr() i obwodPr()
float polePr(const float *b1, const float *b2) {
    //Modyfikacje wartości parametrów *b1 i *b2 nie jest możliwa, ponieważ mają one status "read only"
    return *b1 * *b2; //funkcja zwraca na zewnątrz wartość wyrażenia *b1 * *b2
}

float obwodPr(const float *b1, const float *b2) {
    return 2 * *b1 + 2 * *b2; //funkcja zwraca na zewnątrz wartość wyrażenia 2 * *b1 + 2 * *b2
}

//Przekazywanie parametrów do funkcji za pomocą wskaźnika do stałych const jest zalecane dla dużych porcji danych np. tablic, rzadziej dla C-struktur i klas