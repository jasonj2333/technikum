#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

class Search{
private:
    static const int numberOfElements = 50;
    int numbersArray[numberOfElements+1];
    int searchValue;

    void fillArray();
    int sentinelSearch();
    void outputArray();
public:
    void isValueInArray(int number);
};

int Search::sentinelSearch()
{
    int i = 0;
 
    while (numbersArray[i] != searchValue)
        i++;
 
    if (i < numberOfElements)
        return i;
    return -1;
}

void Search::fillArray(){
    for (int i = 0; i < numberOfElements; i++)
    {
        numbersArray[i] = ( rand() % 100 ) + 1;
    }
    numbersArray[numberOfElements] = searchValue;
}

void Search::outputArray(){
    cout << "Zawartość tablicy: " << endl;
    for (int i = 0; i < numberOfElements; i++)
    {
        cout << numbersArray[i];
        (i < numberOfElements - 1) ? cout << ", " : cout << endl;
    }
}

void Search::isValueInArray(int number){
    searchValue = number;
    fillArray();
    outputArray();
    int index = sentinelSearch();
    if(index == -1) 
        cout << "Liczby " << searchValue << " nie ma w tablicy";
    else 
        cout << "Liczbe " << searchValue << " znaleziono pod indeksem: " << index;
}

int main()
{
    int searchValue;
    srand( time( NULL ) );
    cout << "Podaj liczbe, której szukasz: "; cin >> searchValue;
    Search search;
    search.isValueInArray(searchValue);
    return 0;
}