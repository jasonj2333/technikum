#include <iostream>
using namespace std;

int main()
{
    int bok1, bok2, pole;
    int *w_bok1{}, *w_bok2{}, *w_pole{};

    w_bok1 = &bok1;
    w_bok2 = &bok2;
    w_pole = &pole;

    cout << "Podaj 1 bok: ";
    cin >> *w_bok1;

    cout << "Podaj 2 bok: ";
    cin >> *w_bok2;

    *w_pole = (*w_bok1) * (*w_bok2);

    cout << "Pole prostokata wynosi: " << *w_pole << endl;

}


