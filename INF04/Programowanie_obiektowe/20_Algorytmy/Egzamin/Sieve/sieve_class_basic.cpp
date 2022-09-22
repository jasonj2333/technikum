#include<iostream>
using namespace std;

class Sieve
{
private:
    static const int maxNumber = 120;
    bool numbers[maxNumber+1] {};
    void deleteNumbers();
public:
    Sieve(){
        deleteNumbers();
    }
    void outputPrimeNumbers();
    void isPrime(int);
};

void Sieve::outputPrimeNumbers(){
    cout << "Liczby pierwsze z przedziału od 2 do " << maxNumber << endl;
    for (int i = 2; i < maxNumber+1; i++)
    {
        if(!numbers[i]) cout << i << " ";
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

void Sieve::isPrime(int number){
    if(!numbers[number]) {
        cout << "Liczba " << number << " jest liczbą pierwszą" << endl;
    } else {
        cout << "Liczba " << number << " nie jest liczbą pierwszą" << endl;
    }
}


int main()
{
    Sieve s;
    s.outputPrimeNumbers();
    s.isPrime(113);
    return 0;
}