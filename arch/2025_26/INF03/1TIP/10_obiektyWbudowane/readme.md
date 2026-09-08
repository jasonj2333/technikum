# 📘 **Lekcja: Obiekty wbudowane w JavaScript i ich metody**

W JavaScript istnieje wiele obiektów dostępnych „od ręki”. Każdy z nich posiada własne właściwości i metody, które ułatwiają pracę z danymi.

Dzisiaj zajmiemy się czterema najważniejszymi:

* **String** – operacje na tekstach
* **Date** – praca z datą i czasem
* **Array** – operacje na tablicach
* **Math** – funkcje matematyczne

---

# 1️⃣ Obiekt `String` – praca z tekstem

Obiekt `String` reprezentuje tekst w JavaScript i posiada wiele metod ułatwiających jego przetwarzanie.

### Najważniejsze metody:

| Metoda              | Działanie                       | Przykład                             |
| ------------------- | ------------------------------- | ------------------------------------ |
| `length`            | zwraca długość tekstu           | `"Ala".length` → 3                   |
| `toUpperCase()`     | zamienia na wielkie litery      | `"ala".toUpperCase()`                |
| `toLowerCase()`     | zamienia na małe litery         | `"Ala".toLowerCase()`                |
| `trim()`            | usuwa spacje z początku i końca | `"  test  ".trim()`                  |
| `includes(text)`    | sprawdza, czy zawiera tekst     | `"JavaScript".includes("Script")`    |
| `indexOf(text)`     | zwraca pozycję tekstu           | `"test".indexOf("s")` → 2            |
| `slice(start, end)` | wycina fragment                 | `"JavaScript".slice(0,4)` → `"Java"` |
| `replace(a, b)`     | zamienia fragment tekstu        | `"Ala".replace("A", "O")`            |

### Przykład:

```js
let login = "   admin123   ";
console.log(login.trim().toUpperCase());
```

---

# 2️⃣ Obiekt `Date` – data i czas

Obiekt `Date` służy do pobierania i modyfikowania daty oraz czasu.

### Tworzenie daty:

```js
let now = new Date(); // aktualna data
let specific = new Date(2024, 0, 1); // 1 stycznia 2024
```

### Podstawowe metody:

| Metoda                 | Zwraca                                    |
| ---------------------- | ----------------------------------------- |
| `getFullYear()`        | rok                                       |
| `getMonth()`           | miesiąc (0–11!)                           |
| `getDate()`            | dzień miesiąca                            |
| `getDay()`             | dzień tygodnia (0–6, gdzie 0 = niedziela) |
| `getHours()`           | godzinę                                   |
| `getMinutes()`         | minuty                                    |
| `getSeconds()`         | sekundy                                   |
| `toLocaleDateString()` | datę w formacie lokalnym                  |
| `toLocaleTimeString()` | czas w formacie lokalnym                  |

### Przykład:

```js
let today = new Date();
console.log("Rok:", today.getFullYear());
console.log("Dzisiaj jest:", today.toLocaleDateString());
```

---

# 3️⃣ Obiekt `Array` – tablice

Tablice przechowują wiele wartości w jednej zmiennej.

### Najważniejsze metody:

| Metoda       | Działanie                             |
| ------------ | ------------------------------------- |
| `push()`     | dodaje element na końcu               |
| `pop()`      | usuwa ostatni element                 |
| `shift()`    | usuwa pierwszy element                |
| `unshift()`  | dodaje element na początku            |
| `includes()` | sprawdza, czy tablica zawiera element |
| `indexOf()`  | zwraca pozycję elementu               |
| `join()`     | łączy tablicę w jeden tekst           |
| `slice()`    | kopiuje fragment tablicy              |
| `splice()`   | usuwa lub dodaje elementy             |
| `sort()`     | sortuje tablicę                       |
| `reverse()`  | odwraca kolejność                     |

### Przykład:

```js
let items = ["a", "b", "c"];
items.push("d");  // ["a","b","c","d"]
items.shift();    // ["b","c","d"]
console.log(items.join("-")); // "b-c-d"
```

---

# 4️⃣ Obiekt `Math` – funkcje matematyczne

`Math` nie tworzy obiektów, ale dostarcza statycznych funkcji matematycznych.

### Najważniejsze metody:

| Metoda              | Opis                            |
| ------------------- | ------------------------------- |
| `Math.round(x)`     | zaokrągla do najbliższej liczby |
| `Math.floor(x)`     | zaokrągla w dół                 |
| `Math.ceil(x)`      | zaokrągla w górę                |
| `Math.random()`     | losuje liczbę 0–1               |
| `Math.max(a,b,...)` | największa z wartości           |
| `Math.min(a,b,...)` | najmniejsza z wartości          |
| `Math.pow(a,b)`     | potęgowanie                     |
| `Math.sqrt(a)`      | pierwiastek                     |

### Przykład – losowanie liczby 1–10:

```js
let x = Math.floor(Math.random() * 10) + 1;
console.log(x);
```

---

# 5️⃣ Przykłady praktyczne

---

## 🌰 Przykład 1: Formatowanie tekstu

```js
let text = prompt("Podaj imię:");
text = text.trim();
alert("Twoje imię ma " + text.length + " znaków.");
```

---

## 🌰 Przykład 2: Obliczanie wieku

```js
let birth = new Date(prompt("Podaj rok urodzenia (np. 2005):"), 0, 1);
let now = new Date();
let age = now.getFullYear() - birth.getFullYear();
alert("Masz " + age + " lat.");
```

---

## 🌰 Przykład 3: Liczby w tablicy

```js
let numbers = [];
for (let i = 0; i < 5; i++) {
    numbers.push(Math.floor(Math.random() * 100) + 1);
}
alert(numbers.join(", "));
```

---

# 6️⃣ Zadania dla uczniów

---

## 📝 Zadanie 1 – String

Pobierz imię użytkownika i:

1. Usuń spacje z początku i końca,
2. Wyświetl je wielkimi literami,
3. Wyświetl liczbę liter.

---

## 📝 Zadanie 2 – Date

Napisz program, który:

1. Pobierze aktualną datę,
2. Wyświetli:

   * dzień tygodnia,
   * dzień miesiąca,
   * pełną datę w formacie lokalnym.

---

## 📝 Zadanie 3 – Array

Masz tablicę:

```js
let fruits = ["jabłko", "gruszka", "banan"];
```

Wykonaj:

* dodanie 2 nowych owoców,
* usunięcie pierwszego,
* sprawdzenie, czy tablica zawiera „banan”,
* połączenie tablicy w tekst.

---

## 📝 Zadanie 4 – Math

Wylosuj 10 liczb z przedziału 1–100 i policz:

* największą liczbę (`Math.max`),
* najmniejszą liczbę (`Math.min`),
* średnią arytmetyczną.

---

## 📝 Zadanie 5 – trudniejsze

Napisz program, który:

1. Pobiera imię, nazwisko i rok urodzenia,
2. Tworzy z nich obiekt:

```js
let person = {
    name: ...,
    surname: ...,
    age: ...
};
```

3. Wylicza wiek z użyciem `Date`,
4. Wyświetla wynik w alercie.

