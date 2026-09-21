-- =============================================================================
-- Podręcznik BD · klasa 4 TI · dział 2 (rozdziały 4–9)
-- Model relacyjny, PK, FK, związki 1:1 / 1:N / N:M
-- =============================================================================
-- Import: phpMyAdmin na poziomie serwera (nie klikaj bazy) → Import → ten plik.
-- Ponowny import jest bezpieczny.
-- =============================================================================

SET NAMES utf8mb4;
SET FOREIGN_KEY_CHECKS = 0;

CREATE DATABASE IF NOT EXISTS bd_dzial2
  DEFAULT CHARACTER SET utf8mb4
  COLLATE utf8mb4_polish_ci;

USE bd_dzial2;

DROP TABLE IF EXISTS ksiazka_autor;
DROP TABLE IF EXISTS wypozyczenia;
DROP TABLE IF EXISTS legitymacje;
DROP TABLE IF EXISTS autorzy;
DROP TABLE IF EXISTS ksiazki;
DROP TABLE IF EXISTS czytelnicy;

-- Typ encji CZYTELNIK
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
  COMMENT='PK: id_czytelnika';

INSERT INTO czytelnicy VALUES
  (1, 'Anna', 'Nowak', '4TI', '2024-09-02'),
  (2, 'Piotr', 'Kowalski', '4TI', '2024-09-03'),
  (3, 'Ola', 'Wiśniewska', '3TI', '2025-09-01');

-- Typ encji KSIAZKA
CREATE TABLE ksiazki (
  isbn CHAR(13) NOT NULL,
  tytul VARCHAR(100) NOT NULL,
  rok_wydania SMALLINT NOT NULL,
  cena_netto DECIMAL(10, 2) NOT NULL,
  PRIMARY KEY (isbn)
) ENGINE=InnoDB
  DEFAULT CHARSET=utf8mb4
  COLLATE=utf8mb4_polish_ci
  COMMENT='PK: isbn (klucz naturalny)';

INSERT INTO ksiazki VALUES
  ('9788328300000', 'Czysty Kod', 2017, 69.00),
  ('9788301140000', 'Algorytmy i struktury', 2019, 85.50),
  ('9788324631000', 'Relacyjne bazy danych', 2021, 54.00),
  ('9788301180000', 'Wstęp do baz danych', 2020, 47.90);

-- Typ encji AUTOR
CREATE TABLE autorzy (
  id_autora INT NOT NULL,
  imie VARCHAR(40) NOT NULL,
  nazwisko VARCHAR(60) NOT NULL,
  PRIMARY KEY (id_autora)
) ENGINE=InnoDB
  DEFAULT CHARSET=utf8mb4
  COLLATE=utf8mb4_polish_ci
  COMMENT='PK: id_autora';

INSERT INTO autorzy VALUES
  (1, 'Robert C.', 'Martin'),
  (2, 'Thomas', 'Cormen'),
  (3, 'Charles', 'Leiserson'),
  (4, 'Paulina', 'Kowalska');

-- 1:1  CZYTELNIK — LEGITYMACJA  (jeden czytelnik, jedna karta)
CREATE TABLE legitymacje (
  nr_legitymacji CHAR(8) NOT NULL,
  id_czytelnika INT NOT NULL,
  data_wydania DATE NOT NULL,
  PRIMARY KEY (nr_legitymacji),
  UNIQUE KEY uq_legitymacja_czytelnik (id_czytelnika),
  CONSTRAINT fk_legitymacja_czytelnik
    FOREIGN KEY (id_czytelnika) REFERENCES czytelnicy (id_czytelnika)
) ENGINE=InnoDB
  DEFAULT CHARSET=utf8mb4
  COLLATE=utf8mb4_polish_ci
  COMMENT='1:1 z czytelnicy — UNIQUE na FK';

INSERT INTO legitymacje VALUES
  ('LEG00001', 1, '2024-09-02'),
  ('LEG00002', 2, '2024-09-03'),
  ('LEG00003', 3, '2025-09-01');

-- 1:N  CZYTELNIK — WYPOZYCZENIA,  KSIAZKA — WYPOZYCZENIA
CREATE TABLE wypozyczenia (
  id_wypozyczenia INT NOT NULL,
  id_czytelnika INT NOT NULL,
  isbn CHAR(13) NOT NULL,
  data_wypozyczenia DATE NOT NULL,
  data_zwrotu DATE NULL,
  PRIMARY KEY (id_wypozyczenia),
  CONSTRAINT fk_wyp_czytelnik
    FOREIGN KEY (id_czytelnika) REFERENCES czytelnicy (id_czytelnika),
  CONSTRAINT fk_wyp_ksiazka
    FOREIGN KEY (isbn) REFERENCES ksiazki (isbn)
) ENGINE=InnoDB
  DEFAULT CHARSET=utf8mb4
  COLLATE=utf8mb4_polish_ci
  COMMENT='1:N — FK po stronie wielu';

INSERT INTO wypozyczenia VALUES
  (1, 1, '9788328300000', '2026-09-01', NULL),
  (2, 1, '9788324631000', '2026-09-08', '2026-09-15'),
  (3, 2, '9788301140000', '2026-09-10', NULL);

-- N:M  KSIAZKA — AUTOR  (tabela łącząca)
CREATE TABLE ksiazka_autor (
  isbn CHAR(13) NOT NULL,
  id_autora INT NOT NULL,
  PRIMARY KEY (isbn, id_autora),
  CONSTRAINT fk_ka_ksiazka
    FOREIGN KEY (isbn) REFERENCES ksiazki (isbn),
  CONSTRAINT fk_ka_autor
    FOREIGN KEY (id_autora) REFERENCES autorzy (id_autora)
) ENGINE=InnoDB
  DEFAULT CHARSET=utf8mb4
  COLLATE=utf8mb4_polish_ci
  COMMENT='N:M — tabela łącząca, PK złożony';

INSERT INTO ksiazka_autor VALUES
  ('9788328300000', 1),
  ('9788301140000', 2),
  ('9788301140000', 3),
  ('9788324631000', 4),
  ('9788301180000', 4);

SET FOREIGN_KEY_CHECKS = 1;
