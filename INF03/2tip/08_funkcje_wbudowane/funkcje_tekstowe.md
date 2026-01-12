## 🔤 Czym są funkcje tekstowe w PHP?

Funkcje tekstowe (string functions) służą do **przetwarzania napisów**, np.:

* liczenia znaków,
* łączenia i dzielenia tekstu,
* wyszukiwania fragmentów,
* zamiany liter,
* formatowania danych wprowadzanych przez użytkownika.

W PHP tekst przechowujemy w typie **string**.

```php
$tekst = "Witaj świecie!";
```

---

## 📏 Długość tekstu

### `strlen()`

Zwraca liczbę znaków w napisie.

```php
echo strlen("PHP"); // 3
```

⚠️ Uwaga: dla polskich znaków lepiej używać `mb_strlen()`.

---

## ✂️ Wycinanie fragmentów tekstu

### `substr()`

Pobiera część tekstu.

```php
$tekst = "Programowanie";
echo substr($tekst, 0, 7); // Program
```

📌 Składnia:

```php
substr(string, start, length)
```

---

## 🔍 Wyszukiwanie w tekście

### `strpos()`

Sprawdza pozycję pierwszego wystąpienia podciągu.

```php
echo strpos("Uczę się PHP", "PHP"); // 8
```

❗ Jeśli nie znajdzie – zwraca `false`.

---

## 🔁 Zamiana fragmentów tekstu

### `str_replace()`

Zamienia fragment tekstu na inny.

```php
echo str_replace("kot", "pies", "Mój kot"); // Mój pies
```

---

## 🔠 Zmiana wielkości liter

### `strtolower()` – na małe litery

### `strtoupper()` – na wielkie litery

```php
echo strtoupper("php"); // PHP
echo strtolower("HTML"); // html
```

Dla polskich znaków:

```php
mb_strtoupper("zażółć");
```

---

## 🚿 Usuwanie zbędnych spacji

### `trim()`

Usuwa spacje z początku i końca tekstu.

```php
$tekst = "  PHP  ";
echo trim($tekst); // "PHP"
```

Dodatkowo:

* `ltrim()` – z lewej strony
* `rtrim()` – z prawej strony

---

## ✂️ Dzielenie i łączenie tekstu

### `explode()`

Zamienia tekst na tablicę.

```php
$dane = explode(",", "Ala,ma,kota");
print_r($dane);
```

### `implode()`

Łączy tablicę w tekst.

```php
echo implode("-", $dane); // Ala-ma-kota
```

---

## 🔎 Sprawdzanie początku i końca tekstu (PHP 8+)

### `str_starts_with()`

```php
str_starts_with("PHP jest super", "PHP"); // true
```

### `str_ends_with()`

```php
str_ends_with("plik.txt", ".txt"); // true
```

---

## 🛡️ Bezpieczeństwo – tekst od użytkownika

### `htmlspecialchars()`

Chroni przed wstrzyknięciem HTML/JS.

```php
echo htmlspecialchars("<script>alert(1)</script>");
```

📌 Bardzo ważne przy formularzach!

---

## 🧠 Podsumowanie – najważniejsze funkcje

| Funkcja         | Zastosowanie    |
| --------------- | --------------- |
| `strlen()`      | długość tekstu  |
| `substr()`      | fragment tekstu |
| `strpos()`      | wyszukiwanie    |
| `str_replace()` | zamiana         |
| `strtolower()`  | małe litery     |
| `strtoupper()`  | wielkie litery  |
| `trim()`        | usuwanie spacji |
| `explode()`     | tekst → tablica |
| `implode()`     | tablica → tekst |

---

## ✏️ Proste zadania dla uczniów

1. Pobierz imię użytkownika i wyświetl je **wielkimi literami**.
2. Sprawdź, czy adres e-mail zawiera znak `@`.
3. Usuń spacje z początku i końca tekstu wpisanego w formularzu.

