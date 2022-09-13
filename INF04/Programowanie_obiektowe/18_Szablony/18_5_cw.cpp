#include<iostream>
#include<cmath>
using namespace std;

template<class T> 
class Oceny {
public:
    Oceny() {
        cout << "Wywołanie konstruktora klasy ogólnej..." << endl;
    }
    T wyklad;
    T cwiczenia;
    T laboratorium;
    T seminarium;
    T srednia() { 
        return (wyklad + cwiczenia + laboratorium + seminarium) / 4;
    }

};

template<>
class Oceny<double> {
public:
    Oceny() {
        cout << "Wywołanie konstruktora klasy specjalizowanej dla danych typu double..." << endl;
    }
    double wyklad;
    double cwiczenia;
    double laboratorium;
    double seminarium;
    double srednia() {
        return (round(wyklad) + round(cwiczenia) + round(laboratorium) + round(seminarium)) / 4;
    }

};

template<>
class Oceny<float> {
public:
    Oceny() {
        cout << "Wywołanie konstruktora klasy specjalizowanej  dla danych typu float..." << endl;
    }
    float wyklad;
    float cwiczenia;
    float laboratorium;
    float seminarium;
    float srednia() {
        return (round(wyklad) + round(cwiczenia) + round(laboratorium) + round(seminarium)) / 4;
    }

};

template<>
class Oceny<long> {
public:
    Oceny() {
        cout << "Wywołanie konstruktora klasy specjalizowanej dla danych typu long..." << endl;
    }
    long wyklad;
    long cwiczenia;
    long laboratorium;
    long seminarium;
    long srednia() {
        return (round(wyklad) + round(cwiczenia) + round(laboratorium) + round(seminarium)) / 4;
    }

};

int main()
{
    //Utworzenie obiektu oceny1
    Oceny<int> oceny1 = Oceny<int>();
    oceny1.wyklad = 3;
    oceny1.cwiczenia = 4;
    oceny1.laboratorium = 3;
    oceny1.seminarium = 4;
    cout << "Średnia ocen semestralnych: " << oceny1.srednia() << endl;

    //Utworzenie obiektu oceny2
    Oceny<double> oceny2;
    oceny2.wyklad = 3.0;
    oceny2.cwiczenia = 4.0;
    oceny2.laboratorium = 3.0;
    oceny2.seminarium = 4.0;
    cout << "Średnia ocen semestralnych: " << oceny2.srednia() << endl;

    //Utworzenie obiektu oceny3
    Oceny<float> oceny3;
    oceny3.wyklad = 3.0;
    oceny3.cwiczenia = 4.0;
    oceny3.laboratorium = 3.0;
    oceny3.seminarium = 4.0;
    cout << "Średnia ocen semestralnych: " << oceny3.srednia() << endl;

    //Utworzenie obiektu oceny4
    Oceny<long> oceny4;
    oceny4.wyklad = 3.0;
    oceny4.cwiczenia = 4.0;
    oceny4.laboratorium = 3.0;
    oceny4.seminarium = 4.0;
    cout << "Średnia ocen semestralnych: " << oceny4.srednia() << endl;

    return 0;
}