#include <iostream>
using namespace std;

template<class T, int n>
class Oceny {
public:
    T oceny[n];
    T max() {
        T temp = oceny[0];
        for (int i = 1; i < n; i++) {
            if (oceny[i] > temp) temp = oceny[i];
        }
        return temp;
    }
    T min() {
        T temp = oceny[0];
        for (int i = 1; i < n; i++) {
            if (oceny[i] < temp) temp = oceny[i];
        }
        return temp;
    }
};

int main()
{
    Oceny<int, 4> oceny{ 3,4,6,3 };
    cout << "Najwyzsza ocena: " << oceny.max() << endl;
    cout << "Najnizsza ocena: " << oceny.min() << endl;
}

