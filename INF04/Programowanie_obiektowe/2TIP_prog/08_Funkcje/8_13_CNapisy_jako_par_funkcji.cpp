#include <iostream>
#include<cstring>
using namespace std;
//#pragma warning(disable : 4996)

//Definicje funkcji
void pobierzNapis(char napis[]) {
    cin >> napis;
}
//UWAGA:
//Zadaniem funkcji pobierzNapis() jest pobranie C-napisu z klawiatury przy wykorzystaniu standardowego strumienia
//wejścia cin. Funkcja ma jeden parametr wyjściowy o nazwie napis typu wskaźnikowego char*.

void wyswietlNapis(const char napis[]) {
    cout << napis << endl;
}
//UWAGA:
//Zadaniem funkcji wywietlNapis() jest wyświetlenie C-napisu na ekranie monitora przy wykorzystaniu standardowego strumienia
//wyjściowego cout. Funkcja ma jeden parametr wejściowy o nazwie napis, przekazywany do funkcji jako wskaźnik do stałej 
//const typu char.

void sumaNapisow(const char napis1[], const char napis2[], char napis3[]) {
    char temp[10] = "";
    
    strcat(temp, napis1);
    strcat(temp, " ");
    strcat(temp, napis2);
    
    strcat(napis3, temp);
}
//UWAGA:
//Zadaniem funkcji sumaNapisow() jest dodanie (konkatenacja C-napisów napis1, " ", napis2).
//Wynik zostaje podstawiony do C-łańcucha napis3.
//Funkcja ma dwa parametry wejściowe: napis1, napis2, przekazywane do funkcji jako wskaźniki do stałych const typu char.
//Parametr wyjściowy funkcji napis jest przekazywany do jej otoczenia jako wskaźnik char*.

int main()
{
    char nazwaJezyka[10] = "", wersjaJezyka[10] = "";
    char jezyk[10] = "";

    //Pobranie danych wejściowych
    cout << "Podaj nazwę języka programowania: ";
    pobierzNapis(nazwaJezyka);

    cout << "Podaj wersję: ";
    pobierzNapis(wersjaJezyka);

    //Przetwarzanie danych
    sumaNapisow(nazwaJezyka, wersjaJezyka, jezyk);

    //Prezentacja wyniku:
    cout << "Język programowania: ";
    wyswietlNapis(jezyk);

    return 0;
}
