#include <iostream>
using namespace std;

int main()
{
    double bok1 = 1;
    double* w_bok1 = &bok1;
    double bok2 = 2;
    double* w_bok2 = &bok2;

    double pole;
    double* w_pole = &pole;

    //pole = bok1 * bok2;
    *w_pole = *w_bok1 * *w_bok2;

    double obwod;
    double* w_obwod = &obwod;
    *w_obwod = 2 * *w_bok1 + 2 * *w_bok2;

    cout << "Pole: " << *w_pole << endl;
    cout << "Obwod: " << *w_obwod << endl;

}
