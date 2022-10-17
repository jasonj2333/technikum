#include<iostream>
#include<vector>
using namespace std;

int main()
{
    const int n{ 5 }; //rozmiar tablicy
    
    //Deklaracja inicjalizacja wektora o nazwie wektor n wartościami równymi 0.
    vector<double> wektor(n, 0); 

    cout << "Podaj wartość elementów składowych wektora: " << endl;
    for (double& element : wektor) {
        cout << "element = ";
        cin >> element;
    }

    //Obliczanie sumy wszystkich elementów zapisanych w tablicy.
    double suma{ 0 };
    for (double element : wektor) {
        suma += element;
    }

    cout << "Suma elementów wektora wynosi: " << suma << endl;

    return 0;
}