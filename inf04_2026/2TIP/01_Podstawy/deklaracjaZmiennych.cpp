#include <iostream>
#include <bitset>
using namespace std;

typedef unsigned short kbyte; //Definicja typu kbyte jako alias dla unsigned short
kbyte zmienna = 65535; //Przypisanie wartości 65535 do zmiennej typu kbyte

using bajt = unsigned char; //Definicja typu byte jako alias dla unsigned char
bajt zmienna2 = 255; //Przypisanie wartości 255 do zmiennej typu byte

//Inicjalizacja zmiennych
int liczba; //Deklaracja zmiennej liczba typu int
int liczba2 = 10; //Deklaracja i inicjalizacja (Definicja) zmiennej liczba2 typu int z wartością 10
string imie = "Tomek"; //Inicjalizacja kopiująca zmiennej imie typu string z wartością "Tomek"

float liczba3(4.7); //Inicjalizacja bezpośrednia(konstruktorowa) zmiennej liczba3 typu float z wartością 4.7
double liczba4{ 3.14 }; //Inicjalizacja listowa zmiennej liczba4 typu double z wartością 3.14
int klasa{}; //Inicjalizacja zerowa
string nazwisko{}; //Inicjalizacja zerowa
bool prawda{}; //Inicjalizacja zerowa (fałsz)

float bok1{ 5.0 };
float bok2 = { 3.0 };
float pole, obwod;

auto zmiennaFloat = 4.6f;
auto zmiennaZWyrazenia{ liczba3 + 4 };

int main()
{
    cout << zmienna << endl;
    cout << (int)zmienna2 << endl;

    liczba = 5; //Przypisanie wartości 5 do zmiennej liczba
	pole = bok1 * bok2; //Obliczenie pola prostokąta
	obwod = 2 * (bok1 + bok2) ; //Obliczenie obwodu prostokąta
    cout << "Pole wynosi ->  " << pole << endl;
    cout << "Obwod wynosi ->  " << obwod << endl;

    cout << typeid(zmiennaFloat).name() << endl;
	cout << zmiennaZWyrazenia << endl;

    //literały
	cout << 10 << endl; //literał całkowity
	cout << 3.14 << endl; //literał zmiennoprzecinkowy
	cout << 'A' << endl; //literał znakowy
	cout << "Witaj, świecie!" << endl; //literał napisowy
	cout << 035 << endl; //literał ósemkowy
	cout << bitset<8>(0b1010) << endl; //literał binarny
	cout << 0x1F << endl; //literał szesnastkowy

}
