#include <iostream>

using namespace std;

//metoda klasyczna z odejmowaniem - algorytm Euklidesa
int nwd(int a, int b){
    while(a != b){
        if(a > b){
            a = a - b;
        }
        else{
            b = b - a;
        }
    }
    return a;
}

//metoda z reszt¹ z dzielenia
int nwd2(int a, int b){
    int temp;
    while(b != 0){
        temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int nww(int a, int b){
    return a*b/nwd2(a, b);
}

int main()
{
    cout << nwd(16, 14) << endl;
    cout << nwd2(16, 14) << endl;
    cout << nww(16, 14) << endl;
    return 0;
}
