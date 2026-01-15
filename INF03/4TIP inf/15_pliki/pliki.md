## 1. Podstawowe pojęcia

### Tryby otwierania plików

Podczas pracy z plikami w PHP korzystamy głównie z funkcji **`fopen()`**, która wymaga określenia **trybu**:

| Tryb | Opis                              |
| ---- | --------------------------------- |
| `r`  | odczyt (plik musi istnieć)        |
| `w`  | zapis – **nadpisuje** plik        |
| `a`  | dopisanie na koniec pliku         |
| `r+` | odczyt i zapis                    |
| `w+` | odczyt i zapis (kasuje zawartość) |
| `a+` | odczyt i dopisanie                |

---

## 2. Odczyt z pliku

### a) Odczyt całego pliku – `file_get_contents()`

Najprostszy sposób:

```php
$tekst = file_get_contents("dane.txt");
echo $tekst;
```

✔ szybki
❌ brak kontroli nad liniami

---

### b) Odczyt linia po linii – `fgets()`

```php
$plik = fopen("dane.txt", "r");

while (!feof($plik)) {
    echo fgets($plik) . "<br>";
}

fclose($plik);
```

✔ idealne do przetwarzania danych
✔ często używane na sprawdzianach

---

### c) Odczyt znak po znaku – `fgetc()`

```php
$plik = fopen("dane.txt", "r");

while (!feof($plik)) {
    echo fgetc($plik);
}

fclose($plik);
```

✔ rzadziej stosowane
✔ dobre do nauki działania wskaźnika pliku

---

## 3. Zapis do pliku

### a) Nadpisanie pliku – tryb `w`

```php
$plik = fopen("dane.txt", "w");
fwrite($plik, "To jest nowa treść\n");
fclose($plik);
```

⚠️ UWAGA: kasuje starą zawartość!

---

### b) Dopisywanie do pliku – tryb `a`

```php
$plik = fopen("dane.txt", "a");
fwrite($plik, "Kolejna linia\n");
fclose($plik);
```

✔ najczęściej używane
✔ np. logi, listy użytkowników

---

## 4. Funkcje pomocnicze

### `file()` – plik jako tablica

```php
$linie = file("dane.txt");

foreach ($linie as $linia) {
    echo $linia . "<br>";
}
```

✔ każda linia = jeden element tablicy

---

### Sprawdzanie istnienia pliku

```php
if (file_exists("dane.txt")) {
    echo "Plik istnieje";
}
```

---

## 5. Przykład praktyczny – zapis formularza

```php
$imie = $_POST['imie'];
$plik = fopen("uzytkownicy.txt", "a");
fwrite($plik, $imie . "\n");
fclose($plik);
```

📌 **Zastosowanie**:

* listy uczniów
* logi
* zapisy wyników

---

## 6. Dobre praktyki

✅ Zawsze zamykaj plik (`fclose`)
✅ Sprawdzaj, czy plik istnieje
✅ Uważaj na tryb `w`
✅ Dodawaj `\n` przy zapisie wielu danych

---

## 7. Typowe błędy uczniów

❌ Brak `fclose()`
❌ Otwieranie w złym trybie
❌ Brak sprawdzenia `file_exists()`
❌ Zapisywanie bez separatorów


