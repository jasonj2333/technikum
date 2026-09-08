# 1. 🧩 Wprowadzenie – czym są funkcje tablicowe?

PHP posiada ponad **90 wbudowanych funkcji do pracy z tablicami**, dzięki którym można:

* sortować dane,
* zmieniać kolejność elementów,
* wyszukiwać wartości,
* usuwać i dodawać elementy,
* operować na kluczach i wartościach.

Tablice są jednym z najczęściej używanych typów danych w PHP → znajomość funkcji tablicowych ułatwia pisanie czytelnego i bezpiecznego kodu.

---

# 2. 🧮 Najpotrzebniejsze funkcje tablicowe

## ## 2.1. ➕ Dodawanie / usuwanie elementów

### **`array_push($arr, $elem)`**

Dodaje elementy na koniec tablicy.

```php
$kolory = ["czerwony", "zielony"];
array_push($kolory, "niebieski");
```

### **`array_pop($arr)`**

Usuwa element z końca tablicy.

```php
$ostatni = array_pop($kolory);
```

### **`array_unshift($arr, $elem)`**

Dodaje element na początek.

### **`array_shift($arr)`**

Usuwa element z początku.

---

## ## 2.2 🔍 Wyszukiwanie wartości

### **`in_array($value, $array)`**

Sprawdza, czy wartość istnieje w tablicy (zwraca true/false):

```php
$liczby = [10, 20, 30];
if (in_array(20, $liczby)) echo "Jest!";
```

### **`array_search($value, $array)`**

Zwraca klucz znalezionego elementu:

```php
$klucz = array_search(30, $liczby); // 2
```

---

## ## 2.3 🔄 Sortowanie tablic

### **`sort()` – sortowanie wartości, reset kluczy**

```php
sort($liczby);
```

### **`asort()` – sortowanie wartości, zachowuje klucze**

```php
asort($liczby);
```

### **`ksort()` – sortowanie po kluczach**

```php
ksort($liczby);
```

---

## ## 2.4 🧹 Filtrowanie i mapowanie

### **`array_filter()` – filtruje tablicę przez funkcję**

```php
$parzyste = array_filter($liczby, fn($x) => $x % 2 == 0);
```

### **`array_map()` – wykonuje funkcję na każdym elemencie**

```php
$pomnozone = array_map(fn($x) => $x * 2, $liczby);
```

---

## ## 2.5 🔧 Inne przydatne funkcje

### **`array_merge()` – łączy tablice**

```php
$nowa = array_merge([1,2], [3,4]);
```

### **`array_keys()` – zwraca klucze**

### **`array_values()` – zwraca wartości**

### **`count()` – liczba elementów**

```php
echo count($nowa);
```

---

# 3. 🖥️ Przykłady praktyczne

## 📌 Przykład 1: Lista uczniów i filtrowanie

```php
$uczniowie = ["Ania", "Kasia", "Bartek", "Arek"];

$naA = array_filter($uczniowie, fn($x) => str_starts_with($x, "A"));
print_r($naA);
```

---

## 📌 Przykład 2: Oceny i sortowanie

```php
$oceny = [
    "Jan" => 4,
    "Ola" => 5,
    "Kuba" => 3
];

arsort($oceny); // sortowanie malejące zachowują klucze
```

---

# 4. 🧠 Ćwiczenia dla uczniów

## **Ćwiczenie 1**

Dana tablica:

```php
$produkty = ["mleko", "chleb", "jajka", "cukier"];
```

### Zadania:

1. Dodaj "masło" na koniec tablicy.
2. Usuń pierwszy element.
3. Posortuj tablicę alfabetycznie.

---

## **Ćwiczenie 2**

Dana tablica ocen:

```php
$oceny = [5, 3, 4, 2, 5, 1];
```

1. Odfiltruj tylko oceny większe lub równe 4.
2. Zwróć ilość ocen 5.
3. Zamień wszystkie oceny na oceny *podniesione o 1 punkt*, ale nie więcej niż 6.

---

## **Ćwiczenie 3**

Dane dwie tablice:

```php
$a = [1, 2, 3];
$b = [3, 4, 5];
```

1. Połącz tablice.
2. Usuń duplikaty.
3. Posortuj wynik malejąco.

---

# 5. 🏠 Zadanie domowe

Przygotuj program w PHP, który:

1. Pobiera tablicę imion:

   ```php
   ["Anna", "Tomek", "Ola", "Antek", "Karolina"]
   ```
2. Tworzy nową tablicę zawierającą tylko imiona zaczynające się na literę „A”.
3. Mapuje tę tablicę, zamieniając wszystkie imiona na wielkie litery.
4. Sortuje je alfabetycznie.
5. Wyświetla wynik.

---

# 6. 🧭 Podsumowanie

Na dzisiejszej lekcji poznałeś kluczowe funkcje tablicowe PHP:

* dodawanie/usuwanie elementów (`push`, `pop`, `shift`, `unshift`),
* wyszukiwanie (`in_array`, `array_search`),
* sortowanie (`sort`, `asort`, `ksort`, `arsort`),
* przetwarzanie (`array_map`, `array_filter`),
* narzędzia (`merge`, `count`, `keys`, `values`).

Te funkcje są fundamentem pracy z danymi w PHP i będziesz ich używać bardzo często w praktyce programistycznej.

