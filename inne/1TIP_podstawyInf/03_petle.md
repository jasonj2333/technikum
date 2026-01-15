## 🔁 Czym są pętle w C++?

**Pętle** pozwalają wielokrotnie wykonać ten sam fragment kodu, dopóki spełniony jest określony warunek.
Dzięki nim unikamy powtarzania tego samego kodu wiele razy.

---

## 1️⃣ Pętla `for`

Stosowana, gdy **wiemy, ile razy** chcemy wykonać instrukcje.

### Składnia:

```cpp
for (inicjalizacja; warunek; zmiana) {
    // instrukcje
}
```

### Przykład:

```cpp
#include <iostream>
using namespace std;

int main() {
    for (int i = 1; i <= 5; i++) {
        cout << i << " ";
    }
    return 0;
}
```

📌 **Co się dzieje?**

* `int i = 1` – start
* `i <= 5` – warunek
* `i++` – zwiększenie licznika
* wynik: `1 2 3 4 5`

---

## 2️⃣ Pętla `while`

Wykonuje się **dopóki warunek jest spełniony**.
Może wykonać się **0 razy**.

### Składnia:

```cpp
while (warunek) {
    // instrukcje
}
```

### Przykład:

```cpp
int i = 1;

while (i <= 5) {
    cout << i << " ";
    i++;
}
```

📌 Uwaga: jeśli **nie zmienisz warunku**, powstanie **pętla nieskończona** ❗

---

## 3️⃣ Pętla `do while`

Podobna do `while`, ale **zawsze wykona się co najmniej raz**.

### Składnia:

```cpp
do {
    // instrukcje
} while (warunek);
```

### Przykład:

```cpp
int i = 6;

do {
    cout << i << " ";
    i++;
} while (i <= 5);
```

📌 Wynik: `6`
Warunek jest fałszywy, ale kod wykonał się raz.

---

## 4️⃣ Pętla zakresowa `for` (range-based for)

Używana głównie do **tablic i kontenerów** (np. `array`, `vector`).

### Przykład:

```cpp
int tab[] = {10, 20, 30, 40};

for (int x : tab) {
    cout << x << " ";
}
```

📌 Czytelna i wygodna – nie trzeba licznika.

---

## 5️⃣ Instrukcje sterujące pętlą

### 🔹 `break` – przerywa pętlę

```cpp
for (int i = 1; i <= 10; i++) {
    if (i == 5) break;
    cout << i << " ";
}
```

📌 Wynik: `1 2 3 4`

---

### 🔹 `continue` – pomija jedną iterację

```cpp
for (int i = 1; i <= 5; i++) {
    if (i == 3) continue;
    cout << i << " ";
}
```

📌 Wynik: `1 2 4 5`

---

## 🆚 Kiedy używać której pętli?

| Pętla       | Kiedy używać                  |
| ----------- | ----------------------------- |
| `for`       | znana liczba powtórzeń        |
| `while`     | warunek sprawdzany przed      |
| `do while`  | kod musi wykonać się min. raz |
| `for range` | tablice i kolekcje            |

---

## 🧠 Typowe błędy uczniów

❌ brak zmiany warunku → pętla nieskończona
❌ `;` po `for` lub `while`
❌ wyjście poza zakres tablicy

---

