#include <iostream>

using namespace std;

void pogoda(int temperatura){
    //Instrukcje warunkowa, która sprawdza temperature i wypisuje
    //Je¿eli temperatura <= 0 - Oj zimno
    //Je¿eli temperatura > 0 ale mniejsza lub równa 15 - Nie za ciep³o
    //Je¿eli temperatura > 15 - ca³kiem ciep³o
    if(temperatura <= 0){
        cout << "Oj zimno !" << endl;
    }
    else if(temperatura <= 15){
        cout << "Nie za cieplo" << endl;
    }
    else{
        cout << "Calkiem cieplo" << endl;
    }
}

int main()
{
    pogoda(-4);
    pogoda(10);
    pogoda(24);
    return 0;
}
