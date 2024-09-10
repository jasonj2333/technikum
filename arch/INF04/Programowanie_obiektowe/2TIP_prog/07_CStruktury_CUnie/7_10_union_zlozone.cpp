#include <iostream>

using namespace std;

//Definicja C-struktur pomocniczych
struct Plane
{
    float x, y;
};

struct Space
{
    float x, y, z;
};


//Definicja C-unii Coordinates
union Coordinates{
    //elementy członkowskie
    Plane w2; //współrzedne punktów na płaszczyźnie
    Space w3; //współrzędne punktów w przestrzeni 3D
};

int main()
{
    //Deklaracja zmiennej w należącej do typu Coordinates:
    Coordinates w;

    //Wprowadzenie z klawiatury wartości pól x,y elementu członkowskiego w2
    cout << "Podaj wartosc wspolrzednych punktow na plaszczyznie:" << endl;
    cout << "x = " ;
    cin >> w.w2.x;
    cout << "y = " ;
    cin >> w.w2.y;

    cout << "Wprowadzone wartosci wspolrzedne punktu" << endl;
    cout << "x: " << w.w2.x << endl;
    cout << "y: " << w.w2.y << endl;

    //Wprowadzenie z klawiatury wartości pól x,y,z elementu członkowskiego w3
    cout << "Podaj wartosc wspolrzednych punktow w przestrzeni:" << endl;
    cout << "x = " ;
    cin >> w.w3.x;
    cout << "y = " ;
    cin >> w.w3.y;
    cout << "z = " ;
    cin >> w.w3.z;

    cout << "Wprowadzone wartosci wspolrzedne punktu" << endl;
    cout << "x: " << w.w3.x << endl;
    cout << "y: " << w.w3.y << endl;
    cout << "z: " << w.w3.z << endl;

    return 0;
}
