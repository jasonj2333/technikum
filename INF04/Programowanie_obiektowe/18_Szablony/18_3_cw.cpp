#include<iostream>
//#include <typeinfo>
using namespace std;

template<class T>
class Kwadrat {
public:
    T bok;
    T pole() {
        return bok * bok;
    }
    T obwod() {
        return 4 * bok;
    };
};

int main()
{
    Kwadrat<long> kwadrat1 { 1 };
    cout << "Pole wynosi: " << kwadrat1.pole() << endl; //2
    cout << "Obwód wynosi: " << kwadrat1.obwod() << endl; //6

    Kwadrat<float> kwadrat2{ 1 };
    cout << "Pole wynosi: " << kwadrat2.pole() << endl;
    cout << "Obwód wynosi: " << kwadrat2.obwod() << endl;

    /*auto pole = kwadrat2.pole();
    cout << "Pole wynosi: " << typeid(pole).name() << endl;*/

    return 0;
}