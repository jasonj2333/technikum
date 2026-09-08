# Strumienie wejścia i wyjścia w C++

## 🧠 Podstawowe informacje

W języku **C++** dane mogą **wpływać do programu** (np. z klawiatury) albo **wypływać z programu** (np. na ekran).  
Do tego służą **strumienie danych** (*streams*).

### Typy strumieni

| Strumień | Nazwa w C++ | Kierunek | Przykład użycia |
|-----------|--------------|-----------|-----------------|
| Wejście  | `cin`  | do programu | `cin >> liczba;` |
| Wyjście  | `cout` | z programu  | `cout << "Hello!";` |
| Wyjście błędów | `cerr` | błędy | `cerr << "Błąd!";` |
| Logi/debug | `clog` | komunikaty logowania | `clog << "Start programu";` |

---

## 💡 Operatory strumieniowe

### Operator `<<` – wyjście
```cpp
#include <iostream>
using namespace std;

int main() {
    cout << "Witaj w C++!" << endl;
    cout << "Liczba: " << 42 << endl;
    return 0;
}
```

### Operator `>>` – wejście
```cpp
#include <iostream>
using namespace std;

int main() {
    int liczba;
    cout << "Podaj liczbę: ";
    cin >> liczba;
    cout << "Wprowadziłeś: " << liczba << endl;
    return 0;
}
```

---

## ⚙️ Działanie krok po kroku

1. `cout` wysyła dane na ekran.
2. `cin` pobiera dane z klawiatury.
3. Dane są konwertowane do odpowiedniego typu.
4. Program może z nich korzystać dalej.

---

## ⚠️ Obsługa błędów wejścia

```cpp
cin.clear(); // czyści flagę błędu
cin.ignore(1000, '\n'); // usuwa błędne dane z bufora
```

---

## 📚 Biblioteki powiązane

- `<iostream>` – standardowe wejście/wyjście
- `<fstream>` – operacje na plikach
- `<sstream>` – praca z tekstem w pamięci

---

## 🧩 Ćwiczenia

### Ćwiczenie 1 – Powitanie użytkownika

**Polecenie:**  
Napisz program, który pobierze od użytkownika jego imię i wyświetli komunikat:  
`Witaj, <imię>! Miło Cię poznać.`

**Przykład:**
```
Podaj swoje imię: Anna
Witaj, Anna! Miło Cię poznać.
```

**Rozwiązanie:**
```cpp
#include <iostream>
using namespace std;

int main() {
    string imie;
    cout << "Podaj swoje imię: ";
    cin >> imie;
    cout << "Witaj, " << imie << "! Miło Cię poznać." << endl;
    return 0;
}
```

---

### Ćwiczenie 2 – Suma dwóch liczb

**Polecenie:**  
Napisz program, który pobierze dwie liczby i wypisze ich sumę.

**Przykład:**
```
Podaj pierwszą liczbę: 7
Podaj drugą liczbę: 5
Suma liczb 7 i 5 wynosi 12.
```

**Rozwiązanie:**
```cpp
#include <iostream>
using namespace std;

int main() {
    int a, b;
    cout << "Podaj pierwszą liczbę: ";
    cin >> a;
    cout << "Podaj drugą liczbę: ";
    cin >> b;
    int suma = a + b;
    cout << "Suma liczb " << a << " i " << b << " wynosi " << suma << "." << endl;
    return 0;
}
```

---

### Ćwiczenie 3 – Średnia ocen

**Polecenie:**  
Napisz program, który pobierze trzy oceny typu `double`, obliczy średnią i wyświetli ją z dokładnością do dwóch miejsc po przecinku.

**Przykład:**
```
Podaj trzy oceny: 4.5 3.0 5.0
Średnia ocen wynosi: 4.17
```

**Rozwiązanie:**
```cpp
#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double ocena1, ocena2, ocena3;
    cout << "Podaj trzy oceny: ";
    cin >> ocena1 >> ocena2 >> ocena3;
    double srednia = (ocena1 + ocena2 + ocena3) / 3.0;
    cout << fixed << setprecision(2);
    cout << "Średnia ocen wynosi: " << srednia << endl;
    return 0;
}
```

---

## 📘 Podsumowanie

- `cin` – wczytuje dane z klawiatury  
- `cout` – wypisuje dane na ekran  
- `<<` i `>>` to operatory przesyłania danych  
- `endl` kończy linię i odświeża bufor  
- Do formatowania liczb zmiennoprzecinkowych używamy `setprecision()` i `fixed`
