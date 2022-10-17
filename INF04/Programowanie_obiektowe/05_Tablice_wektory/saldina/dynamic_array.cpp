#include<iostream>
using namespace std;

int main()
{
    int size;
    cout << "Size: ";
    cin >> size;
    //int myArray[size]; //Błąd nie można określać rozmiaru tablicy w czasie wykonywania programu
    //Definicja wskaźnika - tablicy dynamicznej
    int* myArray = new int[size];

    for (int i = 0; i < size; i++)
    {
        cout << "Array[" << i << "] = ";
        cin >> myArray[i];
    }
    
    for (int i = 0; i < size; i++)
    {
        cout << "[" << i << "] = " << myArray[i] << "\t";
    }

    delete[]myArray;
    myArray = NULL;
    
    return 0;
}