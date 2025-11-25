#include <iostream>
using namespace std;

const int n{ 5 };
int tablica[n];

int main()
{
    cout << sizeof(tablica) / sizeof(tablica[0]) << endl;

    /*for (int i = 0; i < n; i++) {
        cout << tablica[i] << " ";
    }
    cout << endl;*/

    /*for (int i = 0; i < n; i++) {
        cout << "element = ";
        cin >> tablica[i];
    }
    cout << endl;*/

    for (int& number : tablica) {
        cout << "element = ";
        cin >> number;
    }

    for (int number : tablica) {
        cout << number << ", ";
    }
    cout << endl;
}

