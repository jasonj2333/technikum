#include<iostream>
using namespace std;

void function();

int main()
{
    cout << "Hello from main()" << endl;
    function();
    return 0;
}

void function(){
    cout << "Hello from function()" << endl;
}