#include<iostream>
using namespace std;

void introduceMe(string name, string city, int age=0){
    cout << "My name is " << name << endl;
    cout << "I am from " << city << endl;
    if(age!=0)
        cout << "I am " << age << " years old" << endl;
}

int main()
{
    introduceMe("Jurek", "Niepolomice", 42);
    introduceMe("Zosia", "Krakow");
    return 0;
}