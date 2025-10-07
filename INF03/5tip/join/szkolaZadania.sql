-- Tworzenie bazy danych
CREATE DATABASE szkola;
USE szkola;

-- Tabela Nauczyciele
CREATE TABLE Nauczyciele (
    id_nauczyciela INT PRIMARY KEY AUTO_INCREMENT,
    imie VARCHAR(50),
    nazwisko VARCHAR(50),
    data_zatrudnienia DATE,
    pensja DECIMAL(10, 2)
);

-- Tabela Przedmioty
CREATE TABLE Przedmioty (
    id_przedmiotu INT PRIMARY KEY AUTO_INCREMENT,
    nazwa_przedmiotu VARCHAR(100),
    id_nauczyciela INT,
    FOREIGN KEY (id_nauczyciela) REFERENCES Nauczyciele(id_nauczyciela)
);

-- Tabela Uczniowie
CREATE TABLE Uczniowie (
    id_ucznia INT PRIMARY KEY AUTO_INCREMENT,
    imie VARCHAR(50),
    nazwisko VARCHAR(50),
    data_urodzenia DATE,
    klasa VARCHAR(10)
);

-- Tabela Oceny
CREATE TABLE Oceny (
    id_oceny INT PRIMARY KEY AUTO_INCREMENT,
    id_ucznia INT,
    id_przedmiotu INT,
    ocena INT,
    data_oceny DATE,
    FOREIGN KEY (id_ucznia) REFERENCES Uczniowie(id_ucznia),
    FOREIGN KEY (id_przedmiotu) REFERENCES Przedmioty(id_przedmiotu)
);

-- Wstawianie danych do Nauczyciele
INSERT INTO Nauczyciele (imie, nazwisko, data_zatrudnienia, pensja) VALUES
('Anna', 'Kowalska', '2010-09-01', 3500.00),
('Piotr', 'Nowak', '2012-09-01', 4000.00),
('Ewa', 'Wiśniewska', '2015-09-01', 3800.00),
('Jan', 'Zieliński', '2008-09-01', 4200.00),
('Maria', 'Wójcik', '2018-09-01', 3200.00),
('Tomasz', 'Kowalczyk', '2011-09-01', 3900.00);

-- Wstawianie danych do Przedmioty
INSERT INTO Przedmioty (nazwa_przedmiotu, id_nauczyciela) VALUES
('Matematyka', 1),
('Język Polski', 2),
('Historia', 3),
('Informatyka', 4),
('Biologia', 5),
('Chemia', 6),
('Fizyka', NULL); -- Przedmiot bez przypisanego nauczyciela

-- Wstawianie danych do Uczniowie
INSERT INTO Uczniowie (imie, nazwisko, data_urodzenia, klasa) VALUES
('Kacper', 'Dąbrowski', '2005-03-15', '3A'),
('Julia', 'Lewandowska', '2006-07-20', '2B'),
('Mateusz', 'Woźniak', '2005-11-01', '3A'),
('Natalia', 'Kaczmarek', '2007-01-25', '1C'),
('Filip', 'Grabowski', '2006-04-10', '2B'),
('Oliwia', 'Pawlak', '2005-09-05', '3A');

-- Wstawianie danych do Oceny
INSERT INTO Oceny (id_ucznia, id_przedmiotu, ocena, data_oceny) VALUES
(1, 1, 4, '2023-10-01'),
(1, 2, 5, '2023-10-05'),
(2, 1, 3, '2023-10-02'),
(2, 3, 4, '2023-10-06'),
(3, 1, 5, '2023-10-03'),
(3, 4, 4, '2023-10-07'),
(4, 2, 4, '2023-10-04'),
(4, 5, 3, '2023-10-08'),
(5, 1, 3, '2023-10-09'),
(5, 2, 4, '2023-10-10'),
(6, 3, 5, '2023-10-11'),
(6, 4, 3, '2023-10-12'),
(1, 4, 4, '2023-10-13');