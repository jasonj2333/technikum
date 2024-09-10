CREATE DATABASE ksiegarnia2022;

CREATE TABLE klient
(
    id_klienta int AUTO_INCREMENT NOT NULL PRIMARY KEY,
    nazwisko varchar(50) NOT NULL,
    imie varchar(30) NOT NULL,
    PESEL varchar(11) NOT NULL,
    telefon varchar(12),
    miejscowosc varchar(30)
);

USE ksiegarnia2022;
CREATE TABLE Ksiazki
(
    id_ksiazki int,
    tytul varchar(100) NOT NULL,
    autor varchar(80) NOT NULL,
    cena decimal,
    wydawnictwo varchar(30),
    temat varchar(30),
    miejsce_wydania varchar(30),
    jezyk_ksiazki varchar(15),
    opis varchar(100)
);

DROP TABLE Ksiazki;

ALTER TABLE Ksiazki ADD liczba_stron varchar(5);
ALTER TABLE Ksiazki ADD rok_wydania int;
ALTER TABLE Ksiazki DROP liczba_stron;

ALTER TABLE Ksiazki MODIFY COLUMN rok_wydania varchar(4) NOT NULL;
ALTER TABLE Ksiazki MODIFY rok_wydania varchar(4) NOT NULL;

USE ksiegarnia2022
ALTER TABLE Ksiazki DROP COLUMN autor;
ALTER TABLE Ksiazki ADD id_autora int NOT NULL;
--Primary KEY
CREATE TABLE Zamowienia
(
    id_zamowienia int PRIMARY KEY,
    id_klienta int NOT NULL,
    data_zlozenia_zamowienia datetime,
    koszt wysylki decimal,
    wydawnictwo varchar(30),
    id faktury int 
);

ALTER TABLE Ksiazki ADD PRIMARY KEY (id_ksiazki);
ALTER TABLE Ksiazki DROP PRIMARY KEY;

CREATE TABLE Autor
(
    id_autora int AUTO_INCREMENT NOT NULL PRIMARY KEY,
    nazwisko varchar(50) NOT NULL,
    imie varchar(30) NOT NULL,
    narodowosc varchar(30),
    okres_tworzenia varchar(35),
    jezyk varchar(30),
    rodzaj_tworczosci varchar(35),
    osiagniecia varchar(35)
);
--AUTO_INCREMENT
CREATE TABLE Autor
(
    id_autora int AUTO_INCREMENT NOT NULL PRIMARY KEY,
    nazwisko varchar(50) NOT NULL,
    imie varchar(30) NOT NULL,
    narodowosc varchar(30),
    okres_tworzenia varchar(35),
    jezyk varchar(30),
    rodzaj_tworczosci varchar(35),
    osiagniecia varchar(35)
) AUTO_INCREMENT=12; --numerowanie od inej pozacyji niż 1

ALTER TABLE ksiazki MODIFY id_ksiazki int PRIMARY KEY NOT NULL AUTO_INCREMENT;
--DEFAULT
ALTER TABLE ksiazki ALTER rok_wydania SET DEFAULT '2001';

CREATE TABLE Autor
(
    id_autora int AUTO_INCREMENT NOT NULL PRIMARY KEY,
    nazwisko varchar(50) NOT NULL,
    imie varchar(30) NOT NULL,
    narodowosc varchar(30) DEFAULT 'Polska',
    okres_tworzenia varchar(35),
    jezyk varchar(30),
    rodzaj_tworczosci varchar(35),
    osiagniecia varchar(35)
);
--UNIQUE
CREATE TABLE Ksiazki
(
    id_ksiazki int,
    tytul varchar(100) NOT NULL UNIQUE,
    autor varchar(80) NOT NULL,
    cena decimal,
    wydawnictwo varchar(30),
    temat varchar(30),
    miejsce_wydania varchar(30),
    jezyk_ksiazki varchar(15),
    opis varchar(100)
);

ALTER TABLE ksiazki ADD UNIQUE (tytul);

ALTER TABLE klient ADD UNIQUE (PESEL);
ALTER TABLE klient ADD UNIQUE (telefon);

--CHECK
CREATE TABLE Ksiazki
(
    id_ksiazki int,
    tytul varchar(100) NOT NULL UNIQUE,
    autor varchar(80) NOT NULL,
    cena decimal, 
    CHECK(cena > 20),
    wydawnictwo varchar(30),
    temat varchar(30),
    miejsce_wydania varchar(30),
    rok_wydania int, 
    CHECK(rok_wydania BETWEEN 2000 AND 2022),
    jezyk_ksiazki varchar(15),
    opis varchar(100)
);

ALTER TABLE ksiazki ADD CHECK(cena > 20);
ALTER TABLE ksiazki ADD CONSTRAINT CHK_KSIAZKI_CENA CHECK (cena > 20);
ALTER TABLE ksiazki DROP CONSTRAINT  CHK_KSIAZKI_CENA;