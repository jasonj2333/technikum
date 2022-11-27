#include <iostream>
using namespace std;

class SortArray {
private:
    static const int n = 5;
    static int numbers[n];
    static int searchMax(int);
public:
    static void sortNumbers();
    static void inputNumbers();
    static void outputNumbers();
};

void SortArray::inputNumbers() {
    for (int i = 0; i < n; i++)
    {
        cout << "Podaj " << i << " element tablicy: ";
        cin >> numbers[i];
    }
}

void SortArray::outputNumbers() {
    for (int i = 0; i < n; i++)
    {
        cout << "Element [" << i << "] = " << numbers[i] << endl;
    }
}

int SortArray::searchMax(int startIndex) {
    int maxNumberIndex = startIndex;
    for (int i = startIndex+1; i < n; i++)
    {
        if (numbers[i] > numbers[maxNumberIndex]) maxNumberIndex = i;
    }
    return maxNumberIndex;
}

void SortArray::sortNumbers() {
    for (int i = 0; i < n-1; i++)
    {
        int temp = numbers[i];
        int searchIndex = searchMax(i);
        numbers[i] = numbers[searchIndex];
        numbers[searchIndex] = temp;
    }
}

int SortArray::numbers[]{};

int main()
{
    SortArray::inputNumbers();
    SortArray::sortNumbers();
    SortArray::outputNumbers();
}