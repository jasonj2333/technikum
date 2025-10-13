#include <iostream>
#include <string>

using namespace std;

int main()
{
    std::string imie, nazwisko;
    std::cout << "Podaj imie: ";
    std::cin >> imie >> nazwisko;
    std::cout << "Mam na imie " << imie << " " << nazwisko << std::endl;
    cin.ignore();
    string dlugiTekst;
    cout << "Podaj dlugi tekst";
    getline(cin, dlugiTekst);
    cout << dlugiTekst;

}

