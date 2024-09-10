#include<iostream>
using namespace std;

int main()
{
    int ocena = 5;

    if(ocena >= 2){
        cout << "Uczen zaliczyl sprawdzian na ocene pozytywna " << endl;
        if(ocena >= 3){
            cout << "Uczen rozwiazuje zadania samodzielnie " << endl;
            if(ocena >= 4){
                cout << "Uczen dobrze opanował material nauczania " << endl;
                if(ocena >=5){
                    cout << "Jest prymusem " << endl;
                }
            }
        }
    }

    
    return 0;
}