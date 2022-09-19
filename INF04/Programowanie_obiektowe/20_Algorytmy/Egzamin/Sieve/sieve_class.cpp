#include<iostream>
using namespace std;

class Sieve
{
private:
    static const int maxNumber = 120;
    bool numbers[maxNumber+1] {};
    int intNumbers[maxNumber+1] {};
    bool checkPrimary(int);
    bool checkRange(int);
    void fillIntNumbers();
    void deleteNumbers();
    void deleteIntNumbers();
public:
    Sieve(){
        deleteNumbers();
        deleteIntNumbers();
    }
    void outputPrimaryNumbers();
    void decompositionIntoPrimeFactors(int);
    void isPrimary(int);
};

void Sieve::outputPrimaryNumbers(){
    cout << "Liczby pierwsze z przedziału od 2 do " << maxNumber << endl;
    for (int i = 2; i < maxNumber; i++)
    {
        if(checkPrimary(i)) cout << i << " ";
    }
    cout << endl;
    
}

void Sieve::deleteNumbers(){
    for (int i = 2; i*i < maxNumber; i++)
    {
        if(!numbers[i])	
            for (int j = i*i ; j<=maxNumber; j+=i) numbers[j] = 1;
    }
    
}

void Sieve::deleteIntNumbers(){
    fillIntNumbers();
    for (int i = 2; i*i < maxNumber; i++)
    {
        for (int j = i*i ; j<=maxNumber; j+=i) intNumbers[j] = i;
    }
    
}

void Sieve::fillIntNumbers(){
    for (int i = 2; i < maxNumber; i++)
    {
        intNumbers[i] = i;
    }
    
}

bool Sieve::checkRange(int number){
    if(number < 2 || number > maxNumber){
        return false;
    }

    return true; 
}

bool Sieve::checkPrimary(int number){
    if(numbers[number]) return false;

    return true; 
}

void Sieve::isPrimary(int number){
    if(checkRange(number))
        if(checkPrimary(number)) {
            cout << "Liczba " << number << " jest liczbą pierwszą" << endl;
        } else {
            cout << "Liczba " << number << " nie jest liczbą pierwszą" << endl;
        }
    else cout << "Liczba spoza zakresu od 2 do " << maxNumber  << endl;   
}

void Sieve::decompositionIntoPrimeFactors(int number){
    if(checkRange(number)){
        cout << "Rozkład na czynniki pierwsze liczby: " << number << endl;
        do
        {
            cout << intNumbers[number] << " ";
            number = number/intNumbers[number];
        } while (number != 1);
        
    }
    else cout << "Liczba spoza zakresu od 2 do " << maxNumber  << endl;   
}


int main()
{
    Sieve s;
    s.outputPrimaryNumbers();
    s.isPrimary(113);
    s.decompositionIntoPrimeFactors(50);
    return 0;
}