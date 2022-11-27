#include <iostream>
using namespace std;

class SortArray {
private:
    static const int n = 5;
    int numbers[n];
    int searchMax(int);
public:
    void sortNumbers();
    void inputNumbers();
    void outputNumbers();
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

int main()
{
    SortArray myArray;
    myArray.inputNumbers();
    myArray.sortNumbers();
    myArray.outputNumbers();
}