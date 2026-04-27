#include <iostream>
#include <stack>
using namespace std;

string ONP(string wyrazenie){
    stack<char> stos;
    stos.push('#'); //wstawienie wartownika
    string onp = "";

    for (int i = 0; i < wyrazenie.size(); ++i) {
        if(wyrazenie[i] == '('){
            stos.push('(');
            continue;
        }
        if(wyrazenie[i] == ')'){
            while(stos.top() != '('){
                onp += stos.top();
                stos.pop();
            }
            stos.pop();
            continue;
        }
        if(wyrazenie[i] == '+' || wyrazenie[i] == '-'){
            while(stos.top() != '#' && stos.top() != '('){
                onp += stos.top();
                stos.pop();
            }
            stos.push(wyrazenie[i]);
            continue;
        }
        if(wyrazenie[i] == '*' || wyrazenie[i] == '/'){
            if(stos.top() == '*' || stos.top() == '/'){
                onp += stos.top();
                stos.pop();
            }
            stos.push(wyrazenie[i]);
        }else{
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
