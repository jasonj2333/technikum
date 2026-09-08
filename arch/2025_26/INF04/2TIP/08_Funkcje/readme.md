# Funkcje na przykładzie C++

## 🔹 Co to jest funkcja?

**Funkcja** to wydzielony fragment programu, który wykonuje konkretne zadanie. Można ją wywołać w dowolnym miejscu programu.

Dzięki funkcjom:
✔ kod jest czytelniejszy
✔ łatwiej znaleźć błędy
✔ można wielokrotnie używać tego samego kodu

---

## 🔹 Budowa funkcji

```cpp
typ_zwracany nazwa_funkcji(parametry) {
    // ciało funkcji
    return wartość; // jeśli coś zwraca
}
```

### Przykład:

```cpp
int dodaj(int a, int b) {
    return a + b;
}
```

---

## 🔹 Wywołanie funkcji

```cpp
int wynik = dodaj(3, 5);
cout << wynik; // 8
```

---

## 🔹 Elementy funkcji

### 1️⃣ Typ zwracany

Określa, co funkcja oddaje po zakończeniu działania.

| Typ      | Znaczenie                 |
| -------- | ------------------------- |
| `int`    | liczba całkowita          |
| `double` | liczba zmiennoprzecinkowa |
| `char`   | pojedynczy znak           |
| `bool`   | prawda/fałsz              |
| `void`   | nic nie zwraca            |

---

### 2️⃣ Parametry funkcji

To dane przekazywane do funkcji.

```cpp
int pomnoz(int x, int y)
```

Tutaj `x` i `y` to **parametry**.

Podczas wywołania:

```cpp
pomnoz(4, 6);
```

`4` i `6` to **argumenty**.

---

## 🔹 Funkcja bez zwracania wartości

```cpp
void powitanie() {
    cout << "Cześć!";
}
```

---

## 🔹 Funkcja z wieloma parametrami

```cpp
double poleProstokata(double a, double b) {
    return a * b;
}
```

---

## 🔹 Deklaracja i definicja funkcji

Często funkcję **deklarujemy na początku**, a definiujemy później.

```cpp
int dodaj(int, int); // deklaracja

int main() {
    cout << dodaj(2,3);
}

int dodaj(int a, int b) { // definicja
    return a + b;
}
```

---

## 🔹 Przekazywanie argumentów

### 📌 Przez wartość (kopia)

```cpp
void zmien(int x) {
    x = 10;
}
```

Nie zmieni oryginalnej zmiennej.

### 📌 Przez referencję

```cpp
void zmien(int &x) {
    x = 10;
}
```

Zmieni zmienną w funkcji wywołującej.

---

## 🔹 Funkcja z domyślnymi argumentami

```cpp
int potega(int a, int b = 2) {
    int wynik = 1;
    for(int i = 0; i < b; i++)
        wynik *= a;
    return wynik;
}
```

```cpp
potega(3);   // 3²
potega(3,3); // 3³
```

---

## 🔹 Przeciążanie funkcji (overloading)

Można mieć kilka funkcji o tej samej nazwie, ale z innymi parametrami.

```cpp
int dodaj(int a, int b) { return a + b; }
double dodaj(double a, double b) { return a + b; }
```

---

## 🔹 Funkcje inline

```cpp
inline int kwadrat(int x) {
    return x * x;
}
```

Kompilator może „wkleić” kod funkcji w miejsce wywołania (szybsze, ale większy kod programu).

---

## 🔹 Rekurencja

Funkcja może wywoływać samą siebie.

```cpp
int silnia(int n) {
    if(n <= 1) return 1;
    return n * silnia(n - 1);
}
```

---

## 🔹 Funkcja main()

To specjalna funkcja — od niej zaczyna się program.

```cpp
int main() {
    cout << "Start programu";
    return 0;
}
```

---

## 🔹 Dlaczego funkcje są ważne?

Bez funkcji programy byłyby ogromnymi blokami kodu trudnymi do zrozumienia 😵
Funkcje pozwalają pisać **modularny**, **czytelny** i **profesjonalny** kod.


---

# 🟢 Zadania – Funkcje w C++

## 🔹 Zadanie 1 – Najprostsza funkcja

Napisz funkcję o nazwie `powitanie`, która:

* nic nie przyjmuje
* nic nie zwraca
* wypisuje na ekran tekst:
  **„Witaj w programie!”**

Wywołaj ją w funkcji `main()`.

---

## 🔹 Zadanie 2 – Suma dwóch liczb

Napisz funkcję `suma`, która:

* przyjmuje dwie liczby całkowite
* zwraca ich sumę

W `main()`:

* pobierz od użytkownika dwie liczby
* wywołaj funkcję
* wyświetl wynik

---

## 🔹 Zadanie 3 – Czy liczba jest parzysta?

Napisz funkcję `czyParzysta`, która:

* przyjmuje jedną liczbę całkowitą
* zwraca `true`, jeśli liczba jest parzysta, w przeciwnym razie `false`

W `main()` sprawdź działanie funkcji dla liczby podanej przez użytkownika.

---

## 🔹 Zadanie 4 – Pole prostokąta

Napisz funkcję `poleProstokata`, która:

* przyjmuje długość i szerokość typu `double`
* zwraca pole prostokąta

W `main()`:

* pobierz dane od użytkownika
* wyświetl wynik

---

## 🔹 Zadanie 5 – Większa z dwóch liczb

Napisz funkcję `maxLiczba`, która:

* przyjmuje dwie liczby
* zwraca większą z nich

⚠ Nie używaj gotowej funkcji `max` z biblioteki.

---

## 🔹 Zadanie 6 – Potęga liczby

Napisz funkcję `potega`, która:

* przyjmuje dwie liczby całkowite `a` i `b`
* zwraca wartość `a` do potęgi `b`
* użyj pętli (nie funkcji `pow`)

Przykład: `potega(2,3)` → 8

---

## 🔹 Zadanie 7 – Zamiana miejscami (referencja)

Napisz funkcję `zamien`, która:

* przyjmuje dwie zmienne typu `int` **przez referencję**
* zamienia ich wartości miejscami

W `main()`:

* wczytaj dwie liczby
* wyświetl je przed i po wywołaniu funkcji

---

## 🔹 Zadanie 8 – Domyślny parametr

Napisz funkcję `rabat`, która:

* przyjmuje cenę produktu oraz procent rabatu
* domyślny rabat ma wynosić 10%
* zwraca cenę po obniżce

Sprawdź działanie:

```cpp
rabat(100);      // z domyślnym rabatem
rabat(100, 25);  // z własnym rabatem
```

---

## 🔹 Zadanie 9 – Ile liter ma tekst?

Napisz funkcję `dlugoscNapisu`, która:

* przyjmuje napis (`string`)
* zwraca jego długość
  ⚠ Nie używaj metody `.length()` ani `.size()` — policz znaki pętlą.

---

## 🔹 Zadanie 10 – Kalkulator (mini projekt)

Napisz 4 funkcje:

* `dodaj`
* `odejmij`
* `mnoz`
* `dziel`

Każda przyjmuje dwie liczby `double` i zwraca wynik.

W `main()`:

1. Pobierz dwie liczby
2. Pobierz znak operacji (+, -, *, /)
3. Wywołaj odpowiednią funkcję
4. Wyświetl wynik

---

# 🔵 Zadania trudniejsze (dla chętnych)

### 🔹 Zadanie 11 – Silnia

Napisz funkcję `silnia(int n)`, która oblicza silnię liczby.
Wersja:

* najpierw z pętlą
* potem rekurencyjna

---

### 🔹 Zadanie 12 – Liczby pierwsze

Napisz funkcję `czyPierwsza(int n)`, która sprawdza czy liczba jest pierwsza.
W `main()` wypisz wszystkie liczby pierwsze z zakresu 1–100 używając tej funkcji.

---



