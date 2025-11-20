-- --------------------------------------------------------------
-- Tworzenie bazy danych
-- --------------------------------------------------------------
CREATE DATABASE IF NOT EXISTS case_cwiczenia
CHARACTER SET utf8mb4
COLLATE utf8mb4_polish_ci;

USE case_cwiczenia;

-- --------------------------------------------------------------
-- Tabela 1: produkty
-- --------------------------------------------------------------
DROP TABLE IF EXISTS produkty;

CREATE TABLE produkty (
    id INT AUTO_INCREMENT PRIMARY KEY,
    nazwa VARCHAR(100),
    cena DECIMAL(10,2),
    liczba_sztuk INT,
    promo TINYINT(1)
);

INSERT INTO produkty (nazwa, cena, liczba_sztuk, promo) VALUES
('Długopis', 3.50, 120, 0),
('Zeszyt A5', 7.99, 15, 1),
('Kalkulator', 55.00, 5, 0),
('Monitor 24"', 599.00, 0, 1),
('Pendrive 32GB', 25.00, 50, 0),
('Fotel biurowy', 349.00, 2, 1);

-- --------------------------------------------------------------
-- Tabela 2: uczniowie
-- --------------------------------------------------------------
DROP TABLE IF EXISTS uczniowie;

CREATE TABLE uczniowie (
    id INT AUTO_INCREMENT PRIMARY KEY,
    imie VARCHAR(50),
    nazwisko VARCHAR(50),
    srednia DECIMAL(3,2)
);

INSERT INTO uczniowie (imie, nazwisko, srednia) VALUES
('Anna', 'Nowak', 4.80),
('Kamil', 'Kowalski', 3.45),
('Julia', 'Maj', 2.90),
('Marek', 'Zieliński', 4.10),
('Ola', 'Lis', 5.00);

-- --------------------------------------------------------------
-- Tabela 3: pracownicy
-- --------------------------------------------------------------
DROP TABLE IF EXISTS pracownicy;

CREATE TABLE pracownicy (
    id INT AUTO_INCREMENT PRIMARY KEY,
    imie VARCHAR(50),
    nazwisko VARCHAR(50),
    etat VARCHAR(10),        -- np. 1/1, 1/2
    staz INT                 -- lata pracy
);

INSERT INTO pracownicy (imie, nazwisko, etat, staz) VALUES
('Piotr', 'Adamski', '1/1', 12),
('Karolina', 'Sowa', '1/2', 3),
('Robert', 'Lewicki', '3/4', 6),
('Ela', 'Kozak', '1/1', 1),
('Tomasz', 'Miler', '1/2', 9);

-- --------------------------------------------------------------
-- Tabela 4: kierowcy
-- --------------------------------------------------------------
DROP TABLE IF EXISTS kierowcy;

CREATE TABLE kierowcy (
    id INT AUTO_INCREMENT PRIMARY KEY,
    imie VARCHAR(50),
    nazwisko VARCHAR(50),
    punkty_karne INT
);

INSERT INTO kierowcy (imie, nazwisko, punkty_karne) VALUES
('Adam', 'Kowal', 5),
('Beata', 'Czajka', 21),
('Cezary', 'Nowicki', 15),
('Danuta', 'Bąk', 30),
('Eryk', 'Sosna', 0);

-- --------------------------------------------------------------
-- Tabela 5: zamowienia
-- --------------------------------------------------------------
DROP TABLE IF EXISTS zamowienia;

CREATE TABLE zamowienia (
    id INT AUTO_INCREMENT PRIMARY KEY,
    kwota DECIMAL(10,2)
);

INSERT INTO zamowienia (kwota) VALUES
(25.00),
(75.00),
(150.00),
(205.00),
(320.00),
(99.99);

-- --------------------------------------------------------------
-- Tabela 6: filmy
-- --------------------------------------------------------------
DROP TABLE IF EXISTS filmy;

CREATE TABLE filmy (
    id INT AUTO_INCREMENT PRIMARY KEY,
    tytul VARCHAR(100),
    czas_minut INT
);

INSERT INTO filmy (tytul, czas_minut) VALUES
('Film krótki', 45),
('Dramat szkolny', 95),
('Władca kosmosu', 140),
('Komedia rodzinna', 110),
('Dokument o IT', 65);

-- --------------------------------------------------------------
-- Tabela 7: transakcje
-- --------------------------------------------------------------
DROP TABLE IF EXISTS transakcje;

CREATE TABLE transakcje (
    id INT AUTO_INCREMENT PRIMARY KEY,
    kwota DECIMAL(10,2)
);

INSERT INTO transakcje (kwota) VALUES
(200.00),
(-50.00),
(0.00),
(1200.00),
(-300.00);

-- --------------------------------------------------------------
-- Tabela 8: klienci
-- --------------------------------------------------------------
DROP TABLE IF EXISTS klienci;

CREATE TABLE klienci (
    id INT AUTO_INCREMENT PRIMARY KEY,
    imie VARCHAR(50),
    nazwisko VARCHAR(50),
    wiek INT
);

INSERT INTO klienci (imie, nazwisko, wiek) VALUES
('Jan', 'Nowak', 17),
('Kamil', 'Wrona', 22),
('Zofia', 'Borowska', 67),
('Anna', 'Kurek', 35),
('Marek', 'Urban', 15);

-- --------------------------------------------------------------
-- Tabela 9: oceny
-- --------------------------------------------------------------
DROP TABLE IF EXISTS oceny;

CREATE TABLE oceny (
    id INT AUTO_INCREMENT PRIMARY KEY,
    uczen_id INT,
    przedmiot VARCHAR(50),
    ocena INT,
    opis VARCHAR(50)
);

INSERT INTO oceny (uczen_id, przedmiot, ocena, opis) VALUES
(1, 'Matematyka', 5, NULL),
(2, 'Informatyka', 3, NULL),
(3, 'Język polski', 1, NULL),
(4, 'Historia', 4, NULL),
(5, 'Fizyka', 6, NULL);
