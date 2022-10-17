#include<iostream>
using namespace std;

//Prorotypy funkcji
void polePr(double, double, double&); 
void obwodPr(double, double,double&); 
/* UWAGA:
Funkcje polePr() i obwodPr() mają po trzy parametry. Dwa pierwsze są przekazywane przez wartość, a trzeci przez referencje. 
Słowo kluczowe void oznacza, że funkcja nie zwraca żadnej wartości na zewnątrz. */

int main()
{
    double bok1 = 1; //pierwszy bok prostokąta
    double bok2 = 2; //drugi bok prostokąta
    double pole; //pole prostokąta

    //Wywołanie funkcji polePr()
    polePr(bok1, bok2, pole);
    /* UWAGA:
    Wywołanie funkcji typu void jest niezależną samodzielną intrukcją.
    Dwa pierwsze argumenty wywołania są przekazywane do funkcji przez wartość, a trzeci argument przez referencje, jak określono w deklaracji funkcji.
    Oznacza to, że na stosie tworzone są kopie zmiennych bok1 i bok2. Są to zmienne lokalne o nazwach b1 i b2, odpowiadające parametrom funkcji.
    Innymi słowy, parametrom b1 i b2 w definicji funkcji przypisane zostają wartości kopii argumentów jej wywołania bok1 i bok2.
    Dla argumentu referencyjnego o nazwie pole kopie nie jest wykonywana, ponieważ nie jest potrzebna.
    Wynika to faktu, żę w chwili wywołania funkcji referencja do zmiennej pole, będącej argumentem, jest kopiowana do parametru poleP. Wszystkie operacje odbywają się na oryginale zmiennej pole, pod nazwą aliasową poleP. */

    double obwod; //obwód prostokąta

    //Wywołanie funkcji obwodPr()
    obwodPr(bok1, bok2, obwod);
    /* UWAGA:
    Argumentami wywołania funkcji obwodPr() są zmienne bok1, bok2 i obwod.
    Argumenty bok1 i bok2 stanowią wejście funkcji - są przekazywane przez wartość
    Argument obwod odgrywa rolę wyjścia funkcji - jest przekazywany przez referencję. */


    cout << "Wyniki: " << endl;
    cout << "Pole = " << pole << endl;
    cout << "Obwod = " << obwod << endl;

    return 0;
}

//Definicje funkcji PolePr() i obwodPr()
void polePr(double b1, double b2, double &poleP) {
    poleP = b1 * b2; 
}

void obwodPr(double b1, double b2, double &obwodP) {
    obwodP =  2 * b1 + 2 * b2; 
}
