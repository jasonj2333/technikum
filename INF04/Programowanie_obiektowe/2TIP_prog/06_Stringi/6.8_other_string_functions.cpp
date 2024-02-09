#include <iostream>
#include <string>

using namespace std;

int main()
{
	//Deklaracja zmiennych łańcuhowych
	string s1 = "C++11";
	string s2 = "11";
	string s3 = "14";

	//Porównanie dwóch łańcuchów
	cout << s3.compare(s2) << endl;
	/*
	UWAGA:
	Funkcja compare(), pozwala na porównanie ze sobą dwóch łańcuchów.
	Jeżeli funkcja compare() zwraca 0 to łańcuchy są równe. W przeciwnym razie
	są różne.

	Jeżeli zwrócona wartość jest dodatnia to oznacza, że:
	- albo s3 jest dluższy od s2
	- albo łańcuchy są równe, ale s3 jest leksykograficznie większy.

	Jeżeli zwrócona wartość jest ujemna to oznacza, że:
	- albo s3 jest krótszy od s2
	- albo łańcuchy są równe, ale s3 jest leksykograficznie mniejszy.
	*/

	//Wyszukiwanie podłańcucha w łańcuchu źródłowym.
	cout << s1.find(s2) << endl; //3
	/*
	UWAGA:
	Łańcuchem źrodłowym jest tutaj łańcuch s1. Zadanym (szukanym) podłańcuchem
	jest s2.
	Funkcja find() zwraca pozycję pierwszego znaku, w pierwszym dopasowaniu,
	czyli wystąpieniu podłańcucha s2 w łańcuchu s1 - począwszy do pierwszego
	znaku s1 - czyli pozycji 0.

	Jeżeli dopasowania nie znaleziono, funkcja zwraca maksymalną wartość typu
	całkowitego bez znaku, reprezentującą rozmiar łańcucha - npos, która
	oznacza "aż do końca łańcucha".
	*/

	int poczatek = 0;
	int dlugosc = 3;
	//Wyciągniecie podłańcucha z zadanego łańcucha źródłowego.
	string s4 = s1.substr(poczatek, dlugosc); //C++
	/*
	UWAGA:
	Funkcja substr() zwraca podłańcuch wynikowy (tutaj s4) o określonej
	długości, "wyciągnięty" - wyodrębniony z łańcucha źródłowego (tutaj s1)
	począwszy od pozycji początkowej.
	*/
	cout << s4 << endl;

	//Określenie długości łańcucha
	cout << s4.length() << endl; //3
	/*
	UWAGA:
	Długość łańcucha znaków określona za pomocą funkcji length() zwraca liczbę
	znaków w łańcuchu (tutaj s4).
	*/

	//Określenie rozmiaru łańcucha w bajtach
	cout << s4.size() << endl;

	//Zastąpienie zadanego podłańcucha innym podłańcuchem
	cout << s3 << endl;
	poczatek = 1;
	dlugosc = 1;
	cout << s3.replace(poczatek, dlugosc, "7") << endl; // 17
	/*
	UWAGA:
	Funkcja replace() pozwala zastąpić podłańcuch o określonej długości, 
	w łańcuchu źródłowym (tutaj s3), począwszy od zadanej pozycji początekowej.
	*/

	//Nadanie wartości łańcuchowi s3.
	cout << s3 << endl; // 17
	cout << s3.assign("23") << endl; // 23
	/*
	UWAGA:
	Funkcja assign(), pozwala nadać nową wartość łańcuchowi źródłowemu.
	Funkcja zwraca wartość łańcucha źródłowego.
	*/
}


