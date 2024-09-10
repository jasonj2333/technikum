#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    
    double a = 1, b = 5, c = 4;
    double delta = b * b - 4 * a * c;
    cout << "Delta wynosi: " << delta << endl;

    if(delta > 0){
        double x1 = (-b - sqrt(delta)) / 2 * a;
        double x2 = (-b + sqrt(delta)) / 2 * a;
        cout << "Pierwszy pierwiatek =  " << x1 << endl;
        cout << "Drugi pierwiatek =  " << x2 << endl;
    }else if(delta == 0){
        double x0 = -b / (2 * a);
        cout << "Pierwiatek =  " << x0 << endl;
    }else{
        cout << "Równanie nie ma pierwiastkow rzeczywistych" << endl;
    }
    
    return 0;
}