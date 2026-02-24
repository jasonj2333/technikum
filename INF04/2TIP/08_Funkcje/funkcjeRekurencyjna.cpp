#include <iostream>

using namespace std;

int fib(int n) {
    //przypadki podstawowe
    if (n == 0) return 0;
    if (n == 1 || n == 2) return 1;
    //przypadek rekurencyjny
    return fib(n - 1) + fib(n - 2);
}

int main()
{
    cout << fib(5) << endl;
    //fib(4)                 +                   fib(3)
    //fib(3)        +   fib(2)                   fib(2) + fib(1)
    //fib(2) + fib(1)   1                        1        1
    //1        1
    cout << fib(25) << endl;
}


