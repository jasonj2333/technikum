#include <iostream>
#include <string>
using namespace std;

int main()
{
    string tekst = "Dostal JAcek elementarz. Alez mina usmiechnieta. Hejze-hej, hejze-ha, elementarz Jacek ma.";
    string samogloski = "aeioyu";
    int licznik = 0;

    for (char znak : tekst) {
        if (samogloski.find(tolower(znak)) != -1) {
            licznik++;
            cout << znak << ", ";
        }
    }

    cout << endl << "Licznik samoglosek: " << licznik << endl;
}
