#include <iostream>
#include <string>

using namespace std;

int main()
{
    string alfabet = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ ";
    string jawny = "";
    string szyfrogram = "";
    int klucz = 3;

    //cin.ignore(numeric_limits<std::streamsize>::max(), '\n');
    cout << "Podaj tekst do zaszyfrowania: ";
    getline(cin, jawny);

    for (char znak : jawny)
    {
        int i = alfabet.find(znak);
        if (i > -1) {
            znak = alfabet[((i + klucz) % alfabet.length())];
        }
        szyfrogram += znak;
    }

    cout << szyfrogram << endl;
    
    klucz = alfabet.length() - klucz;
    jawny = "";

    for (char znak : szyfrogram)
    {
        int i = alfabet.find(znak);
        if (i > -1) {
            znak = alfabet[((i + klucz) % alfabet.length())];
        }
        jawny += znak;
    }

    cout << jawny << endl;
}

