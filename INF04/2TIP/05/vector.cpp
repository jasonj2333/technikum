#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> wektor = { 10, 20, 30, 40, 50 };
    int* w_tab;
    w_tab = new int[5];

    cout << "Ilosc elementow wektora: " << wektor.size() << endl;
    cout << "Maksymalna liczba elementow: " << wektor.max_size() << endl;
    cout << "Pojemnosc wektora: " << wektor.capacity() << endl;
    cout << "Ilosc elementow tablicy: " << sizeof(w_tab) << endl;

    for (int i = 0; i < wektor.size(); i++)
    {
        cout << "wektor[" << i << "] = " << wektor[i] << endl;
    }

    wektor.push_back(60); //dodaj element na koniec
    wektor.push_back(70); //dodaj element na koniec
    wektor.push_back(80); //dodaj element na koniec
    cout << "Pojemnosc wektora: " << wektor.capacity() << endl;

    vector<int> numbers;
    cout << "Pojemnosc wektora numbers: " << numbers.capacity() << endl;
    cout << "Czy pusty? " << numbers.empty() << endl; //czy jest pusty

    for (int i = 10; i < 20; i++)
    {
        numbers.push_back(i);
    }
    cout << "Pojemnosc wektora numbers: " << numbers.capacity() << endl;

    for (auto it = numbers.begin(); it != numbers.end(); it++) {
        cout << *it << endl;
        //cout << &(*it) << endl;
    }

    cout << numbers[4] << endl; //5 element;
    cout << numbers.at(4) << endl; //5 element;
    cout << numbers.front() << endl; //zwraca 1 element
    cout << numbers.back() << endl; //zwraca ostatni element

    numbers.insert(numbers.begin() + 2, 88);
    cout << endl;

    numbers.erase(numbers.begin() + 2);

    numbers.erase(numbers.begin() + 4, numbers.end() - 1);

    numbers.pop_back();
    numbers.clear();

    numbers.resize(5);

    cout << numbers.size() << endl;

    for (auto element : numbers) {
        cout << element << endl;
    }

    //Tworzenie wektorów
    vector<float> v1;
    v1.push_back(5.7);
    v1.push_back(3.14);

    vector<int> v2(50); //vector o rozmiarze 50 - wartosci domyslne

    for (int i = 0; i < v2.size(); i++)
    {
        //v2[i] = i*3;
        v2.at(i) = i * 4;
    }

    vector<int> v3(10, 100); //10 elementow o wartosci 100

    cout << endl;


    vector<int> v4(v3); //kopia vectora v3
    vector<int> v5(v2.begin(), v2.end()); //kopia vectora v2 za pomocą iteratora

    vector<string> cars { "Volvo", "BMW", "FIAT", "Toyota" };

    for (auto element : cars) {
        cout << element << endl;
    }
}

