#include <iostream>
#include <vector>

using namespace std;

vector<int> numbers;

int main()
{
    int number;

    do {
        cout << "Podaj liczbe (0 = koniec): ";
        cin >> number;
        if (number != 0) numbers.push_back(number);
    } while (number != 0);

    for (int i = numbers.size() - 1; i >= 0; i--)
    {
        cout << numbers[i] << " ";
    }
    cout << endl;

    while (!numbers.empty()) { //dopóki numbers nie jest pusty
        cout << numbers.back() << " "; //pobieranie ostatniego elementu
        numbers.pop_back(); //usunięcie ostatniego elementu
    }
    cout << endl << numbers.size() << endl;
}

