#include<iostream>
using namespace std;

//Definicja klasy bazowej Pracownik
class Pracownik {
public:

    //Prototyp metody wirtualnej zwrocDane()
    virtual void zwrocDane();
};

//Definicja klasy pochodnej Nauczyciel
class Nauczyciel : public Pracownik {
public:
    //Prototyp metody zwrocDane()
    void zwrocDane();
};

//Definicja klasy pochodnej Wychowawca
class Wychowawca : public Nauczyciel {
public:
    //Prototyp metody publicznej zwrocDane()
    void zwrocDane();
};
//UWAGA:
//W każdej z klas wchodzących w skład łańcucha dziedziczenia zadeklarowano metodę publiczną (zwrocDane())
//o takiej samej nazwie oraz identycznych parametrach (liczbie i typie) i typach zwracanych wartości.
//Przy tym metoda zdefiniowana w klasie bazowej Pracownik jest metodą virtualną.

//Definicje metod
void Pracownik::zwrocDane() {
    cout << "Wywołanie metody zwrocDane() zdefiniowanej w klasie Pracownik" << endl;
}

void Nauczyciel::zwrocDane() {
    cout << "Wywołanie metody zwrocDane() zdefiniowanej w klasie Nauczyciel" << endl;
}

void Wychowawca::zwrocDane() {
    cout << "Wywołanie metody zwrocDane() zdefiniowanej w klasie Wychowawca" << endl;
}


int main()
{
    //Deklaracja wskaźnika w_pracownik typu statycznego Pracownik
    Pracownik *w_pracownik;
   
    //Utworzenie obiektu pracownik1 jako instacji klasy Pracownik
    Pracownik pracownik1;
    //Przypisane wskaźnikowi w_pracownik adresu obiektu pracownik1
    w_pracownik = &pracownik1;
    //Wywołanie metody zwrocDane()
    w_pracownik->zwrocDane(); //zostaje wywołana metoda z klasy bazowej Pracownik


    //Utworzenie obiektu pracownik2 jako instacji klasy Nauczyciel
    Nauczyciel pracownik2;
    w_pracownik = &pracownik2;
    /*UWAGA:
    Realizacja przypisania
    w_pracownik = &pracownik2;
    powoduję zmianę typu dynamicznego wskaźnika w_pracownik z typu Pracownik na typ Nauczyciel.
    Po wykonaniu przypisania wskaźnik ten wskazuje na obiekt pracownik2 należący do typu Nauczyciel.*/

    //Wywołanie metody zwrocDane()
    w_pracownik->zwrocDane(); 
    /*UWAGA:
    Ze względu na to, że typem dynamicznym wskaźnika w_pracowik jest typ Nauczyciel, wywołana
    zostaje metoda zwrocDane() zdefiniowana w klasie pochodnej Nauczyciel.
    Tym samym metoda wierualna zwrocDane() zdefiniowana w klasie bazowej zostaje przesłonięta
    przez metodę zwrocDane() z klasy pochodnej.*/

    
    //Utworzenie obiektu pracownik3 jako instacji klasy Wychowawca
    Wychowawca pracownik3;
    //Zmiana typu dynamicznego wskaźnika w_pracownik na typ Wychowawca
    w_pracownik = &pracownik3;  

    //Wywołanie metody zwrocDane()
    w_pracownik->zwrocDane(); //zostaje wywołana metoda z klasy pochodnej Wychowawca.
    
    /*PODSUMOWANIE:
    W programie zachodzi polimorfizm dynamiczny, który dotyczy metod zwrocDane() zdefiniowanych
    w klasie bazowej i klasach pochodnych lańcucha dziedziczenia. Wspomniany polimorfimz został uzyskany
    dzikie zadeklarowaniu funkcji zwrocDane() w klasie bazowej jako wirtualnej. W programie występują
    wiązania dynamiczne, czyli wiązania typu dynamicznego wskaźnika w_pracownik z typem obiektu, 
    na który faktycznie wskazuje ten wskaźnik.*/
    return 0;
}