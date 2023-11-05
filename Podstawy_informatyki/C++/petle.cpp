#include<iostream>
using namespace std;

int main()
{
    cout << "Petle" << endl;

    //petla for
    for (int i = 0; i < 10; i++)
    {
        cout << i << endl;
    }
    
    
    //trojkat
    for(int i = 1; i<=10; i++){
        for(int j = 0; j < i; j++){
            cout << "*";
        }
        cout << endl;
    }

    //Choinka
    int n = 20;
    
    cout << "Choinka" << endl << endl;
    for(int i = 1; i<=n; i+=2){
        for(int s=0; s<(n-i)/2; s++) cout << ' ';
        for(int j = 0; j < i; j++){
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}
