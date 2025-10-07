#include <iostream>
using namespace std;

int main()
{
    enum Stanowisko {
        dyrektor,   //enumerator 0
        kierownik,  //enumerator 1
        sekretarka, //enumerator 2
        portier     //enumerator 3
    };

    Stanowisko stanowisko = portier;

    switch (stanowisko) {
    case dyrektor:
        cout << "Witaj dyrektorze" << endl;
        break;
    case kierownik:
        cout << "Dzień dobry kierowniku" << endl;
        break;
    case sekretarka:
        cout << "Dzien dobry Pani" << endl;
        break;
    case portier:
        cout << "Czesc Wojtek" << endl;
        break;
    }

    cout << stanowisko << endl;

    enum Oceny {
        niedostateczny = 1,
        dopuszczajacy = 2,
        dostateczny = 3,
        dobry = 4,
        bardzo_dobry = 5,
        celujacy = 6
    };

    Oceny ocena = dostateczny;

    cout << ocena << endl;

    switch (ocena) {
    case niedostateczny:
        cout << "Ocena niedostateczna" << endl;
        break;
    case dopuszczajacy:
        cout << "Ocena dopuszczajacy" << endl;
        break;
    case dostateczny:
        cout << "Ocena dostateczny" << endl;
        break;
    }

    enum tydzien{PON = 2, WTO = 3, SRO = 4, CZW = 5, PIA = 6, SOB = 7, NIE = 1};

    cout << NIE << endl;

    //Enum class - podejście obiektowe od C++11
    enum class Kierunek{Polnoc, Poludnie, Wschod, Zachod};

    Kierunek k = Kierunek::Poludnie;

    cout << int(k) << endl;

    switch (k) {
    case Kierunek::Polnoc:
        cout << "Jedziemy na polnoc";
        break;
    case Kierunek::Poludnie:
        cout << "Jedziemy na poludnie";
        break;
    }

    enum class Swiatlo { Czerwone, Zolte, Zielone };

    Swiatlo sygnal = Swiatlo::Zolte; // można zmienić na Czerwone lub Zielone

    switch (sygnal) {
    case Swiatlo::Czerwone:
        cout << "Stój!" << endl;
        break;
    case Swiatlo::Zolte:
        cout << "Uwaga!" << endl;
        break;
    case Swiatlo::Zielone:
        cout << "Jedź!" << endl;
        break;
    default:
        cout << "Nieznany sygnał!" << endl;
        break;
    }
}
