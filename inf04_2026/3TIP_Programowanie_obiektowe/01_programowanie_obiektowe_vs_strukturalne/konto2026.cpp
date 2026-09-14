#include <iostream>
using namespace std;

class Konto {
    int numer;
    double saldo;
public:
    Konto(int numer, double saldo = 0) {
        this->numer = numer;
        this->saldo = saldo + 100;
    }

    void viewSaldo() {
        cout << "Stan konta: " << saldo << " zl";
    }

    double getSaldo() {
        return saldo;
    }

    bool wplata(double kwota) {
        if (kwota <= 0) return false;
        saldo = saldo + kwota;
        return true;
    }

    bool wyplata(double kwota) {
        if (saldo <= 0 || kwota > saldo) return false;
        saldo -= kwota;
        return true;
    }
};

int main()
{
    Konto k1(123, 500);
    int kwota;
    k1.viewSaldo();
    cout << "Twoj stan konta to: " << k1.getSaldo() << endl;
    cout << "Podaj wysokosc wplaty: ";
    cin >> kwota;
    if (k1.wplata(kwota)) {
        cout << "Dokonano wplaty na kwote: " << kwota << endl;
        k1.viewSaldo();
    }
    else {
        cout << "Nieudana wplata !!!" << endl;
    }
}

