#include <iostream>
#include <string>
using namespace std;

bool wejscieFormat(string sOcena) {
    for (int i = 0; i < sOcena.length(); i++) {
        if (isdigit(sOcena[i]) == false) return false;
    }
    return true;
}

bool wejscieZakres(int ocena) {
    if (ocena >= 1 && ocena <= 6) return true;
    return false;
}

int main()
{
    string sOcena = "6";

    if (wejscieFormat(sOcena)) {
        int ocena = stoi(sOcena);
        if (wejscieZakres(ocena)) {
            switch (ocena)
            {
                case 1:
                    cout << "Uczeń nie otrzymuje promocji do następnej klasy..." << endl;
                    break;
                case 2:
                case 3:
                case 4:
                case 5:
                case 6:
                    cout << "Uczeń otrzymuje promocji do następnej klasy..." << endl;
                    break;
            }
            
        }
        else {
            cout << "Uwaga blad!!" << endl;
            cout << "Wartosc nie miesci sie w zakresie <1, 6>" << endl;
        }
    }
    else {
        cout << "Uwaga blad!!" << endl;
        cout << "Format nie odpowiada liczbie calkowitej" << endl;
    }
}
