#include<iostream>
//Dołączenie do programu zasobów zbioru nagłówkowego vector
#include<vector>
using namespace std;

int main()
{
    vector <int> wektor;

    int n; //rozmiar wektora
    int liczba; //zmienna pomocnicza
    cout << "Podaj liczbę elementów wektora: " << endl;
    cout << "n = ";
    cin >> n;

    cout << "Podaj wartość elementów składowych wektora: " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << "wektor[" << i << "] = ";
        cin >> liczba;
        wektor.push_back(liczba);
    }

    //Wyświetlenie bieżącej zawartości wektora
    cout << "\nElementy składowe wektora: " << endl;
    for (int i = 0; i < wektor.size(); i++)
    {
        cout << "wektor[" << i << "] = " << wektor[i] << endl;
    }

    return 0;
}