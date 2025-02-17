-- phpMyAdmin SQL Dump
-- version 5.2.1
-- https://www.phpmyadmin.net/
--
-- Host: 127.0.0.1
-- Generation Time: Feb 17, 2025 at 01:29 PM
-- Wersja serwera: 10.4.32-MariaDB
-- Wersja PHP: 8.2.12

SET SQL_MODE = "NO_AUTO_VALUE_ON_ZERO";
START TRANSACTION;
SET time_zone = "+00:00";


/*!40101 SET @OLD_CHARACTER_SET_CLIENT=@@CHARACTER_SET_CLIENT */;
/*!40101 SET @OLD_CHARACTER_SET_RESULTS=@@CHARACTER_SET_RESULTS */;
/*!40101 SET @OLD_COLLATION_CONNECTION=@@COLLATION_CONNECTION */;
/*!40101 SET NAMES utf8mb4 */;

--
-- Database: `ksiegarnia`
--

-- --------------------------------------------------------

--
-- Struktura tabeli dla tabeli `autor`
--

CREATE TABLE `autor` (
  `id_autora` int(11) NOT NULL,
  `nazwisko` varchar(50) NOT NULL,
  `imie` varchar(30) NOT NULL,
  `narodowosc` varchar(30) DEFAULT NULL,
  `okres_tworzenia` varchar(40) DEFAULT NULL,
  `jezyk` varchar(30) DEFAULT 'polski',
  `rodzaj_tworczosci` varchar(35) DEFAULT NULL,
  `osiagniecia` varchar(100) DEFAULT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_general_ci;

--
-- Dumping data for table `autor`
--

INSERT INTO `autor` (`id_autora`, `nazwisko`, `imie`, `narodowosc`, `okres_tworzenia`, `jezyk`, `rodzaj_tworczosci`, `osiagniecia`) VALUES
(1, 'Sienkiewicz', 'Henryk', NULL, NULL, 'polski', NULL, NULL),
(2, 'Słowacki', 'Juliusz', NULL, NULL, 'polski', NULL, NULL),
(3, 'Mickiewicz', 'Adam', NULL, NULL, 'polski', NULL, NULL),
(4, 'Sapkowski', 'Andrzej', 'polska', NULL, NULL, NULL, NULL);

-- --------------------------------------------------------

--
-- Struktura tabeli dla tabeli `klient`
--

CREATE TABLE `klient` (
  `id_klienta` int(11) NOT NULL,
  `nazwisko` varchar(60) NOT NULL,
  `imie` varchar(40) NOT NULL,
  `kod_pocztowy` varchar(6) DEFAULT NULL,
  `miejscowosc` varchar(50) DEFAULT 'Kraków',
  `ulica` varchar(50) DEFAULT NULL,
  `nr_domu` varchar(7) DEFAULT NULL,
  `PESEL` varchar(11) DEFAULT NULL,
  `email` varchar(70) DEFAULT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_general_ci;

--
-- Dumping data for table `klient`
--

INSERT INTO `klient` (`id_klienta`, `nazwisko`, `imie`, `kod_pocztowy`, `miejscowosc`, `ulica`, `nr_domu`, `PESEL`, `email`) VALUES
(1, 'Adamska', 'Anna', '87-100', 'Toruń', 'Górna', '7', '60062544863', NULL),
(2, 'Bolecki', 'Miłosz', '45-404', 'Opole', 'Nowa', '24', '64120563126', NULL),
(3, 'Wilk', 'Dawid', '87-100', 'Toruń', 'Szeroka', '1', '98040468241', NULL);

-- --------------------------------------------------------

--
-- Struktura tabeli dla tabeli `ksiazki`
--

CREATE TABLE `ksiazki` (
  `id_ksiazki` int(11) NOT NULL,
  `tytul` varchar(100) NOT NULL,
  `cena` decimal(10,0) DEFAULT NULL,
  `wydawnictwo` varchar(20) DEFAULT NULL,
  `temat` varchar(30) DEFAULT NULL,
  `miejsce_wydania` varchar(28) DEFAULT NULL,
  `jezyk_ksiazki` varchar(15) DEFAULT NULL,
  `opis` varchar(100) DEFAULT NULL,
  `id_autora` int(11) NOT NULL
) ;

--
-- Dumping data for table `ksiazki`
--

INSERT INTO `ksiazki` (`id_ksiazki`, `tytul`, `cena`, `wydawnictwo`, `temat`, `miejsce_wydania`, `jezyk_ksiazki`, `opis`, `id_autora`) VALUES
(1, 'Potop', NULL, NULL, NULL, NULL, NULL, NULL, 1),
(2, 'Pan Tadeusz', NULL, NULL, NULL, NULL, NULL, NULL, 2),
(3, 'Kordian', NULL, NULL, NULL, NULL, NULL, NULL, 3),
(4, 'Wiedźmin', NULL, NULL, NULL, NULL, NULL, NULL, 4);

--
-- Indeksy dla zrzutów tabel
--

--
-- Indeksy dla tabeli `autor`
--
ALTER TABLE `autor`
  ADD PRIMARY KEY (`id_autora`);

--
-- Indeksy dla tabeli `klient`
--
ALTER TABLE `klient`
  ADD PRIMARY KEY (`id_klienta`),
  ADD UNIQUE KEY `PESEL` (`PESEL`);

--
-- Indeksy dla tabeli `ksiazki`
--
ALTER TABLE `ksiazki`
  ADD PRIMARY KEY (`id_ksiazki`);

--
-- AUTO_INCREMENT for dumped tables
--

--
-- AUTO_INCREMENT for table `autor`
--
ALTER TABLE `autor`
  MODIFY `id_autora` int(11) NOT NULL AUTO_INCREMENT, AUTO_INCREMENT=5;

--
-- AUTO_INCREMENT for table `klient`
--
ALTER TABLE `klient`
  MODIFY `id_klienta` int(11) NOT NULL AUTO_INCREMENT, AUTO_INCREMENT=4;

--
-- AUTO_INCREMENT for table `ksiazki`
--
ALTER TABLE `ksiazki`
  MODIFY `id_ksiazki` int(11) NOT NULL AUTO_INCREMENT;
COMMIT;

/*!40101 SET CHARACTER_SET_CLIENT=@OLD_CHARACTER_SET_CLIENT */;
/*!40101 SET CHARACTER_SET_RESULTS=@OLD_CHARACTER_SET_RESULTS */;
/*!40101 SET COLLATION_CONNECTION=@OLD_COLLATION_CONNECTION */;
