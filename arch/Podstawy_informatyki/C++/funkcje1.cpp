#include <iostream>

using namespace std;

void czesc(string imie = "Anonim"){
    cout << "Czesc " << imie << endl;
}

void szkola(){
    cout << "Zespol Szkol im. Ojca Sw Jana Pawla II" << endl;
}

int poleProstokata(int a, int b){
    if(a > 0 && b > 0){
       return a * b;
    }
    return -1;
}

double poleTrojkata(int a, int h){
    return a * h / 2.0;
}

int main()
{
    cout << "Hello world!" << endl;
    czesc("Tomek");
    czesc("Ania");
    czesc("Witek");
    czesc();
    szkola();
    int pole = poleProstokata(5, 3);
    if(pole == -1){
        cout << "Nieprawidlowe boki prostokata" << endl;
    }else{
        cout << "Pole prostokata wynosi: " << pole << endl;
    }
    
    double poleT = poleTrojkata(5, 3);

    cout << "Pole trojkata wynosi: " << poleT << endl;
    return 0;
}

