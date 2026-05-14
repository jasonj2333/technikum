#include <iostream>

using namespace std;

string decToBin(int liczba){
    string wynik = "";
    while(liczba > 0){
        int reszta = liczba % 2;
        wynik = char(reszta + '0') + wynik;
        liczba = liczba / 2;
    }
    return wynik;
}

string decToOct(int liczba){
    string wynik = "";
    while(liczba > 0){
        int reszta = liczba % 8;
        wynik = char(reszta + '0') + wynik;
        liczba = liczba / 8;
    }
    return wynik;
}

string decToHex(int liczba){
    string wynik = "";
    while(liczba > 0){
        int reszta = liczba % 16;
        if(reszta < 10){
            wynik = char(reszta + '0') + wynik;
        }else{
            wynik = char(reszta + 55) + wynik;
        }

        liczba = liczba / 16;
    }
    return wynik;
}

int binToDec(string bin){
    int wynik = 0;

    for(char c : bin){
        wynik = wynik * 2 + (c - '0');
    }

    return wynik;
}

int octToDec(string oct){
    int wynik = 0;

    for(char c : oct){
        wynik = wynik * 8 + (c - '0');
    }

    return wynik;
}

int hexToDec(string hex){
    int wynik = 0;
    for(char c : hex){
        wynik = wynik * 16;
        if(c >= '0' && c <= '9'){
            wynik = wynik + (c - '0');
        }
        else if (c >= 'A' && c <= 'F'){
            wynik = wynik + (c - 'A' + 10);
        }
    }
    return wynik;
}


int main()
{
    cout << decToBin(255) << endl;
    cout << decToOct(255) << endl;
    cout << decToHex(255) << endl;
    cout << binToDec("11111111") << endl;
    cout << octToDec("377") << endl;
    cout << hexToDec("FF") << endl;
    return 0;
}
