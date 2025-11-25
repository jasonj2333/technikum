#include <iostream>
#include <vector>

using namespace std;

vector<double> wektor(5, 1);

int main()
{
    cout << "Podaj wartosc elementow skladowych wektora: " << endl;
    for (double& element : wektor) {
        cout << "element = ";
        cin >> element;
    }

    double suma{ 0 };
    for (double element : wektor) {
        cout << element << " " << endl;
        suma += element;
    }

    cout << "Suma elementów wektora wynosi: " << suma << endl;
    cout << "Srednia elementów wektora wynosi: " << suma / wektor.size() << endl;

}
