#include <iostream>

using namespace std;

int mnozenie(int a, int b) {
    return a * b;
}


//Przekazawywanie argumentów przez kopię
void zwieksz(int a, int b) {
    a += 2;
    b += 2;
}

//Przekazywanie przez referencje
void zwieksz2(int &a, int &b) {
    a += 2;
    b += 2;
}

//Przekazywanie przez wskaźnik
void zwieksz3(int *a, int *b) {
    *a += 2;
    *b += 2;
}

int main()
{
    int liczba1, liczba2;
    cout << "Podaj 1 liczbe: ";
    cin >> liczba1;

    cout << "Podaj 2 liczbe: ";
    cin >> liczba2;

    cout << "Wynik mnozenia wynosi: " << mnozenie(liczba1, liczba2) << endl;
    zwieksz(liczba1, liczba2);
    cout << liczba1 << ", " << liczba2 << endl;
    zwieksz2(liczba1, liczba2);
    cout << liczba1 << ", " << liczba2 << endl;
    zwieksz3(&liczba1, &liczba2);
    cout << liczba1 << ", " << liczba2 << endl;
}
