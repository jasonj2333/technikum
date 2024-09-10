#include <iostream>

using namespace std;

void wypisz(int ile=5){
    for(int i = 0; i < ile; i++){
        cout << "c++" << endl;
    }
}

int suma(){
    int suma = 0;
    int skladnik;
    while(skladnik != 0){
        cout << "Podaj liczbe: ";
        cin >> skladnik;
        suma = suma + skladnik;
    }
    return suma;
}

int main()
{
    //wypisz(20);
    int s = suma();
    cout << "Suma skladnikow = " << s << endl;
    return 0;
}
