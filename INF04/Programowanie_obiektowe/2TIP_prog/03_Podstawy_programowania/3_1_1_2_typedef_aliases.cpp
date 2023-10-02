#include<iostream>
using namespace std;

int main()
{
    //aliasy nazw danych
    typedef unsigned char byte;
    using word = unsigned int;

    byte zmiennaA = 'c';
    word zmiennaB = 123;

    cout << zmiennaA << zmiennaB << endl;

    return 0;
}