#include <iostream>

using namespace std;

//Definicja C-unii o nazwie ocena
    union Ocena{
        //elementy członkowskie
        short ocena_c; //ocena całkowita
        float ocena_r; //ocena z polówkami
    };

int main()
{
    //Deklaracja zmiennej ocena połoczona z inicjalizacją wartością 4 jej elementu członkowskiego ocena c:
    Ocena ocena = {.ocena_c = 13};

    //Rozmiar unii
    cout << sizeof(ocena) << endl; //4 bajty - tyle ile wymaga największy element członkowski

    //Rozmiar elementu członkowskiego ocena_c
    cout << sizeof(ocena.ocena_c) << endl; //2 bajty - short

    //Wyświetlenie elementu członkowskiego ocena_c
    cout << ocena.ocena_c << endl; //13

    //Nadanie wartości elementowi członkowskiemu ocena_r
    ocena.ocena_r = 3.5;

    cout << sizeof(ocena) << endl; //4
    cout << sizeof(ocena.ocena_r) << endl; //4

    cout << ocena.ocena_r << endl; //3.5
    //cout << ocena.ocena_c << endl; //0


    return 0;
}
