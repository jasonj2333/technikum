#include <iostream>
using namespace std;

template<typename T>
T srednia(
    T wyklad,
    T cwiczenia,
    T laboratorium,
    T seminarium
) {
    return (wyklad + cwiczenia + laboratorium + seminarium) / 4;
}

template<>
float srednia(
    float wyklad,
    float cwiczenia,
    float laboratorium,
    float seminarium
) {
    return round(wyklad + cwiczenia + laboratorium + seminarium) / 4;
}

template<>
double srednia(
    double wyklad,
    double cwiczenia,
    double laboratorium,
    double seminarium
) {
    return (round(wyklad) + round(cwiczenia) + round(laboratorium) + round(seminarium)) / 4;
}

int main()
{
    cout << "Srednia ocen: " << srednia(3, 3, 4, 5) << endl;
    cout << "Srednia ocen: " << srednia<float>(4.5, 3, 4, 5) << endl;
    cout << "Srednia ocen: " << srednia<double>(4.5, 3, 4, 5) << endl;
}
