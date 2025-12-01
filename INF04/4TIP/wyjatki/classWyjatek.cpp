#include <iostream>
#include <string>
#include <cmath>
#include <sstream>

using namespace std;

class Wyjatek {
public:
    virtual string komunikat() = 0;
};

class Format : public Wyjatek {
    string sOcena;

public:
    Format(string sOcena) : sOcena(sOcena){}

    string komunikat() {
        stringstream sTemp;
        sTemp << "Uwaga blad!. Format danej wejsciowej " << sOcena << " nie odpowiada liczbie całkowitej!" << endl;
        return sTemp.str();
    }
};

class Zakres : public Wyjatek {
    int ocena;
public:
    Zakres(int ocena) : ocena{ocena}{}

    string komunikat() {
        stringstream sTemp;
        sTemp << "Uwaga blad!. Format danej wejsciowej " << ocena << " spoza zakresu <1,6>" << endl;
        return sTemp.str();
    }
};

bool wejscieFormat(string sDana) {
    for (int i = 0; i < sDana.length(); i++)
    {
        if (isdigit(sDana[i]) == false) {
            return false;
        }
    }
    return true;
}

bool wejscieZakres(int iDana) {
    if ((iDana >= 1) && (iDana <= 6)) return true;
    else return false;
}

int main()
{
    try {
        string sOcena = "10a";

        if (wejscieFormat(sOcena) == false) throw 1;
        int ocena = stoi(sOcena);

        if (wejscieZakres(ocena) == false) throw Zakres(ocena);

        //Program gdy nie ma błędu
    }
    catch (Wyjatek& wyjatek) {
        cerr << wyjatek.komunikat() << endl;
    }
    catch (...) {
        cout << "Cos poszlo nie tak !!!" << endl; //Obsługuje wszystkie wczesniej nieobsłużone wyjątki
    }
}

