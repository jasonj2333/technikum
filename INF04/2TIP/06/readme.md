# Lekcja: Klasa `string` w C++

## 1. Cele lekcji

Uczeń:

* wie, czym jest klasa `std::string`,
* potrafi zadeklarować i używać zmiennych typu `string`,
* zna podstawowe metody klasy `string`,
* potrafi operować na napisach (łączenie, długość, porównywanie),
* umie pobrać napis od użytkownika.

---

## 2. Wprowadzenie – czym jest `string`?

W C++ tekst można przechowywać na dwa sposoby:

* jako **tablice znaków (`char[]`)** – trudniejsze i mniej bezpieczne,
* jako **obiekt klasy `string`** – **zalecany sposób**.

Klasa `string`:

* jest częścią biblioteki standardowej,
* dynamicznie zarządza pamięcią,
* posiada wiele gotowych metod ułatwiających pracę z tekstem.

Aby korzystać z `string`, należy dołączyć bibliotekę:

```cpp
#include <string>
```

---

## 3. Deklaracja i inicjalizacja zmiennej `string`

```cpp
string tekst;
string imie = "Jan";
string nazwisko("Kowalski");
```

Pełna wersja (zalecana w nauczaniu):

```cpp
#include <iostream>
#include <string>
using namespace std;
```

---

## 4. Wyświetlanie i pobieranie napisów

### Wyświetlanie

```cpp
string imie = "Anna";
cout << imie;
```

### Pobieranie jednego wyrazu (`cin`)

```cpp
string imie;
cin >> imie;
```

⚠ `cin` **nie pobiera spacji**!

### Pobieranie całej linii (`getline`)

```cpp
string zdanie;
getline(cin, zdanie);
```

---

## 5. Podstawowe operacje na stringach

### Łączenie napisów

```cpp
string a = "Hello ";
string b = "World";
string c = a + b;
```

### Dodawanie do istniejącego napisu

```cpp
string tekst = "C++";
tekst += " jest super!";
```

---

## 6. Długość napisu

```cpp
string tekst = "Programowanie";
cout << tekst.length();
```

lub

```cpp
cout << tekst.size();
```

---

## 7. Dostęp do pojedynczych znaków

```cpp
string tekst = "Ala";
cout << tekst[0];  // A
cout << tekst[1];  // l
```

Zmiana znaku:

```cpp
tekst[0] = 'O';
```

---

## 8. Porównywanie napisów

```cpp
string a = "abc";
string b = "abc";

if (a == b)
{
    cout << "Napisy są takie same";
}
```

Inne operatory:

* `==` równe
* `!=` różne
* `<`, `>` (alfabetycznie)

---

## 9. Najważniejsze metody klasy `string`

### `length()` / `size()`

Zwraca długość napisu

### `empty()`

Sprawdza, czy napis jest pusty

```cpp
if (tekst.empty())
```

### `substr(poczatek, dlugosc)`

```cpp
string tekst = "Programowanie";
cout << tekst.substr(0, 7); // Program
```

### `find()`

```cpp
string tekst = "C++ jest fajny";
cout << tekst.find("jest");
```

Jeśli nie znajdzie → `string::npos`

---

## 10. Przykład pełnego programu

```cpp
#include <iostream>
#include <string>
using namespace std;

int main()
{
    string imie, nazwisko;

    cout << "Podaj imie: ";
    cin >> imie;

    cout << "Podaj nazwisko: ";
    cin >> nazwisko;

    cout << "Witaj " << imie + " " + nazwisko << endl;
    cout << "Dlugosc imienia: " << imie.length();

    return 0;
}
```

---

## 11. Typowe błędy uczniów ⚠

* brak `#include <string>`
* używanie `cin` zamiast `getline`
* mylenie `string` z `char[]`
* wyjście poza zakres indeksów (`tekst[100]`)

---

## 12. Proste zadania dla uczniów

### Zadanie 1 (łatwe)

Wczytaj imię i wypisz liczbę znaków.

### Zadanie 2 (średnie)

Wczytaj zdanie i wypisz:

* jego długość,
* pierwszy i ostatni znak.

### Zadanie 3 (trudniejsze)

Wczytaj dwa napisy i sprawdź, czy są identyczne.

---


# Porównanie: `std::string` vs `char[]` w C++

## 1. Podstawowa różnica

| Cecha                | `std::string` | `char[]`        |
| -------------------- | ------------- | --------------- |
| Typ                  | Klasa         | Tablica znaków  |
| Biblioteka           | `<string>`    | brak (C)        |
| Zakończenie `\0`     | automatyczne  | **obowiązkowe** |
| Zarządzanie pamięcią | automatyczne  | ręczne          |
| Bezpieczeństwo       | wysokie       | niskie          |
| Łatwość użycia       | bardzo dobra  | trudna          |

---

## 2. Deklaracja

### `string`

```cpp
string tekst = "C++";
```

### `char[]`

```cpp
char tekst[] = "C++";
```

---

## 3. Pobieranie danych od użytkownika

### `string` – cały wiersz

```cpp
string zdanie;
getline(cin, zdanie);
```

### `char[]` – cały wiersz

```cpp
char zdanie[50];
cin.getline(zdanie, 50);
```

⚠ **Uczeń musi znać rozmiar tablicy!**

---

## 4. Długość napisu

### `string`

```cpp
cout << tekst.length();
```

### `char[]`

```cpp
#include <cstring>
cout << strlen(tekst);
```

---

## 5. Łączenie napisów

### `string`

```cpp
string a = "Ala";
string b = " ma kota";
string c = a + b;
```

### `char[]`

```cpp
char a[20] = "Ala";
char b[] = " ma kota";
strcat(a, b);
```

⚠ Ryzyko **przepełnienia bufora**!

---

## 6. Porównywanie napisów

### `string`

```cpp
if (a == b)
```

### `char[]`

```cpp
if (strcmp(a, b) == 0)
```

---

## 7. Dostęp do znaków

### `string`

```cpp
tekst[0] = 'O';
```

### `char[]`

```cpp
tekst[0] = 'O';
```

➡ tutaj składnia jest taka sama, ale `string` pilnuje długości.

---

## 8. Typowe błędy przy `char[]`

❌ brak miejsca na `\0`
❌ wyjście poza zakres tablicy
❌ użycie `=` do kopiowania
❌ brak sprawdzania rozmiaru

Przykład błędu:

```cpp
char a[5];
a = "Hello"; // BŁĄD
```

---

## 9. Kiedy używać `char[]`?

`char[]` używamy:

* przy nauce podstaw pamięci
* w programowaniu niskopoziomowym
* przy pracy z bardzo starym kodem C
* w systemach wbudowanych

W **95% przypadków** → używamy `std::string`.

---

## 10. Porównanie – przykład pełny

### `string`

```cpp
string imie;
getline(cin, imie);
cout << "Dlugosc: " << imie.length();
```

### `char[]`

```cpp
char imie[30];
cin.getline(imie, 30);
cout << "Dlugosc: " << strlen(imie);
```

---

## 11. Wniosek dla ucznia 🧠

> `string` jest **bezpieczniejszy, prostszy i nowocześniejszy**
> `char[]` uczy **jak działa pamięć**, ale łatwo o błędy

📌 **Na sprawdzianie:**

* jeśli nie ma polecenia „użyj `char[]`” → użyj `string`

---


