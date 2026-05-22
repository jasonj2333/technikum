#include <iostream>

using namespace std;

class Pracownik {
    string imie{ "" };
    string nazwisko{ "" };
public:
    void setImie(string imie) {
        this->imie = imie;
    }

    string getImie() {
        return imie;
    }

    void setNazwisko(string nazwisko) {
        this->nazwisko = nazwisko;
    }

    string getNazwisko() {
        return nazwisko;
    }

    string zwrocDane() {
        return imie + " " + nazwisko;
    }
};

class Nauczyciel : public Pracownik {
public:
    string przedmiot{ "" };

    string zwrocDane() {
        //return imie + " " + nazwisko + " " + przedmiot;
        return Pracownik::zwrocDane() + " " + przedmiot;
    }
};

int main()
{
    //Pracownik pracownik{ "Jan", "Kowalski" };
    Pracownik pracownik;
    pracownik.setImie("Tomek");
    pracownik.setNazwisko("Atomek");
    cout << pracownik.zwrocDane() << endl;

    Nauczyciel nauczyciel;
    //nauczyciel.imie = "Anna";
    //nauczyciel.nazwisko = "Zawada";
    nauczyciel.setImie("Anna");
    nauczyciel.setNazwisko("Zawada");
    nauczyciel.przedmiot = "fizyka";
    cout << nauczyciel.zwrocDane() << endl;
}

