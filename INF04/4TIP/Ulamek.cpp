#include <iostream>
using namespace std;

class Ulamek{
	int licznik, mianownik;
public:
	Ulamek();
	Ulamek(int l, int m);
	void wypisz();

	friend ostream& operator<<(ostream& os, const Ulamek& u1);
	friend istream& operator>>(istream& is, Ulamek& u1);
	friend Ulamek operator+(const Ulamek& u1, const Ulamek& u2);
};

int nwd(int, int);

int main()
{
	Ulamek u1(5, 15);
	Ulamek u2;
	//u1.wypisz();
	//u2.wypisz();
	cout << u1 << endl;
	
	cin >> u2;
	cout << u2 << endl;
}

Ulamek::Ulamek(){
	licznik = 1;
	mianownik = 1;
}

Ulamek::Ulamek(int l, int m){
	licznik = l;
	mianownik = m;
}

void Ulamek::wypisz(){
	cout << licznik << "/" << mianownik << endl;
}

ostream& operator<<(ostream& os, const Ulamek& u1) {
	int nwdLM = nwd(u1.licznik, u1.mianownik);
	os << u1.licznik/nwdLM << "/" << u1.mianownik/nwdLM;
	return os;
}

istream& operator>>(istream& is, Ulamek& u1) {
	cout << "Licznik: "; 
	is >> u1.licznik;
	cout << "Mianownik: ";
	is >> u1.mianownik;
	return is;
}

Ulamek operator+(const Ulamek& u1, const Ulamek& u2) {
	Ulamek u;
	u.licznik = u1.licznik * u2.mianownik + u2.licznik * u1.mianownik;
	u.mianownik = u1.mianownik * u2.mianownik;
	return u;
}

int nwd(int a, int b) {
	return b == 0 ? a : nwd(b, a % b);
}