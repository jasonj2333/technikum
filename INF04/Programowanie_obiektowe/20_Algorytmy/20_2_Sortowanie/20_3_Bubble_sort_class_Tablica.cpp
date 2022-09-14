#include<iostream>
#include <stdlib.h> // niezbędne dla funkcji srand i rand
#include <time.h> // niezbędne dla funkcji time
using namespace std;

//Definicja klasy Tablica
class Tablica {
    int liczbaElementowTablicy;
    float *wskTablica;

public:
    Tablica(int n) {
        liczbaElementowTablicy = n;
        wskTablica = new float[liczbaElementowTablicy];
    }
    ~Tablica(){
        delete [] wskTablica;
    }

    //Deklaracja metod klasy
    void tablicaWejscie();
    void sortowanieBabelkowe();
    void tablicaWyjscie();
    void tablicaWejscieKlawiatura();
};

//Definicje metod klasy Tablica
void Tablica::sortowanieBabelkowe() {
    int i, j;
    float temp;
    for (i = 0; i < liczbaElementowTablicy; i++)
    {
        for (j = i + 1; j < liczbaElementowTablicy; j++)
        {
            if (wskTablica[j] < wskTablica[i]) {
                temp = wskTablica[i];
                wskTablica[i] = wskTablica[j];
                wskTablica[j] = temp;
            }
        }
    }
}

void Tablica::tablicaWejscie() {
    srand(time(NULL));

    for (int i = 0; i < liczbaElementowTablicy; i++)
    {
        wskTablica[i] = (rand() % 100) + 1;
    }
}

void Tablica::tablicaWejscieKlawiatura() {
    for (int i = 0; i < liczbaElementowTablicy; i++)
    {
        cout << "element[" << i << "] = ";
        cin >> wskTablica[i];
    }
}


void Tablica::tablicaWyjscie() {
    for (int i = 0; i < liczbaElementowTablicy; i++)
    {
        cout << "element[" << i << "] = " << wskTablica[i] << endl;
    }
}

int main()
{
    const int n = 5;//rozmiar tablicy
    Tablica tablica = Tablica(n);//1-wymiarowa tablica liczbowa o rozmiarze n

    cout << "Wprowadź wartości elementów  tablicy:" << endl;
    tablica.tablicaWejscieKlawiatura();

    cout << "Zawartość tablicy wejściowej:" << endl;
    tablica.tablicaWyjscie();

    //Posortowanie elementów tablicy tablica
    tablica.sortowanieBabelkowe();
    
    cout << "Zawartość tablicy posortowanej:" << endl;
    tablica.tablicaWyjscie();

    return 0;
}