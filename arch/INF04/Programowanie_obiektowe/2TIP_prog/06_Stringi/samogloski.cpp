#include <iostream>
#include<string>
using namespace std;

int main()
{
    string tekst = "Dostal Jacek elementarz. Alez mina usmiechnieta. Hejze-hej, hejze-ha, elementarz Jacek ma.";
    string samogloski = "aeioyu";
    int licznik = 0;

    for (char znak : tekst) {
        if (samogloski.find(znak) != -1) {
            cout << znak << ", ";
            licznik++;
        }
    }

    cout << endl << "Licznik samogłosek: " << licznik << endl;
}