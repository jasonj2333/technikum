#include<iostream> //strumien wejścia, wyjścia należący do biblioteki standardowej
using namespace std;

int main()
{
    int bok1, bok2;
    std::cout << "Obliczanie pola i odwodu prostokąta" << std::endl;
    cout << endl;
    cout << "Podaj długość pierwszego boku: ";
    std::cin >> bok1;
    cout << "Podaj długość drugiego boku: ";
    cin >> bok2;

    int pole = bok1 * bok2;
    int obwod {2 * bok1 + 2 * bok2};

    cout << endl << "Wyniki: " << endl;
    cout << endl << "Pole wynosi: " << pole << endl;
    cout << endl << "Obwod wynosi: " << obwod << endl;

    return 0;
}