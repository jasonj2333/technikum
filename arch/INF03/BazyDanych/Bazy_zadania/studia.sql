-- phpMyAdmin SQL Dump
-- version 5.2.0
-- https://www.phpmyadmin.net/
--
-- Host: 127.0.0.1
-- Czas generowania: 27 Paź 2022, 20:55
-- Wersja serwera: 10.4.24-MariaDB
-- Wersja PHP: 8.1.6

SET SQL_MODE = "NO_AUTO_VALUE_ON_ZERO";
START TRANSACTION;
SET time_zone = "+00:00";


/*!40101 SET @OLD_CHARACTER_SET_CLIENT=@@CHARACTER_SET_CLIENT */;
/*!40101 SET @OLD_CHARACTER_SET_RESULTS=@@CHARACTER_SET_RESULTS */;
/*!40101 SET @OLD_COLLATION_CONNECTION=@@COLLATION_CONNECTION */;
/*!40101 SET NAMES utf8mb4 */;

--
-- Baza danych: `studia_test`
--

-- --------------------------------------------------------

--
-- Struktura tabeli dla tabeli `kierunek`
--

CREATE TABLE `kierunek` (
  `id_kierunek` int(11) NOT NULL,
  `nazwa` varchar(250) COLLATE utf8_polish_ci NOT NULL,
  `id_wydzial` int(11) NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8 COLLATE=utf8_polish_ci;

--
-- Zrzut danych tabeli `kierunek`
--

INSERT INTO `kierunek` (`id_kierunek`, `nazwa`, `id_wydzial`) VALUES
(1, 'Informatyka', 1),
(2, 'Teleinformatyka', 1),
(3, 'Elektronika', 1),
(4, 'Informatyka Stosowana', 2),
(5, 'Fizyka Techniczna', 2),
(6, 'Informatyka i Ekonometria', 3),
(7, 'Zarządzanie', 3),
(8, 'Zarządzanie i Inżynieria Produkcji', 3),
(9, 'Matematyka', 4);

-- --------------------------------------------------------

--
-- Struktura tabeli dla tabeli `klub_sportowy`
--

CREATE TABLE `klub_sportowy` (
  `id_klub_sportowy` int(11) NOT NULL,
  `nazwa` varchar(150) COLLATE utf8_polish_ci NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8 COLLATE=utf8_polish_ci;

--
-- Zrzut danych tabeli `klub_sportowy`
--

INSERT INTO `klub_sportowy` (`id_klub_sportowy`, `nazwa`) VALUES
(1, 'Koszykówka'),
(2, 'Siatkówka'),
(3, 'Piłka nożna'),
(4, 'Pływanie');

-- --------------------------------------------------------

--
-- Struktura tabeli dla tabeli `kolo_naukowe`
--

CREATE TABLE `kolo_naukowe` (
  `id_kolo_naukowe` int(11) NOT NULL,
  `nazwa` varchar(150) COLLATE utf8_polish_ci NOT NULL,
  `id_wydzial` int(11) NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8 COLLATE=utf8_polish_ci;

--
-- Zrzut danych tabeli `kolo_naukowe`
--

INSERT INTO `kolo_naukowe` (`id_kolo_naukowe`, `nazwa`, `id_wydzial`) VALUES
(1, 'Kosmiczne sprężyny', 1),
(2, 'Odjazdowe roboty', 2),
(3, 'Ciepłe bity', 2),
(4, 'Szukając prawdy', 1);

-- --------------------------------------------------------

--
-- Struktura tabeli dla tabeli `przedmiot`
--

CREATE TABLE `przedmiot` (
  `id_przedmiot` int(11) NOT NULL,
  `nazwa` varchar(150) COLLATE utf8_polish_ci NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8 COLLATE=utf8_polish_ci;

--
-- Zrzut danych tabeli `przedmiot`
--

INSERT INTO `przedmiot` (`id_przedmiot`, `nazwa`) VALUES
(1, 'Matematyka'),
(2, 'Fizyka'),
(3, 'Systemy baz danych'),
(4, 'Programowanie obiektowe');

-- --------------------------------------------------------

--
-- Struktura tabeli dla tabeli `przedmiotstudenta`
--

CREATE TABLE `przedmiotstudenta` (
  `id_przedmiot_studenta` int(11) NOT NULL,
  `id_przedmiot` int(11) NOT NULL,
  `id_student` int(11) NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8 COLLATE=utf8_polish_ci;

--
-- Zrzut danych tabeli `przedmiotstudenta`
--

INSERT INTO `przedmiotstudenta` (`id_przedmiot_studenta`, `id_przedmiot`, `id_student`) VALUES
(1, 1, 1),
(2, 2, 1),
(3, 3, 6),
(4, 4, 1),
(5, 1, 2),
(6, 2, 2),
(7, 3, 2),
(8, 4, 2);

-- --------------------------------------------------------

--
-- Struktura tabeli dla tabeli `student`
--

CREATE TABLE `student` (
  `id_student` int(11) NOT NULL,
  `imie` varchar(20) COLLATE utf8_polish_ci NOT NULL,
  `nazwisko` varchar(30) COLLATE utf8_polish_ci NOT NULL,
  `nr_albumu` int(11) NOT NULL,
  `rok_studiow` int(11) NOT NULL,
  `miejscowosc` varchar(30) COLLATE utf8_polish_ci NOT NULL,
  `wojewodztwo` varchar(30) COLLATE utf8_polish_ci NOT NULL,
  `rok_urodzenia` int(11) NOT NULL,
  `status` enum('student','urlop','skreślony','absolwent') COLLATE utf8_polish_ci DEFAULT NULL,
  `id_wydzial` int(11) DEFAULT NULL,
  `id_kierunek` int(11) DEFAULT NULL,
  `id_kolo_naukowe` int(11) DEFAULT NULL,
  `id_klub_sportowy` int(11) DEFAULT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8 COLLATE=utf8_polish_ci;

--
-- Zrzut danych tabeli `student`
--

INSERT INTO `student` (`id_student`, `imie`, `nazwisko`, `nr_albumu`, `rok_studiow`, `miejscowosc`, `wojewodztwo`, `rok_urodzenia`, `status`, `id_wydzial`, `id_kierunek`, `id_kolo_naukowe`, `id_klub_sportowy`) VALUES
(1, 'Jan', 'Kowalski', 34772, 3, 'Kielce', 'świętokrzyskie', 1999, 'student', 1, 1, 2, 1),
(2, 'Adam', 'Nowak', 34553, 1, 'Kalisz', 'wielkopolskie', 2000, 'student', 2, 4, 1, 2),
(3, 'Michał', 'Szczęsny', 34557, 2, 'Opole', 'opolskie', 1997, 'skreślony', 2, 5, 2, 3),
(4, 'Jakub', 'Przygoński', 34554, 4, 'Kraków', 'małopolskie', 1998, 'urlop', 3, 8, 4, 1),
(5, 'Agnieszka', 'Borówka', 34775, 2, 'Tarnów', 'małopolskie', 1996, 'urlop', 3, 7, 2, 4),
(6, 'Izabela', 'Skała', 34211, 5, 'Krosno', 'podkarpackie', 1995, 'absolwent', 3, 6, 1, 1),
(7, 'Bożena', 'Kralisz', 34675, 1, 'Częstochowa', 'śląskie', 1999, 'student', 1, 2, 1, 2),
(8, 'Damian', 'Izdebski', 34212, 3, 'Katowice', 'śląskie', 1997, 'skreślony', 2, 4, 1, 1),
(9, 'Magdalena', 'Jędraszek', 34222, 4, 'Iława', 'warmińsko-mazurskie', 1997, 'student', 4, 9, NULL, 1),
(10, 'Justyna', 'Kędzior', 34556, 1, 'Wrocław', 'dolnośląskie', 2000, 'student', 3, 7, 3, 3),
(11, 'Anna', 'Kowalska', 34596, 2, 'Opole', 'dolnośląskie', 2001, 'student', 2, 4, 3, 1),
(12, 'Wojciech', 'Surówka', 34778, 2, 'Bochnia', 'małopolskie', 1997, 'student', 4, 1, 2, 2),
(13, 'Bożena', 'Korzeniowska', 34685, 2, 'Częstochowa', 'śląskie', 2001, 'student', 1, 6, 4, 4),
(14, 'Karolina', 'Góralczyk', 34872, 1, 'Ostrowiec Świętokrzyski', 'świętokrzyskie', 200, 'student', 3, 8, 2, 1),
(15, 'Adam', 'Zybertowicz', 34556, 2, 'Kalisz', 'wielkopolskie', 1999, 'student', 2, 1, 4, 4);

-- --------------------------------------------------------

--
-- Struktura tabeli dla tabeli `wydzial`
--

CREATE TABLE `wydzial` (
  `id_wydzial` int(11) NOT NULL,
  `nazwa` varchar(150) COLLATE utf8_polish_ci NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8 COLLATE=utf8_polish_ci;

--
-- Zrzut danych tabeli `wydzial`
--

INSERT INTO `wydzial` (`id_wydzial`, `nazwa`) VALUES
(1, 'Wydział Informatyki'),
(2, 'Wydział Fizyki i Informatyki Stosowanej'),
(3, 'Wydział Zarządzania'),
(4, 'Wydział Matematyki Stosowanej');

--
-- Indeksy dla zrzutów tabel
--

--
-- Indeksy dla tabeli `kierunek`
--
ALTER TABLE `kierunek`
  ADD PRIMARY KEY (`id_kierunek`),
  ADD KEY `id_wydzial` (`id_wydzial`);

--
-- Indeksy dla tabeli `klub_sportowy`
--
ALTER TABLE `klub_sportowy`
  ADD PRIMARY KEY (`id_klub_sportowy`);

--
-- Indeksy dla tabeli `kolo_naukowe`
--
ALTER TABLE `kolo_naukowe`
  ADD PRIMARY KEY (`id_kolo_naukowe`),
  ADD KEY `id_wydzial` (`id_wydzial`);

--
-- Indeksy dla tabeli `przedmiot`
--
ALTER TABLE `przedmiot`
  ADD PRIMARY KEY (`id_przedmiot`);

--
-- Indeksy dla tabeli `przedmiotstudenta`
--
ALTER TABLE `przedmiotstudenta`
  ADD PRIMARY KEY (`id_przedmiot_studenta`),
  ADD KEY `id_przedmiot` (`id_przedmiot`),
  ADD KEY `id_student` (`id_student`);

--
-- Indeksy dla tabeli `student`
--
ALTER TABLE `student`
  ADD PRIMARY KEY (`id_student`),
  ADD KEY `id_wydzial` (`id_wydzial`),
  ADD KEY `id_kierunek` (`id_kierunek`),
  ADD KEY `id_kolo_naukowe` (`id_kolo_naukowe`),
  ADD KEY `id_klub_sportowy` (`id_klub_sportowy`);

--
-- Indeksy dla tabeli `wydzial`
--
ALTER TABLE `wydzial`
  ADD PRIMARY KEY (`id_wydzial`);

--
-- AUTO_INCREMENT dla zrzuconych tabel
--

--
-- AUTO_INCREMENT dla tabeli `kierunek`
--
ALTER TABLE `kierunek`
  MODIFY `id_kierunek` int(11) NOT NULL AUTO_INCREMENT, AUTO_INCREMENT=10;

--
-- AUTO_INCREMENT dla tabeli `klub_sportowy`
--
ALTER TABLE `klub_sportowy`
  MODIFY `id_klub_sportowy` int(11) NOT NULL AUTO_INCREMENT, AUTO_INCREMENT=5;

--
-- AUTO_INCREMENT dla tabeli `kolo_naukowe`
--
ALTER TABLE `kolo_naukowe`
  MODIFY `id_kolo_naukowe` int(11) NOT NULL AUTO_INCREMENT, AUTO_INCREMENT=5;

--
-- AUTO_INCREMENT dla tabeli `przedmiot`
--
ALTER TABLE `przedmiot`
  MODIFY `id_przedmiot` int(11) NOT NULL AUTO_INCREMENT, AUTO_INCREMENT=5;

--
-- AUTO_INCREMENT dla tabeli `student`
--
ALTER TABLE `student`
  MODIFY `id_student` int(11) NOT NULL AUTO_INCREMENT, AUTO_INCREMENT=16;

--
-- AUTO_INCREMENT dla tabeli `wydzial`
--
ALTER TABLE `wydzial`
  MODIFY `id_wydzial` int(11) NOT NULL AUTO_INCREMENT, AUTO_INCREMENT=5;

--
-- Ograniczenia dla zrzutów tabel
--

--
-- Ograniczenia dla tabeli `kierunek`
--
ALTER TABLE `kierunek`
  ADD CONSTRAINT `kierunek_ibfk_1` FOREIGN KEY (`id_wydzial`) REFERENCES `wydzial` (`id_wydzial`) ON DELETE CASCADE;

--
-- Ograniczenia dla tabeli `kolo_naukowe`
--
ALTER TABLE `kolo_naukowe`
  ADD CONSTRAINT `kolo_naukowe_ibfk_1` FOREIGN KEY (`id_wydzial`) REFERENCES `wydzial` (`id_wydzial`) ON DELETE CASCADE;

--
-- Ograniczenia dla tabeli `przedmiotstudenta`
--
ALTER TABLE `przedmiotstudenta`
  ADD CONSTRAINT `przedmiotstudenta_ibfk_1` FOREIGN KEY (`id_przedmiot`) REFERENCES `przedmiot` (`id_przedmiot`) ON DELETE CASCADE,
  ADD CONSTRAINT `przedmiotstudenta_ibfk_2` FOREIGN KEY (`id_student`) REFERENCES `student` (`id_student`) ON DELETE CASCADE;

--
-- Ograniczenia dla tabeli `student`
--
ALTER TABLE `student`
  ADD CONSTRAINT `student_ibfk_1` FOREIGN KEY (`id_wydzial`) REFERENCES `wydzial` (`id_wydzial`) ON DELETE CASCADE,
  ADD CONSTRAINT `student_ibfk_2` FOREIGN KEY (`id_kierunek`) REFERENCES `kierunek` (`id_kierunek`) ON DELETE CASCADE,
  ADD CONSTRAINT `student_ibfk_3` FOREIGN KEY (`id_kolo_naukowe`) REFERENCES `kolo_naukowe` (`id_kolo_naukowe`) ON DELETE CASCADE,
  ADD CONSTRAINT `student_ibfk_4` FOREIGN KEY (`id_klub_sportowy`) REFERENCES `klub_sportowy` (`id_klub_sportowy`) ON DELETE CASCADE;
COMMIT;

/*!40101 SET CHARACTER_SET_CLIENT=@OLD_CHARACTER_SET_CLIENT */;
/*!40101 SET CHARACTER_SET_RESULTS=@OLD_CHARACTER_SET_RESULTS */;
/*!40101 SET COLLATION_CONNECTION=@OLD_COLLATION_CONNECTION */;
