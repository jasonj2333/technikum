#include <iostream>
#include <string>

using namespace std;

int main()
{
    string tekst;
    string imie = "Jan";
    string nazwisko("Kowalski");
    string klasa{ "2TIP" };

    //cout << "Podaj imie: ";
    //cin >> imie;
    cout << "Imie: " << imie << " Nazwisko: " << nazwisko << " klasa: " << klasa << endl;

    cout << "Podaj jakis tekst: ";
    cin.ignore();
    getline(cin, tekst);
    cout << tekst;

    //Metody klasy string
    string a = "Hello ";
    string b = "World";
    cout << a + b << endl;

    cout << tekst.length() << endl;
    cout << tekst.size() << endl;
    cout << a[0] << a[3] << endl;

    for (char znak : b) {
        cout << znak << "-";
    }
    cout << endl;

    string c = "abc";
    string d = "abc";
    cout << (c == d) << endl;
    cout << (c != d) << endl;
    cout << (c > d) << endl;
    cout << c.compare(d) << endl;
    cout << c.at(2) << endl;
    cout << c.append("d") << endl;
    cout << nazwisko.find("ski") << endl;
    cout << c.insert(2, "0123") << endl;

    string s1 = "C++11";
    string s2 = s1.substr(0, 3);
    cout << s2 << endl;
    cout << s1.replace(4, 1, "7") << endl;
}

