#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
 
int sentinelSearch(int arr[], int n, int searchVal)
{
    int i = 0;
 
    while (arr[i] != searchVal)
        i++;
 
    if (i < n)
        return i;
    return -1;
}

void fillArray(int n, int array[], int searchVal){
    for (int i = 0; i < n; i++)
    {
        array[i] = ( rand() % 100 ) + 1;
    }
    array[n] = searchVal;
}

void ouputArray(int n, int array[]){
    for (int i = 0; i < n; i++)
    {
        cout << array[i];
        if (i < n - 1) cout << ", ";
    }
}
 
int main()
{
    const int n = 50;
    int numbersArray[n+1];
    int searchValue;
    
    srand( time( NULL ) );
    cout << "Podaj liczbe, której szukasz: "; cin >> searchValue;
    
    fillArray(n, numbersArray, searchValue);
    cout << sentinelSearch(numbersArray, n, searchValue) << endl;
    ouputArray(n, numbersArray);
 
    return 0;
}