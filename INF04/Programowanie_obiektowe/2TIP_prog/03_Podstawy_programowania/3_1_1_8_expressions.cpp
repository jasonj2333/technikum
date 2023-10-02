#include<iostream>
using namespace std;

// Wyrażennia to sekwencja zmiennych, stałych i operatorów zgodnia z regułami języka C++
// określającą obliczenia (operacje), które dają rezultat określonego typu.
// -wyrażenia stałe 1 + 10
// - wyrażenia całkowite 10 * a, gdzie a jest typu int
// - wyrażenia rzeczywiste 10 / a, gdzie jest typu float
// - wyrażenia bitowe a | b, gdzie a i b należą do typu int
// - wyrażenia porównania a > 0, gdzie a należy do typu int
// - wyrażenia logiczne a && b, gdzie a i b należą do typu bool


int main()
{
    //Konwersja niejawna
    long zmiennaLong;
    const int stalaInt = 1;

    //Nadanie wartości zmiennej zmiennaLong
    zmiennaLong = stalaInt;
    // UWAGA
    // W wyrażeniu poniżej następuje niejawna konwersja typu wartości stałej stalaInt z int do long - promocja typu;

    int zmiennaInt = 10;
    zmiennaLong = zmiennaInt;

    double zmiennaDouble = zmiennaInt + 1.5f;
    // UWAGA:
    // W wyrażeniu powyżej następuje niejawna konwersja typu wartości zmiennej zmiennaInt z typu int na double.
    // Oprócz tego zachodzi promocja typu literału zmiennoprzecinkowego 1.5F z typu float na double

    zmiennaInt = zmiennaDouble;
    // UWAGA:
    // W wyrażeniu powyżej następuje niejawna konwersja typu wartości zmiennej zmiennaDouble z typu double na int.
    // Konwersja z typu "wiekszego" na typ "mniejszy" może wiązać się z utratą pewnych informacji, np. z utratą precyzji.

    return 0;
}