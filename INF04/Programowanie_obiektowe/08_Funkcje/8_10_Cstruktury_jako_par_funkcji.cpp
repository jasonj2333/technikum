#include <iostream>
using namespace std;

//Definicja typu strukturowego Pracownik
struct Pracownik {
    //deklaracje pól (zmiennych członkowskich)
    int id;
    char imie[30];
    char nazwisko[30];
};

//Prototypy funkcji
void pobierzDane(Pracownik&); //Parametr formalny funkcji przekazywany przez referencję
void wyswietlDane(const Pracownik&); //Parametr przekazywany przez referencję do stałej const typu Pracownik



int main()
{
    //Deklaracja zmiennej (struktury) pracownik należącej do typu struktury Pracownik
    Pracownik pracownik;

    cout << "Wprowadz dane wejsciowe: " << endl;
    //Wywołanie funkcji pobierzDane()
    pobierzDane(pracownik);
    /* UWAGA:
    Argumentem wywołania funkcji pobierzDane() jest referencja do zmiennej strukturowej o nazwie pracownik
    należącej do typu strukturowego Pracownik */

    cout << "\n\nWprowadzone dane: " << endl;
    //Wywołanie funkcji wyswielDane()
    wyswietlDane(pracownik);
    /*UWAGA:
    Argmentem wywołania funkcji wyswietlDane() jest referencja do zmiennej pracownik typu Pracownik, 
    traktowana jako stała const*/
    
    return 0;
}

void pobierzDane(Pracownik& p) {
    cout << "Numer identyfikacyjny:";
    cin >> p.id;
    cout << "Imię:";
    cin >> p.imie;
    cout << "Nazwisko:";
    cin >> p.nazwisko;
}
//UWAGA:
//Funkcja pobierzDane() ma jeden parametr formalny, który odgrywa rolę jej wyjścia.
//Parametr ten jest przekazywany jako referencja do zmiennej należącej do typu strukturowego Pracownik

void wyswietlDane(const Pracownik& p) {
    cout << "Nr identyfikacyjny: " << p.id << endl;
    cout << "Imię: " << p.imie << endl;
    cout << "Nazwisko: " << p.nazwisko << endl;
}

//UWAGA:
//Funkcja wyswietlDane() ma jeden parametr formalny reprezentujący jego wejście.
//Parametr ten jest przekazywany jako referencja do stałej const należącej do typu strukturowego Pracownik