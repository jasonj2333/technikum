#include <iostream>
#include <time.h>
using namespace std;

void quickSort(int* tablica, int lewy, int prawy) {
    int pivot = tablica[(lewy + prawy) / 2]; //ustal oś
    int i, j, x;
    i = lewy;
    j = prawy;

    //Algorytm partycjonowania
    do {
        while (tablica[i] < pivot) i++; //znajdź element większy lub równy od osi idąc od początku
        while (tablica[j] > pivot) j--; //znajdź element mniejszy równy od osi idąc od końca
        if(i<=j) //jeżeli nie wskazują na oś to zamień
        {
            //zamiana
            x = tablica[i];
            tablica[i] = tablica[j];
            tablica[j] = x;
            //przejście do kolejnych elementów
            i++;
            j--;
        }
    } while (i <= j);
    //Wywołaj quickSort na mniejszych tablicach - rekurencyjnie
    if (j > lewy) quickSort(tablica, lewy, j);
    if (i < prawy) quickSort(tablica, i, prawy);
}

int main()
{
    int ile = 20;

    int* tablica;
    tablica = new int[ile];

    srand(time(NULL));

    for (int i = 0; i < ile; i++) {
        tablica[i] = rand() % 1000 + 1;
    }

    cout << "Przed posortowaniem: " << endl;
    for (int i = 0; i < ile; i++)
    {
        cout << tablica[i] << " ";
    }

    cout << endl << "Sortuje teraz algorytmem quicksort. Prosze czekac!" << endl;
    quickSort(tablica, 0, ile - 1);

    cout << "Po posortowaniu: " << endl;
    for (int i = 0; i < ile; i++)
    {
        cout << tablica[i] << " ";
    }

    delete[] tablica;

    return 0;
}


