#include <iostream>
using namespace std;

template<typename T>
T myMax(T a, T b) {
    return (a > b) ? a : b;
}

template<>
float myMax(float a, float b) {
    a = round(a * 10) / 10;
    b = round(b * 10) / 10;
    return (a > b) ? a : b;
}

int main()
{
    cout << myMax(5, 9) << endl;
    cout << myMax<char>('g', 'b') << endl;
    cout << myMax<float>(4.789, 5.91) << endl;

}

