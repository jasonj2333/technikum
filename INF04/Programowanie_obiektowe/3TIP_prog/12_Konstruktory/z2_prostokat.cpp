//Utwórz klasę Prostokat, posiadająca dwie prywatne zmienne członkowskie a, b.
//Zdefiniuj konstruktory dla klasy Prostokat:
// - domyślny - inicjujący zmienne a = 2 i b = 3
// - parametryczny - inicjujący zmienne członkowskie argumentami podawanymi przy tworzeniu obiektu
// - kopiujący - tworzący nowy obiekt na podstawie już istniejącego, ale tworzący kwadrat o boku równym dłuższemu z boków prostokąta źródłowego. 
    // Np. prostokat źródłowy ma boki a=2, b=7 to utworzy na pomocą konstruktora kopiującego nowy obiekt będzie miał oba boki równe 7.
//W klasie Prostokat utwórz dwie metody publiczne:
//- int pole() zwracającą wartość pola prostokąta
//- void info() - wyświetlającą dane prostokąta: długość boków i pole.

//Przetestuj działanie aplikacji tworząc 3 obiekty:
//- p1 z wykorzystaniem konstruktora domyślnego
//- p2 z wykorzystaniem konstruktora parametrycznego
//- p3 z wykorzystaniem konstruktora kopiującego na podstawie obiektu p2.

#include <iostream>
using namespace std;

class Prostokat {
	int a, b;
public:
	Prostokat(){
		a = 2;
		b = 3;
	}

	Prostokat(int b1, int b2) {
		a = b1;
		b = b2;
	}

	Prostokat(const Prostokat &p) {
		if (p.a > p.b) a = p.a; else a = p.b;
		b = a;
	}

	int pole() {
		return a * b;
	}

	void info() {
		cout << "Dane prostokata: " << endl;
		cout << "Bok a: " << a << endl;
		cout << "Bok b: " << b << endl;
		cout << "Pole wynosi: " << pole() << endl;
		cout << "-------------------------" << endl;


	}
};

int main()
{
	Prostokat p1;
	p1.info();

	Prostokat p2(2, 5);
	p2.info();

	Prostokat p3(p2);
	p3.info();

}