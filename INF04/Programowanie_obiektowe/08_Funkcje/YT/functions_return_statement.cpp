#include<iostream>
using namespace std;

bool isPrimeNumber(int number){
     for(int i = 2; i * i < number; i++){
        if(number % i == 0) {
            return false;
        }
     }
     return true;
}

int main()
{
     int number;
     cout << "Number: "; 
     cin >> number;

     
     if(isPrimeNumber(number))
        cout << "Prime number" << endl;
     else cout << "Not prime number" << endl;
     
     cout << "Prime numbers beetwen 2 and 100" << endl;    
     for (int i = 2; i <= 100; i++)
     {
        if(isPrimeNumber(i)) cout << i << " ";
     }

     
    return 0;
}