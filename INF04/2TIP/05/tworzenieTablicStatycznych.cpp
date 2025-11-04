#include <iostream>
using namespace std;

const int n = 100;
int tablica[n]; //tablica stworzona w zasiegu globalnym - elementy wypełnione wartosciami domyslnymi - 0;

int main()
{ 
    for (int i = 0; i < n; i++) {
        cout << tablica[i] << " ";
    }
    cout << endl;

    float tablica1[5] = {1,3,8,7,18};

    for (int i = 0; i < 5; i++) {
        cout << tablica1[i] << " ";
    }
    cout << endl;

    int tablica2[] = { 6, 9, 7, 1 };

    for (int i = 0; i < 5; i++) {
        cout << tablica2[i] << " ";
    }
    cout << endl;

    int tablica3[5] = {}; //inicjalizacja wartosciami domyslnymi

    for (int i = 0; i < 5; i++) {
        cout << tablica3[i] << " ";
    }
    cout << endl;

    int tablica4[5]{}; //dziala od C++11
}
