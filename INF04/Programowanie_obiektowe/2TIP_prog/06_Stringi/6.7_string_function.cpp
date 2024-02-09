#include <iostream>
#include <string>

using namespace std;

int main()
{
	//Deklaracja zmiennych łańcuhowych
	string s1("Jezyk programowania ");
	string s2("C++");
	string s3("11");

	//Konkatenacja - dodawanie łańcuchów
	string s4 = s1 + s2;
	cout << s4 << endl;

	//Kopiowanie zawartości jednej zmiennej do drugiej
	string s5 = s1;
	//Konkatenacja łańcuchów - dodanie na końcu
	s5 += s2;
	cout << s5 << endl;

	//Dodawanie łańcucha s3 na końcu s5 - metoda append();
	s5.append(s3);
	cout << s5 << endl;

	//Skopiowanie zmiennej z łańcucha s2 do s6
	string s6 = s2;
	//Wstawienie łańcucha s1 na początku s6
	s6.insert(0, s1);
	/*
	UWAGA:
	Łańcuch wynikowy zostaje zapisany w zmiennej s6. Liczba 0 oznacza pozycję
	początkową podłańcucha s1 w łańcuchu s6. 
	*/
	cout << s6 << endl;
}


