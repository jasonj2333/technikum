#include <iostream>

using namespace std;

void pobierzLancuch(string& lancuch) {
    cin >> lancuch;
}

void wyswietlLancuch(const string& lancuch) {
    cout << lancuch << endl;
}

string sumaLancuchow(const string& l1, const string& l2) {
    string lancuch;
    lancuch = l1 + " " + l2;
    return lancuch;
}

int main()
{
    string nazwaJezyka = "";
    string wersjaJezyka = "";
    string jezyk = "";

    cout << "Podaj nazwe jezyka programowania: ";
    pobierzLancuch(nazwaJezyka);

    cout << "Podaj wersje jezyka: ";
    pobierzLancuch(wersjaJezyka);

    jezyk = sumaLancuchow(nazwaJezyka, wersjaJezyka);
    cout << "Wybrales jezyk: ";
    wyswietlLancuch(jezyk);
}
