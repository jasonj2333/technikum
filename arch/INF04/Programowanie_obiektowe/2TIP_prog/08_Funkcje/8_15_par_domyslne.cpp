#include <iostream>
using namespace std;

//Definicje funkcji  z parametrami domyślnymi
void wyswietl_pi(float pi = 3.14159) {
	cout << "Stała pi = " << pi << endl;
}
//UWAGA:
//Parametr formalny pi jest przekazywany do funkcji wyswietl_pi() przez wartość

//Definicje funkcji  z parametrami domyślnymi
void wyswietl_e(const float& e = 2.71828) {
	cout << "Stała e = " << e << endl;
}
//UWAGA:
//Parametr formalny e jest przekazywany do funkcji wyswietl_e() przez referencję do stałej const typu float

int main() {
	//Wywołanie funkcji wyswietl_pi()
	wyswietl_pi();
	/*UWAGA:
	Ze względu na to, że funkcja została wywołana bez żadnego argumentu, argumentami domyślnymi (tutaj jeden argument)
	stają się automatycznie wartości domyślne jej parametrów formalnych (tutaj jeden parametr domyślny)*/

	const float Pi = 3.14;
	//Ponowne wywołanie funkcji wyswietl_pi()
	wyswietl_pi(Pi);
	/*UWAGA:
	Wywołanie funkcji wyswietl_pi() z argmentem określonym w sposób jawny. W związku z tym wszystkie argumenty domyślne
	(tutaj jeden) zostają nadpisane przez argumenty zadane.*/

	//Wywołanie funkcji wyswietl_e() bez argumentów
	wyswietl_e();

	const float E = 2.72;
	//Wywołanie funkcji wyswietl_e() z argmentem określonym w sposób jawny
	wyswietl_e(E);

	return 0;
}