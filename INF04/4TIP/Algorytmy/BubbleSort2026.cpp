#include <iostream>
using namespace std;

void bubbleSort(int tab[], int n) {
    for (int i = 0; i < n - 1; i++) {
        bool is_sorted = true;
        for (int j = 0; j < n - i - 1; j++) {
            if (tab[j] > tab[j + 1]) {
                int temp = tab[j];
                tab[j] = tab[j + 1];
                tab[j + 1] = temp;
                is_sorted = false;
            }
        }

        if (is_sorted) break;
    }
}

void wypisz(int tab[], int n)
{
    for (int i = 0; i < n; i++)
        cout << tab[i] << " ";
    cout << endl;
}

int main()
{
    int tab[] = { 5, 3, 8, 4, 2 };
    int n = 5;

    wypisz(tab, n);
    bubbleSort(tab, n);
    wypisz(tab, n);
}

