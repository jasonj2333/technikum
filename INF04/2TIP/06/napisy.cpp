#include <iostream>

using namespace std;

int main()
{
    char jezyk[15] = "C++"; //C-napis , Cstring

    cout << jezyk << endl;

    char jezyk2[] = "Python";
    char jezyk3[]{ "Java Script" };
    //char jezyk4 = jezyk3; //nie można tak kopiować C-napisów

    char wersja1[15]{ "C++ 98" };
    cout << wersja1 << endl;
    cout << "Podaj inna wersje C++ np. C++ 17: ";
    cin >> wersja1; //pobiera tylko do znaku białego
    cout << wersja1 << endl;

    char wersja2[25];
    cout << "Podaj wersje Visual Studio (np. Visual Studio 2026)" << endl;
    cin.ignore();
    cin.get(wersja2, 25);
    cout << wersja2 << endl; 

    int a, b, c;
    cout << "Podaj dlugosci bokow trojkata: ";
    cin >> a >> b >> c;
    cout << "Trojkat o bokach: " << a << " " << b << " " << c << endl;
}

