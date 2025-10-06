#include <iostream>
using namespace std;

template<typename T>
T polePr(T bok1, T bok2) {
    return bok1 * bok2;
}

template<typename T>
T obwodPr(T bok1, T bok2) {
    return 2* bok1 + 2 * bok2;
}

int main()
{
    float a{ 1.5 }, b{ 2.5 };
    cout << "Pole wynosi: " << polePr<int>(a, b) << endl;
    cout << "Pole wynosi: " << polePr<float>(a, b) << endl;
    cout << "Obwod wynosi: " << obwodPr<double>(a, b) << endl;
    cout << "Obwod wynosi: " << obwodPr(a, b) << endl;
}
