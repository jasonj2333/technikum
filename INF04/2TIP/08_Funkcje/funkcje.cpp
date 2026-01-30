#include <iostream>

using namespace std;

//Definicja funkcji
int poleProstokata(int bok1, int bok2) {
    return bok1 * bok2;
}
//Deklaracja funkcji - prototyp funkcji
int kwadrat(int);
int obwodProstokata(int, int);
int obwodKwadratu(int);
double poleKola(int);

int promien;

int main()
{
    cout << "Pole prostokata wynosi: " << poleProstokata(2, 3) << endl;
    cout << "Pole kwadratu wynosi: " << kwadrat(5) << endl;
    cout << "Obwod kwadratu wynosi: " << obwodKwadratu(5) << endl;
    cout << "Obwod prostokata wynosi: " << obwodProstokata(2, 3) << endl;

    promien = 5;

    cout << "Pole kola o promieniu " << promien << " wynosi " << poleKola(promien) << endl;
}

int kwadrat(int bok) {
    return poleProstokata(bok, bok);
}

int obwodProstokata(int a, int b) {
    return 2 * a + 2 * b;
}

int obwodKwadratu(int a) {
    return 4 * a;
}

double poleKola(int r) {
    return 3.141592 * r * r;
}