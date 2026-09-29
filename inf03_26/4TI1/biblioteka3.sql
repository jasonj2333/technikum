-- phpMyAdmin SQL Dump
-- version 5.2.1
-- https://www.phpmyadmin.net/
--
-- Host: 127.0.0.1
-- Generation Time: Wrz 29, 2026 at 11:35 AM
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
-- Database: `biblioteka`
--

-- --------------------------------------------------------

--
-- Struktura tabeli dla tabeli `autor`
--

CREATE TABLE `autor` (
  `id` int(11) UNSIGNED NOT NULL,
  `imie` varchar(100) NOT NULL,
  `nazwisko` varchar(150) NOT NULL,
  `rokUrodzenia` int(4) NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_polish_ci;

--
-- Dumping data for table `autor`
--

INSERT INTO `autor` (`id`, `imie`, `nazwisko`, `rokUrodzenia`) VALUES
(1, 'Bolesław', 'Prus', 1847),
(2, 'Henryk', 'Sienkiewicz', 1846);

-- --------------------------------------------------------

--
-- Struktura tabeli dla tabeli `czytelnicy`
--

CREATE TABLE `czytelnicy` (
  `id` int(11) NOT NULL,
  `imie` varchar(100) NOT NULL,
  `nazwisko` varchar(150) NOT NULL,
  `data_zapisu` date NOT NULL,
  `id_legitymacji` int(11) UNSIGNED DEFAULT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8 COLLATE=utf8_polish_ci;

--
-- Dumping data for table `czytelnicy`
--

INSERT INTO `czytelnicy` (`id`, `imie`, `nazwisko`, `data_zapisu`, `id_legitymacji`) VALUES
(1, 'Ania', 'Nowak', '2026-09-21', 2),
(2, 'Wojtek', 'Kapera', '2026-09-01', 1);

-- --------------------------------------------------------

--
-- Struktura tabeli dla tabeli `ksiazki`
--

CREATE TABLE `ksiazki` (
  `id` int(11) UNSIGNED NOT NULL,
  `isbn` varchar(13) NOT NULL,
  `tytul` varchar(100) NOT NULL,
  `rokWydania` int(4) UNSIGNED NOT NULL,
  `id_autor` int(11) UNSIGNED NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_polish_ci;

--
-- Dumping data for table `ksiazki`
--

INSERT INTO `ksiazki` (`id`, `isbn`, `tytul`, `rokWydania`, `id_autor`) VALUES
(1, '9788375176889', 'Lalka', 2023, 1),
(2, '9788382796445', 'W Pustyni i w puszczy', 2022, 2),
(3, '9788373271609', 'Faraon', 2017, 1);

-- --------------------------------------------------------

--
-- Struktura tabeli dla tabeli `legitymacje`
--

CREATE TABLE `legitymacje` (
  `id` int(11) UNSIGNED NOT NULL,
  `numer` varchar(6) NOT NULL,
  `dataWydania` date NOT NULL,
  `dataWaznosci` date NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8 COLLATE=utf8_polish_ci;

--
-- Dumping data for table `legitymacje`
--

INSERT INTO `legitymacje` (`id`, `numer`, `dataWydania`, `dataWaznosci`) VALUES
(1, 'ABC001', '2026-09-28', '2028-09-27'),
(2, 'ABC002', '2026-09-30', '2027-09-29');

-- --------------------------------------------------------

--
-- Struktura tabeli dla tabeli `wypozyczenia`
--

CREATE TABLE `wypozyczenia` (
  `id` int(11) UNSIGNED NOT NULL,
  `id_ksiazki` int(11) UNSIGNED NOT NULL,
  `id_czytelnika` int(11) NOT NULL,
  `data_wypozyczenia` date NOT NULL DEFAULT current_timestamp(),
  `data_zwrotu` date DEFAULT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_general_ci;

--
-- Dumping data for table `wypozyczenia`
--

INSERT INTO `wypozyczenia` (`id`, `id_ksiazki`, `id_czytelnika`, `data_wypozyczenia`, `data_zwrotu`) VALUES
(1, 3, 1, '2026-09-28', NULL);

--
-- Indeksy dla zrzutów tabel
--

--
-- Indeksy dla tabeli `autor`
--
ALTER TABLE `autor`
  ADD PRIMARY KEY (`id`);

--
-- Indeksy dla tabeli `czytelnicy`
--
ALTER TABLE `czytelnicy`
  ADD PRIMARY KEY (`id`),
  ADD UNIQUE KEY `id_legitymacji` (`id_legitymacji`);

--
-- Indeksy dla tabeli `ksiazki`
--
ALTER TABLE `ksiazki`
  ADD PRIMARY KEY (`id`),
  ADD KEY `id_autor` (`id_autor`);

--
-- Indeksy dla tabeli `legitymacje`
--
ALTER TABLE `legitymacje`
  ADD PRIMARY KEY (`id`);

--
-- Indeksy dla tabeli `wypozyczenia`
--
ALTER TABLE `wypozyczenia`
  ADD PRIMARY KEY (`id`),
  ADD KEY `id_ksiazki` (`id_ksiazki`),
  ADD KEY `id_czytelnika` (`id_czytelnika`);

--
-- AUTO_INCREMENT for dumped tables
--

--
-- AUTO_INCREMENT for table `autor`
--
ALTER TABLE `autor`
  MODIFY `id` int(11) UNSIGNED NOT NULL AUTO_INCREMENT, AUTO_INCREMENT=3;

--
-- AUTO_INCREMENT for table `czytelnicy`
--
ALTER TABLE `czytelnicy`
  MODIFY `id` int(11) NOT NULL AUTO_INCREMENT, AUTO_INCREMENT=3;

--
-- AUTO_INCREMENT for table `ksiazki`
--
ALTER TABLE `ksiazki`
  MODIFY `id` int(11) UNSIGNED NOT NULL AUTO_INCREMENT, AUTO_INCREMENT=4;

--
-- AUTO_INCREMENT for table `legitymacje`
--
ALTER TABLE `legitymacje`
  MODIFY `id` int(11) UNSIGNED NOT NULL AUTO_INCREMENT, AUTO_INCREMENT=3;

--
-- AUTO_INCREMENT for table `wypozyczenia`
--
ALTER TABLE `wypozyczenia`
  MODIFY `id` int(11) UNSIGNED NOT NULL AUTO_INCREMENT, AUTO_INCREMENT=2;

--
-- Constraints for dumped tables
--

--
-- Constraints for table `czytelnicy`
--
ALTER TABLE `czytelnicy`
  ADD CONSTRAINT `legitymacke_fk` FOREIGN KEY (`id_legitymacji`) REFERENCES `legitymacje` (`id`);

--
-- Constraints for table `ksiazki`
--
ALTER TABLE `ksiazki`
  ADD CONSTRAINT `ksiazki_ibfk_1` FOREIGN KEY (`id_autor`) REFERENCES `autor` (`id`);

--
-- Constraints for table `wypozyczenia`
--
ALTER TABLE `wypozyczenia`
  ADD CONSTRAINT `wypozyczenia_ibfk_1` FOREIGN KEY (`id_ksiazki`) REFERENCES `ksiazki` (`id`),
  ADD CONSTRAINT `wypozyczenia_ibfk_2` FOREIGN KEY (`id_czytelnika`) REFERENCES `czytelnicy` (`id`);
COMMIT;

/*!40101 SET CHARACTER_SET_CLIENT=@OLD_CHARACTER_SET_CLIENT */;
/*!40101 SET CHARACTER_SET_RESULTS=@OLD_CHARACTER_SET_RESULTS */;
/*!40101 SET COLLATION_CONNECTION=@OLD_COLLATION_CONNECTION */;
