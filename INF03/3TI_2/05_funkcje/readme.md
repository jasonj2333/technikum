# **Lekcja: Funkcje w JavaScript**

## **1. Wprowadzenie – po co nam funkcje?**

Funkcje w JavaScript pozwalają:

* organizować kod w mniejsze fragmenty,
* wielokrotnie wykonywać te same instrukcje,
* przekazywać dane i zwracać rezultat działania.

Przykład najprostszej funkcji:

```js
function przywitaj() {
    console.log("Cześć!");
}
```

Wywołanie:

```js
przywitaj();
```

---

## **2. Parametry i argumenty funkcji**

To pojęcia często mylone – trzeba je jasno rozróżnić.

### **Parametr funkcji**

Zmienna zadeklarowana w definicji funkcji.
**Funkcja ją oczekuje.**

```js
function dodaj(a, b) {   // a, b → parametry
    console.log(a + b);
}
```

### **Argument funkcji**

Rzeczywista wartość przekazywana podczas wywołania funkcji.

```js
dodaj(5, 3);   // 5 i 3 → argumenty
```

---

## **3. Funkcja niezwracająca (procedura)**

Funkcja może wykonywać kod, ale **nie musi zwracać wyniku**.

Zachowuje się jak „procedura”.

```js
function pokazWiek(wiek) {
    console.log("Twój wiek to: " + wiek);
}
```

Wywołanie:

```js
pokazWiek(17);
```

Brak `return` → funkcja zwróci automatycznie `undefined`.

---

## **4. Funkcja zwracająca wartość**

Używa słowa kluczowego **return**, aby oddać wynik.

```js
function obliczPoleKwadratu(a) {
    return a * a;
}
```

Wywołanie i wykorzystanie wartości:

```js
let pole = obliczPoleKwadratu(4);
console.log(pole);   // 16
```

### **Zasada:**

Kod po `return` już się nie wykona.

---

## **5. Parametry domyślne**

Od ES6 funkcje mogą mieć wartości domyślne – gdy argument nie zostanie przekazany.

```js
function powitanie(imie = "Gość") {
    console.log("Witaj, " + imie);
}

powitanie("Ania");
powitanie();   // Witaj, Gość
```

---

## **6. Podsumowanie – najważniejsze różnice**

| Element                   | Wyjaśnienie                                |
| ------------------------- | ------------------------------------------ |
| **Parametr**              | Zmienna w definicji funkcji                |
| **Argument**              | Konkretny przekazany do funkcji „dane”     |
| **Funkcja niezwracająca** | brak `return`, wynik to `undefined`        |
| **Funkcja zwracająca**    | używa `return`, wartość można użyć później |
| **Parametr domyślny**     | parametr z wartością przypisaną na starcie |

---

# **7. Przykłady dla uczniów**

### **Przykład 1 – funkcja bez zwracania**

```js
function wyswietlImie(imie) {
    console.log("Imię: " + imie);
}

wyswietlImie("Bartek");
```

### **Przykład 2 – funkcja zwracająca**

```js
function suma(a, b) {
    return a + b;
}

console.log(suma(4, 7));
```

### **Przykład 3 – parametr domyślny**

```js
function mnoz(a, b = 1) {
    return a * b;
}

console.log(mnoz(5));     // 5 * 1 = 5
console.log(mnoz(5, 3));  // 15
```

---

# **8. Zadania dla uczniów**

### **Zadanie 1 (łatwe)**

Napisz funkcję `przywitaj(imie)`, która wyświetli w konsoli:

```
Cześć, imie!
```

Wywołaj ją z dwoma różnymi argumentami.

---

### **Zadanie 2 (średnie)**

Napisz funkcję `potega(a, n = 2)` zwracającą **a do potęgi n**.
Przetestuj funkcję z różnymi argumentami.

---

### **Zadanie 3 (trudniejsze)**

Napisz funkcję `srednia(a, b, c)`, która:

* oblicza średnią trzech liczb,
* zwraca wynik,
* wyświetl ją w `console.log()`.

---

### **Zadanie 4**

Napisz funkcję `opisUcznia(imie, nazwisko, klasa = "nieznana")`,
która wyświetli tekst:

```
Uczeń: imie nazwisko, klasa: klasa
```

Wywołaj ją raz z trzema argumentami i raz z dwoma.

---

# **9. Mini-quiz na koniec lekcji**

1. Czym różni się parametr od argumentu?
2. Co zwraca funkcja, jeśli nie ma `return`?
3. Jak działa parametr domyślny?
4. Czy można mieć wiele parametrów domyślnych?
5. Co się stanie, jeśli po `return` dodamy jeszcze `console.log()`?
