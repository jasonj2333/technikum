#include <iostream>
using namespace std;

template<class T>
class Prostokat {
public:    
    T bok1, bok2;

    T pole() {
        return bok1 * bok2;
    }
    T obwod();
};

int main()
{
    Prostokat<float> prostokat1{ 2,3 };
    cout << "Pole wynosi: " << prostokat1.pole() << endl;
    cout << "Obwod wynosi: " << prostokat1.obwod() << endl;
}

template<class T>
T Prostokat<T>::obwod() {
    return 2 * bok1 + 2 * bok2;
}