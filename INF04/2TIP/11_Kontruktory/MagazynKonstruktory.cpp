#include <iostream>
#include <vector>

using namespace std;

class Magazyn {
    string nazwa;
    vector<int> produkty;
public:
    Magazyn() {
        nazwa = "Brak";
        cout << "Konstruktor domyslny" << endl;
    }

    Magazyn(string nazwa, int rozmiar) {
        this->nazwa = nazwa;
        produkty.resize(rozmiar, 0);
        cout << "Konstruktor parametryczny - 2 parametry" << endl;
    }

    Magazyn(int rozmiar) {
        nazwa = "Nowy";
        produkty.resize(rozmiar, 0);
        cout << "Konstruktor parametryczny - 1 parametr" << endl;
    }

    Magazyn(const Magazyn& wzorzec) {
        nazwa = wzorzec.nazwa;
        produkty = wzorzec.produkty; //deep copy - klasa Vector

        cout << "Konstruktor kopiujacy" << endl;
    }

    ~Magazyn() {
        cout << "Usuwanie obiektu" << endl;
    }

    void ustawProdukty(int indeks, int wartosc) {
        if(indeks >=0 && indeks <= produkty.size())
            produkty[indeks] = wartosc;
    }

    void pokazMagazyn() {
        cout << "Magazyn: " << nazwa << endl;
        for (int ilosc : produkty) {
            cout << ilosc << ", ";
        }
        cout << endl;
    }
};

void test(Magazyn m) {
    cout << "Funkcja test" << endl;
    m.pokazMagazyn();
}

int main()
{
    Magazyn m1;
    m1.ustawProdukty(1, 19);
    m1.pokazMagazyn();
    Magazyn m2(5);
    m2.ustawProdukty(1, 19);
    m2.pokazMagazyn();
    Magazyn m3("Elektronika", 4);
    m3.pokazMagazyn();
    m3.ustawProdukty(3, 11);
    Magazyn m4(m3);
    m4.ustawProdukty(2, 7);
    m4.ustawProdukty(3, 5);
    m4.pokazMagazyn();
    m3.pokazMagazyn();

    test(m3);
}
