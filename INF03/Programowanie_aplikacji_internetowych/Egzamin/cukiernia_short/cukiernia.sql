-- phpMyAdmin SQL Dump
-- version 5.0.4
-- https://www.phpmyadmin.net/
--
-- Host: localhost
-- Czas generowania: 16 Sty 2021, 19:42
-- Wersja serwera: 10.4.17-MariaDB
-- Wersja PHP: 7.4.13

SET SQL_MODE = "NO_AUTO_VALUE_ON_ZERO";
START TRANSACTION;
SET time_zone = "+00:00";


/*!40101 SET @OLD_CHARACTER_SET_CLIENT=@@CHARACTER_SET_CLIENT */;
/*!40101 SET @OLD_CHARACTER_SET_RESULTS=@@CHARACTER_SET_RESULTS */;
/*!40101 SET @OLD_COLLATION_CONNECTION=@@COLLATION_CONNECTION */;
/*!40101 SET NAMES utf8mb4 */;

--
-- Baza danych: `cukiernia`
--

-- --------------------------------------------------------

--
-- Struktura tabeli dla tabeli `dostepnosc`
--

CREATE TABLE `dostepnosc` (
  `id_filii` int(11) NOT NULL,
  `id_towaru` int(11) NOT NULL,
  `ilosc` int(11) NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8 COLLATE=utf8_bin;

--
-- Zrzut danych tabeli `dostepnosc`
--

INSERT INTO `dostepnosc` (`id_filii`, `id_towaru`, `ilosc`) VALUES
(1, 3, 6),
(1, 2, 3),
(1, 5, 8),
(2, 2, 4),
(2, 5, 5),
(3, 1, 12),
(3, 2, 15),
(3, 3, 1),
(4, 1, 5),
(4, 4, 7),
(4, 3, 8),
(5, 1, 3),
(5, 5, 1),
(5, 2, 4);

-- --------------------------------------------------------

--
-- Struktura tabeli dla tabeli `filie`
--

CREATE TABLE `filie` (
  `id` int(11) NOT NULL,
  `nazwa` varchar(64) COLLATE utf8_bin NOT NULL,
  `miasto` varchar(64) COLLATE utf8_bin NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8 COLLATE=utf8_bin;

--
-- Zrzut danych tabeli `filie`
--

INSERT INTO `filie` (`id`, `nazwa`, `miasto`) VALUES
(1, 'Różynka', 'Opole'),
(2, 'Tulipan', 'Bystra Podhalańska'),
(3, 'Mleczne Królestwo', 'Częstochowa'),
(4, 'Piernikowo', 'Lubin'),
(5, 'Tutti Fruity', 'Warszawa');

-- --------------------------------------------------------

--
-- Struktura tabeli dla tabeli `wyroby`
--

CREATE TABLE `wyroby` (
  `id` int(11) NOT NULL,
  `nazwa` varchar(64) COLLATE utf8_bin NOT NULL,
  `typ` tinyint(4) NOT NULL,
  `czy_gluten` bit(1) NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8 COLLATE=utf8_bin;

--
-- Zrzut danych tabeli `wyroby`
--

INSERT INTO `wyroby` (`id`, `nazwa`, `typ`, `czy_gluten`) VALUES
(1, 'Malinowa chmurka', 1, b'0'),
(2, 'Sernik', 1, b'1'),
(3, 'Bezglutenowe kule mocy z daktyli', 2, b'0'),
(4, 'krakowskie', 3, b'1'),
(5, 'husarski', 4, b'1'),
(6, 'Przekładaniec', 1, b'0');

--
-- Indeksy dla zrzutów tabel
--

--
-- Indeksy dla tabeli `filie`
--
ALTER TABLE `filie`
  ADD PRIMARY KEY (`id`);

--
-- Indeksy dla tabeli `wyroby`
--
ALTER TABLE `wyroby`
  ADD PRIMARY KEY (`id`);

--
-- AUTO_INCREMENT dla zrzuconych tabel
--

--
-- AUTO_INCREMENT dla tabeli `filie`
--
ALTER TABLE `filie`
  MODIFY `id` int(11) NOT NULL AUTO_INCREMENT, AUTO_INCREMENT=6;

--
-- AUTO_INCREMENT dla tabeli `wyroby`
--
ALTER TABLE `wyroby`
  MODIFY `id` int(11) NOT NULL AUTO_INCREMENT, AUTO_INCREMENT=7;
COMMIT;

/*!40101 SET CHARACTER_SET_CLIENT=@OLD_CHARACTER_SET_CLIENT */;
/*!40101 SET CHARACTER_SET_RESULTS=@OLD_CHARACTER_SET_RESULTS */;
/*!40101 SET COLLATION_CONNECTION=@OLD_COLLATION_CONNECTION */;
