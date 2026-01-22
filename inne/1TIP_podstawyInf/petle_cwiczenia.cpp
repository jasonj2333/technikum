#include <iostream>

using namespace std;

int main()
{
    for(int i=1; i <= 10; i++){
        cout << i << endl;
    }

    for(int i=10; i >= 1; i--){
        cout << i << endl;
    }

    //Liczby od 14 do 3 za pomoca petli while
    int liczba = 14;
    while(liczba >= 3){
        cout << liczba << endl;
        liczba--;
    }

    //Prosi uzytkownika o podanie liczby dodatniej - petla do while
    int x;
    //cin >> x;
    do{
        cout << "Podaj liczbe: ";
        cin >> x;
        if(x == -33) break; //wyjscie z programu mimo nie spelnienia warunku
    }while(x <= 0);

    cout << "Poprawna liczba: " << x << endl;

    return 0;

}
