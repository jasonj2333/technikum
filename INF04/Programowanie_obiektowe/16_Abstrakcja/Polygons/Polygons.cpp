#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

class Polygon {
    vector<int> sides;
public:
    Polygon(vector<int> a_args) {
        sides = a_args;
    }

    int perimeter() {
        int p = 0;
        for (int side : sides) {
            p += side;
        }

        return p;
    }

    virtual double area() = 0;
};

class Rectangle : public Polygon {
    int a, b;

public:
    Rectangle(int a, int b) : Polygon({ a, a, b, b }) {
        this->a = a;
        this->b = b;
    }

    double area() {
        return a * b;
    }
};

class Square : public Rectangle {
    int a, b;

public:
    Square(int a) : Rectangle(a, a) {
        this->a = a;
    }
};

class Triangle : public Polygon {
    int a, b, c;

public:
    Triangle(int a, int b, int c) : Polygon({ a, b, c }) {
        this->a = a;
        this->b = b;
        this->c = c;
    }

    double area() {
        double p = perimeter() / 2.0;
        double area = sqrt(p * (p - a) * (p - b) * (p - c));
        return area;
    }
};


int main()
{
    Triangle triangle( 4, 7, 9 );
    Rectangle rectangle(8, 9);
    Square square(8);

    cout << "---------- Triangle ---------- "  << endl;
    cout << "Perimeter: " << triangle.perimeter() << endl;
    cout << "Area: " << triangle.area() << endl;

    cout << " ---------- Rectangle ---------- " << endl;
    cout << "Perimeter: " << rectangle.perimeter() << endl;
    cout << "Area: " << rectangle.area() << endl;

    cout << "---------- Square ---------- " << endl;
    cout << "Perimeter: " << square.perimeter() << endl;
    cout << "Area: " << square.area() << endl;

}