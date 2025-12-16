#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    char napis1[30] = "Community";
    char napis2[] = "community";

    cout << "Dlugosc 1 napisu: " << strlen(napis1) << endl;
    cout << "Dlugosc 2 napisu: " << strlen(napis2) << endl;
    cout << "Rozmiar napisu 1: " << sizeof(napis1) << endl;
    cout << "Rozmiar napisu 2: " << sizeof(napis2) << endl;

    cout << "Czy napisy sa takie same: " << (napis1 == napis2) << endl;
}

