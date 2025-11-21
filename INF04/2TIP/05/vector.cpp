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

    for (auto element : numbers) {
        cout << element << endl;
    }
}

