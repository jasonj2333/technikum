#include <iostream>
#include <string>

using namespace std;

//Definicja typu strukturowego(C-Struktury) o nazwie Pracownik
struct Pracownik {
    string imie, nazwisko, stanowisko;
};

int main()
{
    //Deklaracja wskaźnika, który może wskazywać na zmienną typu strukturowego Pracownik
    Pracownik *wsk;

    //Utworzenie na stercie struktury typu Pracownik wskazywanej przez wskaźnik wsk
    wsk = new Pracownik;
    // UWAGA:
    // W pamięci operacyjnej po wykonaniu powyższej intrukcji zostanie utworzona zmienna typu Pracownik.
    // Pamięc dla tej zmiennej została zalokowana w sposób dynamiczny na stercie.
    // We wskaźniku wsk pamiętany jest adres początku bloku pamięci, w którym przechowywana jest nowo utworzona zmienna.

    //Wprowadzanie wartości pól struktury z klawiatury
    cout << "Podaj dane pracownika:" << endl;
    cout << "Imię:" ;

    //Odwołanie się do pola (zmiennej członkowskiej) struktury o nazwie imię:
    cin >> wsk->imie;

    /* UWAGA:
    Odwołanie się pół struktury następuje poprzez wykorzystanie wskaźnika wsk na strukturę, operatora strzałkowego -> i nazwy struktury wskaźnik->nazwa_pola */
    
    cout << "Nazwisko:" ;
    cin >> wsk->nazwisko;
    cout << "Stanowisko:" ;
    cin >> wsk->stanowisko;

    //Prezentacja danych zapisanych w strukturze pracownik za pomocą wskaźnika (-> z użyciem operatora strzałkowego)
    cout << "Dane pracownika" << endl;
    cout << "Imię: " << wsk->imie << endl;
    cout << "Nazwisko: " << wsk->nazwisko << endl;
    cout << "Stanowisko: " << wsk->stanowisko << endl;

    //Zwolnienie pamięci zarezerwowanej na stercie dla struktury typu Pracownik, wskazywanej przez wskaźnik wsk
    delete wsk;

    return 0;
}
