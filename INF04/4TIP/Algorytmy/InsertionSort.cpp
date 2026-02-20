#include <iostream>

using namespace std;

void insertionSort(float t[], int n) {
    int i, j;
    float temp;

    for (i = 1; i < n; i++) {
        temp = t[i];
        j = i - 1;
        while (j >= 0 && t[j] > temp) {
            t[j + 1] = t[j];
            j = j - 1;
        }
        t[j + 1] = temp;
    }
}

void wypisz(float t[], int n)
{
    for (int i = 0; i < n; i++)
        cout << t[i] << " ";
    cout << endl;
}

int main()
{
    const int n = 5;
    float tablica[n] = { 10, 2, 6, 7, 9 };

    wypisz(tablica, n);
    insertionSort(tablica, n);
    wypisz(tablica, n);

}
