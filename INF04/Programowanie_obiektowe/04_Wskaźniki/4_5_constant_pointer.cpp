#include<iostream>
using namespace std;

int main()
{
    int zmienna1 = 1;
    int zmienna2 = 2;

    //Deklaracja i inicjalizacja wskaźnika o nazwie wskaznik z wykorzystaniem słowa kluczowego const
    int const *wskaznik = &zmienna1; //wskaźnik stały!!! (constant pointer)
    /*UWAGA:
    Wskaźnik zadeklarowany z użyciem słowa kluczowego const jak powyżej musi zostać zainicjowany podczas deklaracji.
    Tutaj wskaźnikowi o nazwie wskaznik przypisano adres zmiennej zmienna1*/

    //Odczt wartości zmiennej wskazywanej przez wskaźnik wskaznik
    cout << "Wartość zmiennej zmienna1: " << *wskaznik << endl;

    //Modyfikacja wartości zmiennej wskazywanej przez wskaźnik stały
    *wskaznik++;
    cout << "Zmieniona wartość zmiennej zmienna1: " << *wskaznik << endl;

    //Instrukcja zawarta poniżej w komentarzu jest błędna!
    // wskaznik = &zmienna2;

    //Możliwe jest utworzenie stałego wskaźnika na stałą
    const int* const wskaznik2 = &zmienna2;
    /*UWAGA:
    Tak zdefiniowany wskaźnik pozwala tylko na odczyt wartości zmiennej zmienna2 i uniemożliwia zmianę adresu wskazywanej
    zmiennej - nie można mu przypisać adresu innej zmiennej.*/

    return 0;
}