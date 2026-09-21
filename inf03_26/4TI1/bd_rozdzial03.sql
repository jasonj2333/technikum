-- =============================================================================
-- Podręcznik BD · klasa 4 TI · rozdział 3
-- Encja, atrybut, krotka — przykładowa baza do importu w phpMyAdmin
-- =============================================================================
-- Import (na rzutniku / na stanowisku ucznia):
--   1. Apache + MySQL włączone.
--   2. http://localhost/phpmyadmin
--   3. NIE klikaj żadnej bazy po lewej (zostań na poziomie serwera).
--   4. Karta Import → Wybierz plik → ten plik → Wykonaj.
-- Ponowny import jest bezpieczny: tabele są zrzucane i tworzone od nowa.
-- =============================================================================

SET NAMES utf8mb4;
SET FOREIGN_KEY_CHECKS = 0;

CREATE DATABASE IF NOT EXISTS bd_rozdzial03
  DEFAULT CHARACTER SET utf8mb4
  COLLATE utf8mb4_polish_ci;

USE bd_rozdzial03;

DROP TABLE IF EXISTS przyklad_bledny;
DROP TABLE IF EXISTS ksiazki;
DROP TABLE IF EXISTS czytelnicy;

-- ---------------------------------------------------------------------------
-- Typ encji: KSIAZKA  →  tabela ksiazki
-- Atrybuty: isbn, tytul, rok_wydania, cena_netto
-- Każdy wiersz = jedna krotka (egzemplarz encji).
-- isbn to atrybut identyfikujący (klucz główny — pełny wykład później).
-- ---------------------------------------------------------------------------
CREATE TABLE ksiazki (
  isbn CHAR(13) NOT NULL,
  tytul VARCHAR(100) NOT NULL,
  rok_wydania SMALLINT NOT NULL,
  cena_netto DECIMAL(10, 2) NOT NULL,
  PRIMARY KEY (isbn)
) ENGINE=InnoDB
  DEFAULT CHARSET=utf8mb4
  COLLATE=utf8mb4_polish_ci
  COMMENT='Typ encji Ksiazka — katalog biblioteczny';

INSERT INTO ksiazki (isbn, tytul, rok_wydania, cena_netto) VALUES
  ('9788328300000', 'Czysty Kod', 2017, 69.00),
  ('9788301140000', 'Algorytmy i struktury', 2019, 85.50),
  ('9788324631000', 'Relacyjne bazy danych', 2021, 54.00),
  ('9788301180000', 'Wstęp do baz danych', 2020, 47.90);

-- ---------------------------------------------------------------------------
-- Typ encji: CZYTELNIK  →  tabela czytelnicy
-- Druga kategoria obiektów — pokazuje, że baza to zwykle wiele typów encji.
-- Brak klucza obcego: związki są na kolejnych lekcjach.
-- ---------------------------------------------------------------------------
CREATE TABLE czytelnicy (
  id_czytelnika INT NOT NULL,
  imie VARCHAR(40) NOT NULL,
  nazwisko VARCHAR(60) NOT NULL,
  klasa CHAR(5) NOT NULL,
  data_zapisu DATE NOT NULL,
  PRIMARY KEY (id_czytelnika)
) ENGINE=InnoDB
  DEFAULT CHARSET=utf8mb4
  COLLATE=utf8mb4_polish_ci
  COMMENT='Typ encji Czytelnik — biblioteka szkolna';

INSERT INTO czytelnicy (id_czytelnika, imie, nazwisko, klasa, data_zapisu) VALUES
  (1, 'Anna', 'Nowak', '4TI', '2024-09-02'),
  (2, 'Piotr', 'Kowalski', '4TI', '2024-09-03'),
  (3, 'Ola', 'Wiśniewska', '3TI', '2025-09-01');

-- ---------------------------------------------------------------------------
-- Tabela celowo zła — do ćwiczenia „znajdź naruszenie reguł”.
-- Łamie atomowość: Telefony i Zakupy to listy w jednej komórce.
-- ---------------------------------------------------------------------------
CREATE TABLE przyklad_bledny (
  id INT NOT NULL,
  klient VARCHAR(80) NOT NULL,
  telefony VARCHAR(120) NOT NULL,
  zakupy VARCHAR(120) NOT NULL,
  PRIMARY KEY (id)
) ENGINE=InnoDB
  DEFAULT CHARSET=utf8mb4
  COLLATE=utf8mb4_polish_ci
  COMMENT='ZLY PRZYKLAD — nie kopiuj tego układu do projektu';

INSERT INTO przyklad_bledny (id, klient, telefony, zakupy) VALUES
  (1, 'Piotr Nowak', '501-200-300, 22-800-90-00', 'Laptop, Myszka, Torba'),
  (2, 'Anna Lis', 'brak', 'Klawiatura');

SET FOREIGN_KEY_CHECKS = 1;
