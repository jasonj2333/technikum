#include<iostream>
using namespace std;

class Konto {
    int stan {100};

public:
    int getStan(){
        return stan;
    }
    void setStan(int stan){
        this->stan = stan;
    }
    void wplac(int kwota){
        stan += kwota;
    }
    bool wyplac(int kwota){
        if(stan >= kwota) {
            stan -= kwota;
            return true;
        }else{
            return false;
        }
    }
    int zamknij(){
        int temp = stan;
        stan = 0;
        return temp;
    }

};

int main()
{
    Konto konto1;
    cout << "Stan konta: " << konto1.getStan() << endl;
    cout << (konto1.wyplac(100) ? "Wyplacono" : "Blad") << endl;
    konto1.wplac(500);  
    konto1.wplac(200);
    konto1.wyplac(400);
    cout << "Stan konta: " << konto1.getStan() << endl;  
    cout << "Zamknieto konto, wyplacono: " << konto1.zamknij() << endl;
    cout << "Stan konta: " << konto1.getStan() << endl;  
    return 0;
}