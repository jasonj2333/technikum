#define _USE_MATH_DEFINES //w celu użycia stałej M_PI, która nie jest zdefiniowana w standartowym c/c++
#include <cmath>
#include "kolo.h"

//Definicje publicznych metod członkowskich Klasy Kolo
//Definicje kontruktorów
Kolo::Kolo(){}
Kolo::Kolo(double r){
    _r = r;
}
//Definicja settera
void Kolo::setPromien(double r){
    _r = r;
}
//Definicja gettera
double Kolo::getPromien(){
    return _r;
}
//Definicje zwykłych metod instancyjnych
double Kolo::pole(){
    return M_PI * _r * _r;
}
double Kolo::obwod(){
    return 2 * M_PI * _r;
}