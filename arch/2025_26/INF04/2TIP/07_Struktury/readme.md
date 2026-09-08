# Struktury

## 1. Czym jest struktura (`struct`) w C++?

**Struktura** to **złożony typ danych**, który pozwala **połączyć różne zmienne (różnych typów) w jedną całość**.

👉 Używamy jej, gdy chcemy opisać **jeden obiekt rzeczywisty**, np.:

* ucznia
* punkt na płaszczyźnie
* produkt w sklepie
* samochód

---

## 2. Definicja struktury

Składnia:

```cpp
struct NazwaStruktury {
    typ pole1;
    typ pole2;
    typ pole3;
};
```

⚠️ **Średnik na końcu jest obowiązkowy!**

### Przykład – struktura `Uczen`

```cpp
struct Uczen {
    string imie;
    string nazwisko;
    int wiek;
    double srednia;
};
```

---

## 3. Tworzenie obiektu struktury

```cpp
Uczen u1;
```

lub z inicjalizacją:

```cpp
Uczen u2 = {"Jan", "Kowalski", 17, 4.5};
```

---

## 4. Dostęp do pól struktury (operator `.`)

```cpp
u1.imie = "Anna";
u1.nazwisko = "Nowak";
u1.wiek = 18;
u1.srednia = 5.0;
```

Odczyt:

```cpp
cout << u1.imie << " " << u1.nazwisko << endl;
```

---

## 5. Struktura jako typ danych

Struktura działa **jak każdy inny typ**, więc można tworzyć:

### Tablicę struktur

```cpp
Uczen klasa[3];

klasa[0].imie = "Ola";
klasa[0].wiek = 16;
```

### Wektor struktur

```cpp
#include <vector>

vector<Uczen> uczniowie;
```

---

## 6. Struktura jako argument funkcji

### Przekazanie przez wartość

```cpp
void wyswietl(Uczen u) {
    cout << u.imie << endl;
}
```

### Przekazanie przez referencję (zalecane)

```cpp
void zwiekszWiek(Uczen &u) {
    u.wiek++;
}
```

---

## 7. Struktura z funkcjami (C++)

W C++ struktura **może zawierać metody**, tak jak klasa.

```cpp
struct Punkt {
    int x, y;

    void wyswietl() {
        cout << "(" << x << ", " << y << ")";
    }
};
```

Różnica względem klasy:

* w `struct` **domyślny dostęp to `public`**
* w `class` domyślny dostęp to `private`

---

## 8. `struct` vs `class`

| Cecha                 | struct | class   |
| --------------------- | ------ | ------- |
| Domyślny dostęp       | public | private |
| Może mieć metody      | ✅      | ✅       |
| Może mieć konstruktor | ✅      | ✅       |
| Dziedziczenie         | ✅      | ✅       |

👉 **W praktyce**:

* `struct` → proste dane
* `class` → logika, hermetyzacja

---

## 9. Zagnieżdżanie struktur

```cpp
struct Adres {
    string miasto;
    string ulica;
};

struct Osoba {
    string imie;
    Adres adres;
};
```

Dostęp:

```cpp
Osoba o;
o.adres.miasto = "Warszawa";
```

---

## 10. Przykład kompletny

```cpp
#include <iostream>
using namespace std;

struct Samochod {
    string marka;
    int rok;
};

int main() {
    Samochod s1 = {"Toyota", 2018};

    cout << s1.marka << " " << s1.rok << endl;
    return 0;
}
```

---

## 11. Kiedy używać struktur?

✅ Gdy:

* dane są ze sobą logicznie powiązane
* nie potrzebujesz jeszcze pełnego OOP
* chcesz czytelny kod

❌ Gdy:

* potrzebujesz enkapsulacji, dziedziczenia, kontroli dostępu → **lepiej klasa**

---

Poniżej masz **konkretne i uporządkowane omówienie: struktury + wskaźniki w C++**, dokładnie w tym miejscu, gdzie uczniowie zwykle mają największe problemy.

---

## 1. Wskaźnik do struktury – idea

👉 **Wskaźnik do struktury** przechowuje **adres obiektu struktury**, a nie sam obiekt.

```cpp
struct Punkt {
    int x;
    int y;
};

Punkt p1 = {2, 3};
Punkt* wsk = &p1;   // wskaźnik na strukturę
```

---

## 2. Dostęp do pól przez wskaźnik (`->`)

❌ BŁĘDNIE:

```cpp
wsk.x = 5;   // nie działa
```

✅ POPRAWNIE – operator `->`:

```cpp
wsk->x = 5;
wsk->y = 7;
```

🔎 To samo co:

```cpp
(*wsk).x = 5;
```

---

## 3. Porównanie: obiekt vs wskaźnik

| Obiekt | Wskaźnik   |
| ------ | ---------- |
| `p.x`  | `wsk->x`   |
| `p.y`  | `(*wsk).y` |

---

## 4. Przekazywanie struktury do funkcji przez wskaźnik

### ❌ Przez wartość (kopia)

```cpp
void zmien(Punkt p) {
    p.x = 10;
}
```

➡️ Zmiana NIE wpływa na oryginał

---

### ✅ Przez wskaźnik

```cpp
void zmien(Punkt* p) {
    p->x = 10;
}
```

Wywołanie:

```cpp
Punkt a = {1, 2};
zmien(&a);
```

---

## 5. Dynamiczna struktura (`new` / `delete`)

```cpp
Punkt* p = new Punkt;

p->x = 4;
p->y = 6;

cout << p->x << " " << p->y << endl;

delete p;
```

⚠️ **Zawsze usuwaj pamięć zaalokowaną przez `new`!**

---

## 6. Dynamiczna tablica struktur

```cpp
int n = 3;
Punkt* tab = new Punkt[n];

tab[0].x = 1;
tab[0].y = 2;

tab[1].x = 3;
tab[1].y = 4;

delete[] tab;
```

---

## 7. Struktura zawierająca wskaźnik

```cpp
struct Osoba {
    string imie;
    int* wiek;
};

int main() {
    Osoba o;
    o.imie = "Jan";
    o.wiek = new int(18);

    cout << *o.wiek << endl;

    delete o.wiek;
}
```

---

## 8. Wskaźnik na strukturę w strukturze (lista / drzewo)

```cpp
struct Node {
    int value;
    Node* next;
};
```

Przykład połączenia:

```cpp
Node a = {1, nullptr};
Node b = {2, nullptr};

a.next = &b;
```

➡️ **Podstawa list jednokierunkowych**

---

## 9. `struct` + wskaźnik + funkcja (typowe zadanie)

```cpp
struct Prostokat {
    int a;
    int b;
};

int pole(Prostokat* p) {
    return p->a * p->b;
}
```

Wywołanie:

```cpp
Prostokat pr = {4, 5};
cout << pole(&pr);
```

---

## 10. Typowe błędy uczniów ⚠️

❌ Brak inicjalizacji wskaźnika

```cpp
Punkt* p;
p->x = 5; // BŁĄD – niezdefiniowany adres
```

❌ Brak `delete`
❌ Mylenie `.` z `->`
❌ Użycie wskaźnika po `delete`

---

## 11. Kiedy używać struktur + wskaźników?

✅ Gdy:

* chcesz **zmieniać obiekt w funkcji**
* pracujesz na **dynamicznych danych**
* implementujesz **listy, drzewa, grafy**
* uczysz **zarządzania pamięcią**

❌ Gdy:

* wystarczy zwykła struktura (lepiej prostota)

---


# 1. Struktury nie powinny mieć metod - skąd się wzięło to zalecenie?

Zalecenie:

> *„Struktury nie powinny mieć metod, tylko przechowywać dane”*

pochodzi głównie z:

* **języka C** (gdzie `struct` nie ma metod),
* **paradygmatu proceduralnego**,
* idei **POD / DTO (Data Transfer Object)**.

W tych podejściach:

* `struct` = **rekord danych**
* logika = **funkcje zewnętrzne**

---

## 2. C++ daje możliwość, ale nie nakaz

W C++:

```cpp
struct A {
    int x;
    void foo() {}
};
```

To jest **w 100% poprawne**.

❗ Jednak **możliwość ≠ zalecenie**.

---

## 3. „Czysta struktura danych” (DTO / POD)

### Dobra praktyka (często spotykana):

```cpp
struct Punkt {
    int x;
    int y;
};
```

oraz logika osobno:

```cpp
int odleglosc(const Punkt& a, const Punkt& b);
```

### Zalety:

* bardzo czytelne
* łatwe do serializacji
* brak ukrytej logiki
* łatwe w testach
* zgodne z C i starszym C++

👉 **To jest podejście dydaktyczne i systemowe**

---

## 4. Kiedy struktura NIE powinna mieć metod?

✅ Gdy:

* uczysz **podstaw C / C++**
* dane są „głupie” (np. rekordy z pliku, CSV)
* tworzysz **DTO, dane sieciowe**
* struktura ma być:

  * kopiowalna bit-po-bicie
  * bez logiki
* chcesz **rozdzielić dane i algorytmy**

Przykład:

```cpp
struct Student {
    string imie;
    double ocena;
};
```

---

## 5. Kiedy metody w `struct` są OK (a nawet zalecane)?

### C++-owe podejście (nowoczesne):

```cpp
struct Punkt {
    int x;
    int y;

    double dlugosc() const {
        return sqrt(x*x + y*y);
    }
};
```

### Zalety:

* lepsza **spójność danych i zachowania**
* mniejsza liczba funkcji globalnych
* czytelniejszy interfejs
* bez różnicy technicznej względem `class`

👉 To jest **pełnoprawny OOP**

---

## 6. Kluczowa różnica: `struct` vs `class`

⚠️ **To NIE jest różnica techniczna, tylko semantyczna**

| Intencja       | struct | class |
| -------------- | ------ | ----- |
| Rekord danych  | ✅      | ❌     |
| Logika + dane  | ⚠️     | ✅     |
| Publiczne pola | ✅      | ❌     |
| Enkapsulacja   | ❌      | ✅     |

📌 **W C++ społecznie przyjęta konwencja**:

* `struct` → **dane**
* `class` → **abstrakcja / logika**

---

## 7. Dlaczego wiele osób odradza metody w strukturach?

Bo:

* zaciera się granica między **rekordem danych a klasą**
* łatwo popaść w „pseudo-OOP”
* uczniowie zaczynają:

  * wszystko robić `public`
  * omijać enkapsulację
* trudniej potem nauczyć **dobrych praktyk OOP**

---

## 8. Co mówią oficjalne źródła (w skrócie)?

* **Bjarne Stroustrup**:

  > używaj `struct` dla prostych agregatów danych
* **C++ Core Guidelines**:

  > `struct` for passive data, `class` for invariants

---

## 9. Dobra reguła, którą warto zapamiętać ✅

> **Jeśli obiekt ma inwarianty, zachowanie i logikę → `class`**
> **Jeśli obiekt jest tylko zbiorem danych → `struct`**

---

## 10. Wersja „szkolna” (najbezpieczniejsza)

Dla uczniów:

* `struct` → **bez metod**
* `class` → **z metodami**

To upraszcza naukę i zapobiega złym nawykom.

---


