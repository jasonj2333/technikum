#include <iostream>
#include <string>
using namespace std;

double srednia(double, double);
double srednia(int, int);
double srednia(double, double, double);
string srednia(string, double);

inline double maks(double x, double y) {
	return (x > y) ? x : y;
}

int main()
{
    cout << srednia(5, 3) << endl;
    cout << srednia(5.5, 3.5) << endl;
    cout << srednia(5.5, 3.5, 4) << endl;
    cout << srednia("j.polski", 4.5) << endl;
	cout << maks(2, 7) << endl;
}


double srednia(double l1, double l2) {
	return (l1 + l2) / 2;
}

double srednia(int l1, int l2) {
	return (l1 + l2) / 2;
}

double srednia(double l1, double l2, double l3) {
	return (l1 + l2 + l3) / 3;
}

string srednia(string przedmiot, double srednia) {
	return przedmiot + to_string(srednia);
}

