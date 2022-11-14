//algorytm.edu.pl
#include<iostream>
#include<cmath>
using namespace std;

//ustawienie prezycji pierwiastka
const double eps = 0.000001;

double pierwiastek(double P, double eps)
{
	   double a = 1., b = P;
       
       //dopóki nie otrzymamy żądanej precyzji
       while(fabs(a-b)>=eps) 
       {
           a = (a+b)/2.;   
           b = P/a;
       }
 
       return (a+b)/2.; 
}
 
int main()
{
    double x;
    cout<<"Podaj liczbę, z której chcesz wyznaczyć pierwiastek: ";
    cin>>x;
 
    cout<<fixed<<pierwiastek(x, eps); 

    return 0;
}