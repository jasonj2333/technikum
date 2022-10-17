//Plik nagłówkowy
//Deklaracja klasy Kolo
class Kolo {
private:
    //Deklaracja prywatnej zmiennej członkowskiej.
    double _r;
public:
    //Prototypy kontruktorów
    Kolo();
    Kolo(double);
    //Deklaracje pubicznych metod dostępowych
    void setPromien(double); //setter
    double getPromien(); //getter
    //Prototypy (nagłównki) zwykłych metod instancyjnych
    double pole();
    double obwod();
};