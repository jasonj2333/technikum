#include<iostream>
//Dołączenie do programu zasobów zbioru nagłówkowego vector
#include<vector>
using namespace std;

int main()
{
    //Deklaracja i inicjalizacja (w stylu C++11) wektora o nazwie wektor
    vector <int> wektor = { 10, 20, 30, 40, 50 };
    /*UWAGA:
    Wektor należący do typu vector zawiera elementy składowe typu int.
    Początkowa liczba elementów (rozmiar) wektora wynosi 5.*/

    //Wyświetlenie zawartości wektora
    for (int i = 0; i < wektor.size(); i++)
    {
        cout << "wektor[" << i << "] = " << wektor[i] << endl;
    }

    //Dopisanie nowego elementu z zadaną wartością na końcu wektora
    wektor.push_back(60);
    cout << "Ostatni element (dopisany): " << wektor[wektor.size() - 1] << endl;

    //Wstawienie nowego elementu o wartości 0 przed pierwszym elementem wektora
    wektor.insert(wektor.begin(), 0);
    cout << "Pierwszy element (dopisany): " << wektor[0] << endl;

    //Wyświetlenie bieżącej zawartości wektora
    for (int i = 0; i < wektor.size(); i++)
    {
        cout << "wektor[" << i << "] = " << wektor[i] << endl;
    }

    return 0;
}