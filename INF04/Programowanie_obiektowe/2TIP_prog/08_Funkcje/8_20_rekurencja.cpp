#include <iostream>
using namespace std;

int silnia(int liczba) {
	int iloczyn = 1;
	for(int i=1; i <= liczba; i++) {
		iloczyn *= i;
	}
	return iloczyn;
}

int silniaR(int liczba) {
	if (liczba == 0) return 1;
	return liczba * silniaR(liczba - 1);
}

int nwd(int liczba1, int liczba2) {
	int temp;
	if(liczba2 == 0) {
		temp = liczba1;
	}else {
		temp = nwd(liczba2, liczba1 % liczba2);
	}
	return temp;
}

int main()
{
	int liczba = 5;
	int liczba1 = 81;
	int liczba2 = 28;
	cout << "Silnia z " << liczba << ": " << silnia(liczba) << endl;
	cout << "Silnia z " << liczba << ": " << silniaR(liczba) << endl;
	cout << "NWD(" << liczba1 << ", " << liczba2 <<") = " << nwd(liczba1, liczba2) << endl;
}


