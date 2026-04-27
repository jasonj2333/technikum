#include <iostream>
#include <stack>
using namespace std;

string ONP(string wyrazenie){
    stack<char> stos;
    stos.push('#'); //wstawienie wartownika
    string onp = "";

    for (int i = 0; i < wyrazenie.size(); ++i) {
        switch (wyrazenie[i]) {
            case '(':
                stos.push('(');
                break;
            case ')':
                while(stos.top() != '('){
                    onp += stos.top();
                    stos.pop();
                }
                stos.pop();
                break;
            case '+':
            case '-':
                while(stos.top() != '#' && stos.top() != '('){
                    onp += stos.top();
                    stos.pop();
                }
                stos.push(wyrazenie[i]);
                break;
            case '*':
            case '/':
                if(stos.top() == '*' || stos.top() == '/'){
                    onp += stos.top();
                    stos.pop();
                }
                stos.push(wyrazenie[i]);
                break;
            default:
                onp += wyrazenie[i];
        }
        

    }
    while(stos.top() != '#'){ //dopisanie pozostalych operatow do wyrazenia
        onp += stos.top();
        stos.pop();
    }
    stos.pop(); //usuniecie wartownika '#'
    return onp;
}

int main() {
    string wyrazenieAlgebraiczne = "a-(b+c)*d+e";
    string wyrazenieONP = ONP(wyrazenieAlgebraiczne);
    cout << "Wyrazenie algebraiczne: " << wyrazenieAlgebraiczne << endl;
    cout << "Wyrazenie ONP: " << wyrazenieONP << endl;
    return 0;
}
