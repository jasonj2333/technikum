#include<iostream>
using namespace std;

int main()
{
    //Deklaracja zmiennej wskaźnikowej (wskaźnika) w_ocena
    int* w_ocena;
    //Utworzenie zmiennej typu int wskazywanej przez wskaźnik w_ocena
    w_ocena = new int; //pamięć zaalokowana dynamicznie na stercie (heap)
    
    //Przypisanie zmiennej wskazywanej przez wskaźnik wartości
    *w_ocena = 4;
    cout << "Ocena: " << *w_ocena << endl;

    //Usunięcie zmiennej wskazywanej przez wskaźnik w_ocena
    delete w_ocena;
    return 0;
}