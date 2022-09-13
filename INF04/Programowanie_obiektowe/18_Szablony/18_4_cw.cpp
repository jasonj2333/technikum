#include<iostream>
using namespace std;

template<class T, int n>
class Oceny {
public:
    T oceny[n]; 
    T max() { 
        T temp = oceny[0];
        for (int i = 0; i < n; i++) {
            if (oceny[i] > temp) temp = oceny[i];
        }
        return temp;
    }

    T min() { 
        T temp = oceny[0];
        for (int i = 0; i < n; i++) {
            if (oceny[i] < temp) temp = oceny[i];
        }
        return temp;
    }

    T srednia() {
        T temp = 0;
        for (int i = 0; i < n; i++) {
            temp += oceny[i];
        }
        return temp / n;
    }
};

int main()
{
    Oceny<int, 3> oceny{ 3,5,4 };
    cout << "Najwyższa z oceny: " << oceny.max() << endl; 
    cout << "Najniższa z oceny: " << oceny.min() << endl; 
    
    Oceny<float, 4> oceny2{ 3,5,4,2 };
    cout << "Średnia z ocen: " << oceny2.srednia() << endl; 
    return 0;
}