#include <iostream>

using namespace std;

int main()
{
    for(int i=0; i<10; i++){
        cout << i <<" Lubie programowac" << endl;
    }

    int licznik = 5;

    while(licznik <=11){
        cout << "Wartosc licznika: " << licznik << endl;
        licznik++;
    }

    string haslo = "tajne123";
    string input = "";

//    do{
//        cout << "Podaj haslo: ";
//        cin >> input;
//    }while(input != haslo);

    cout << "Brawo! Otworzyles sejf" << endl;

    string klasa1tip[] = {"Ola", "Justyna", "Wojtek", "Arek", "Tomek"};
    cout << klasa1tip[3] << endl;
    for(int i=0; i<5; i++){
        cout << i+1 << " " << klasa1tip[i] << endl;
    }

    //Pêtla zakresowa
    for(string imie : klasa1tip){
        cout << imie << endl;
    }

    //Instrukcje steruj¹ce pêtl¹
    for(int i=7; i<16; i++){
        if(i == 13) continue; //przejdz do nastepnej iteracji pêtli
        cout << i << " ";
    }
    cout << endl;

    for(int i=7; i<16; i++){
        if(i == 13) break; //przerwij petle
        cout << i << " ";
    }
    cout << endl;
    return 0;
}
