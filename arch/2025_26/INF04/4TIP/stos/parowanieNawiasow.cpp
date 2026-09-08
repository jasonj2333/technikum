#include <iostream>
#include <stack>
using namespace std;

//Każdy '(' → odkładamy na stos
//Każdy ')' → zdejmujemy ze stosu
//Jeśli próbujesz zdjąć, a stos jest pusty → ❌ błąd
//Na końcu stos musi być pusty → ✅ poprawne nawiasy

bool nawiasy(string wyrazenie){
    stack<char> stos;

    for (int i = 0; i < wyrazenie.size(); ++i) {
        switch (wyrazenie[i]) {
            case '(':
                stos.push('(');
                break;
            case ')':
                if(stos.empty()) return false;
                stos.pop();
                break;
        }
    }

    if(stos.empty()) return true;
    return false;

}

/// Wiele nawiasów + hierarchia
int poziom(char c) {
    if (c == '{' || c == '}') return 3;
    if (c == '[' || c == ']') return 2;
    if (c == '(' || c == ')') return 1;
    return 0;
}

bool pasuje(char otw, char zam) {
    return (otw == '(' && zam == ')') ||
           (otw == '[' && zam == ']') ||
           (otw == '{' && zam == '}');
}

// 🔥 funkcja sprawdzająca
bool czyPoprawne(const string& s) {
    stack<char> st;

    for (char c : s) {
        if (c == '(' || c == '[' || c == '{') {
            if (!st.empty() && poziom(c) > poziom(st.top())) {
                return false;
            }
            st.push(c);
        } else {
            if (st.empty() || !pasuje(st.top(), c)) {
                return false;
            }
            st.pop();
        }
    }

    return st.empty();
}

int main() {
    cout << nawiasy("(()))") << endl;
    cout << czyPoprawne("{[()]}") << endl;
    return 0;
}
