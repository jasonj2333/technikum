#include<iostream>
using namespace std;

class Sieve
{
private:
    static const int maxNumber = 120;
    bool numbers[maxNumber+1] {};
    int intNumbers[maxNumber+1] {};
    bool checkPrime(int);
    bool checkRange(int);
    void fillIntNumbers();
    void deleteNumbers();
    void deleteIntNumbers();
public:
    Sieve(){
        deleteNumbers();
        deleteIntNumbers();
    }
    void outputPrimeNumbers();
    void decompositionIntoPrimeFactors(int);
    void isPrime(int);
};

void Sieve::outputPrimeNumbers(){
    cout << "Liczby pierwsze z przedziału od 2 do " << maxNumber << endl;
    for (int i = 2; i < maxNumber+1; i++)
    {
        if(checkPrime(i)) cout << i << " ";
    }
    cout << endl;
    
}

void Sieve::deleteNumbers(){
    for (int i = 2; i*i < maxNumber+1; i++)
    {
        if(!numbers[i])	
            for (int j = i*i ; j<=maxNumber; j+=i) numbers[j] = 1;
    }
    
}

void Sieve::deleteIntNumbers(){
    fillIntNumbers();
    for (int i = 2; i*i < maxNumber+1; i++)
    {
        for (int j = i*i ; j<=maxNumber; j+=i) 
            if(intNumbers[j] > i) intNumbers[j] = i;
    }
    
}

void Sieve::fillIntNumbers(){
    for (int i = 2; i < maxNumber+1; i++)
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

bool Sieve::checkPrime(int number){
    if(numbers[number]) return false;

    return true; 
}

void Sieve::isPrime(int number){
    if(checkRange(number))
        if(checkPrime(number)) {
            cout << "Liczba " << number << " jest liczbą pierwszą" << endl;
        } else {
            cout << "Liczba " << number << " nie jest liczbą pierwszą" << endl;
        }
    else cout << "Liczba spoza zakresu od 2 do " << maxNumber  << endl;   
}
// ******************************************************
//  nazwa funkcji: decompositionIntoPrimeFactors
//  argumenty: number - liczba która ma być rozłożona na czynniki pierwsze
//  typ zwracany: void, ciąg tektowy zawierający czynniki pierwsze lub informacje, że liczba jest spoza zakresu - komunikat na ekranie monitora
//  informacje: metoda korzysta z wersji sita Erastotenesa w której wykreślanie wielokrotności liczb pierwszych następuję poprzez zastąpienie tych wielokrotności liczbą pierwszą, której wielokrotności wykreślamy
//  autor: 111222333
// *****************************************************
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
    s.outputPrimeNumbers();
    s.isPrime(113);
    s.decompositionIntoPrimeFactors(50);
    return 0;
}