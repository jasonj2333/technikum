#include<iostream>
using namespace std;

int main()
{
    //Deklaracja zmiennej wskaźnikowej (wskaźnika) na zmienną typu double i przypisanie jej wartości NULL
    double *w_bok1 = NULL;

    //Utworzenie zmiennej (dynamicznej) typu double wskazywanej przez wskaźnik w_bok1
    w_bok1 = new double(1);
    /*UWAGA:
    Zmienna na stercie, dla której pamięć została zalokowana dynamicznie, została zainicjowana wartością 1.*/

    double *w_bok2 = new double(2);
    /*UWAGA:
    W wyrażeniu powyżej następuje deklaracja wskaźnika w_bok2 oraz jego inicjalizacja.
    Wspomniana inicjalizacja wskaźnika jest realizowana po zaalokowaniu na stercie obszaru pamięci operacyjnej niezbędnego
    do przechowywania danych typu double i zwróceniu (przez operator new) adresu początku tego obszaru.
    Zwrócony adres zostaje następnie przypisany do wskaźnika w_bok2.
    Zmienna na stercie, dla której pamięc została zaalokowana dynamicznie, została zainicjowana wartością 2.*/

    //Utworzenie zmiennej dynamicznej wskazywanej przez wskaźnik w_pole
    double* w_pole = new double;
    //Obliczenie pola prostokąta - wykorzystanie wskaźników i operatora dereferencji
    *w_pole = (*w_bok1) * (*w_bok2);

    //Utworzenie zmiennej dynamicznej wskazywanej przez wskaźnik w_obwod
    double* w_obwod = new double;
    //Obliczenie obwodu prostokąta - wykorzystanie wskaźników i operatora dereferencji
    *w_obwod = 2 * (*w_bok1) + 2 * (*w_bok2);

    //Zwolenienie pamięci zaalokowanej dla zmiennych wskazywanych przez wskaźniki w_bok1 i w_bok2
    delete w_bok1;
    delete w_bok2;

    //Prezentacja wyników - wykorzystanie wskaźników i operatora dereferencji
    cout << "Wyniki: " << endl;
    cout << "Pole: " << *w_pole << endl;
    cout << "Obwód: " << *w_obwod << endl;

    //Zwolenienie pamięci zaalokowanej dla zmiennych wskazywanych przez wskaźniki w_pole i w_obwod
    delete w_pole;
    delete w_obwod;
   
    return 0;
}