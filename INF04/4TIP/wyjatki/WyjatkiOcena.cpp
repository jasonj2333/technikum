#include <iostream>
#include <cstdlib>
#include <cmath>
#include <string>

using namespace std;

bool wejscieFormat(string sDana) {
	for (int i = 0; i < sDana.length(); i++)
	{
		if (isdigit(sDana[i]) == false) {
			return false;
		}
	}
	return true;
}

bool wejscieZakres(int iDana) {
	if ((iDana >= 1) && (iDana <= 6)) return true;
	else return false;
}

int main()
{
	string ocena = "5a";
	
	try {
		if (wejscieFormat(ocena) == false) {
			throw ocena;
		}

		int iOcena = stoi(ocena);

		if (wejscieZakres(iOcena) == false) {
			throw iOcena;
		}

		switch (iOcena) {
		case 1:
			cout << "Uczen nie umie nic z C++ i zostaje na 2 rok" << endl;
			break;

		case 2:
		case 3:
		case 4:
		case 5:
		case 6:
			cout << "Przechodzisz dalej " << endl;
			break;
		}
	}
	catch (string) {
		cout << "Blad !!!" << endl;
		cout << "Format danej wejsciowej nie odpowiada liczbie calkowitej" << endl;
	}
	catch (int) {
		cout << "Blad !!!" << endl;
		cout << "Wartosc nie miesci sie w zakresie <1, 6>" << endl;
	}
}

