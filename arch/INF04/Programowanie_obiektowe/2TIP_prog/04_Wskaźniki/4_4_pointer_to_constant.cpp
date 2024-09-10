#include<iostream>
using namespace std;

int main()
{
    //Deklaracja i inicjalizacja zmiennej zmienna1 typu int
    int zmienna1 = 1;

    //Deklaracja wskaźnika o nazwie wskaznik z modyfikatorem const
    const int *wskaznik; //wskaźnik na stałą!!! (pointer to constant)
    //Przypisanie wskaźnikowi adresu zmiennej o nazwie zmienna1
    wskaznik = &zmienna1;

    //Odczyt wartości zmiennej wskazywanej przez wskaźnik wskaznik
    cout << "Wartość zmiennej zmienna1: " << *wskaznik << endl;

    //Instrukcja zawarta poniżej w komentarzu jest błędna!
    // *wskaznik = 10;

    //Deklaracja i inicjalizacja zmiennej zmienna2 typu int
    int zmienna2 = 2;

    //Przypisanie wskaźnikowi adresu zmiennej o nazwie zmienna2
    wskaznik = &zmienna2;

    //Odczyt wartości zmiennej wskazywanej przez wskaźnik wskaznik
    cout << "Wartość zmiennej zmienna2: " << *wskaznik << endl;

    return 0;
}