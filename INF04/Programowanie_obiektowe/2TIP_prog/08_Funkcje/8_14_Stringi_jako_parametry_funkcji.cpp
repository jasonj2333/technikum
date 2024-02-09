#include <iostream>
using namespace std;


//Definicje funkcji
void pobierzLancuch(string& lancuch) {
    cin >> lancuch;
}

void wyswietlLancuch(string& lancuch) {
    cout << lancuch << endl;
}

void sumaLancuchow(string lancuch1, string lancuch2, string& lancuch3) {
    lancuch3 = lancuch1 + " " + lancuch2;
}

int main()
{
    string nazwaJezyka = "", wersjaJezyka = "";
    string jezyk = "";

    //Pobranie danych wejściowych w postaci łańcuchów znaków należących do typu string
    cout << "Podaj nazwę języka programowania: ";
    pobierzLancuch(nazwaJezyka);

    cout << "Podaj wersję: ";
    pobierzLancuch(wersjaJezyka);

    //Przetwarzanie danych
    sumaLancuchow(nazwaJezyka, wersjaJezyka, jezyk);

    //Prezentacja wyniku:
    cout << "Język programowania: ";
    wyswietlLancuch(jezyk);

    return 0;
}
