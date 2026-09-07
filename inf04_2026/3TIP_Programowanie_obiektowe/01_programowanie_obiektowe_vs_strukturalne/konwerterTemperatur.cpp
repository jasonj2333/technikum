#include <iostream>
using namespace std;

//Strukturalnie
void celToFahr(int temperatura) {
    double temp = temperatura * 1.8 + 32;
    cout << temp << endl;
}

void fahrToCel(int temperatura) {
    double temp = temperatura / 1.8 - 32;
    cout << temp << endl;
}

//Obiektowo
class KonwerterTemperatur
{
    int temperatura;
public:
	KonwerterTemperatur(int);
    void celToFahr(int);
    void fahrToCel(int);
};

KonwerterTemperatur::KonwerterTemperatur(int temperatura) : temperatura{temperatura}{}

void KonwerterTemperatur::celToFahr(int temperatura) {
    double temp = temperatura * 1.8 + 32;
    cout << temp << endl;
}

void KonwerterTemperatur::fahrToCel(int temperatura) {
    double temp = temperatura / 1.8 - 32;
    cout << temp << endl;
}

int main()
{
    std::cout << "Hello World!\n";
}

