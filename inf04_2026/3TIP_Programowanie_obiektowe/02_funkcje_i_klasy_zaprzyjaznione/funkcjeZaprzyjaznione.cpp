#include <iostream>

using namespace std;

class Vector2D {
	double x, y;
public:
	Vector2D(double x = 0, double y = 0) : x(x), y(y) {}
	Vector2D(const Vector2D& inny) {
		if (this != &inny) {
			this->x = inny.x;
			this->y = inny.y;
		}
	}

	double dlugosc() {
		return sqrt(x * x + y * y);
	}

	friend ostream& operator<<(ostream& os, const Vector2D& v); //Deklaracja funkcji zaprzyjaźnionej
	friend istream& operator>>(istream& is, Vector2D& v); //Deklaracja funkcji zaprzyjaźnionej
	friend Vector2D operator+(const Vector2D& v1, const Vector2D& v2);
	friend Vector2D operator-(const Vector2D& v1, const Vector2D& v2);
	friend void info(const Vector2D& v);
};

void info(const Vector2D& v) {
	cout << "Wektor: (" << v.x << ", " << v.y << ")" << endl;
}

Vector2D operator+(const Vector2D& v1, const Vector2D& v2) {
	return Vector2D(v1.x + v2.x, v1.y + v2.y);
}

Vector2D operator-(const Vector2D& v1, const Vector2D& v2) {
	return Vector2D(v1.x - v2.x, v1.y - v2.y);
}

ostream& operator<<(ostream& os, const Vector2D& v) {
	os << "(" << v.x << ", " << v.y << ")";
	return os;
}

istream& operator>>(istream& is, Vector2D& v) {
	cout << "Podaj wspolrzedne wektora:" << endl;
	cout << "x = ";
	is >> v.x;
	cout << "y = ";
	is >> v.y;
	return is;
}

int main()
{
	Vector2D v1(3, 4);
	cout << "Wektor v1: " << v1 << endl;
	cout << "Dlugosc wektora v1: " << v1.dlugosc() << endl;

	Vector2D v2;
	cin >> v2;
	cout << "Wektor v2: " << v2 << endl;
	cout << "Dlugosc wektora v2: " << v2.dlugosc() << endl;

	cout << "V1 + V2 = " << v1 + v2 << endl;
	cout << "V1 - V2 = " << v1 - v2 << endl;

	info(v1);
	info(v2);
}


