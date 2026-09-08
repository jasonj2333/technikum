-- phpMyAdmin SQL Dump
-- version 5.2.1
-- https://www.phpmyadmin.net/
--
-- Host: 127.0.0.1
-- Generation Time: Wrz 19, 2025 at 12:45 PM
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
-- Database: `dataczas`
--

-- --------------------------------------------------------

--
-- Struktura tabeli dla tabeli `wydarzenia`
--

CREATE TABLE `wydarzenia` (
  `id` int(11) NOT NULL,
  `nazwa` varchar(100) NOT NULL,
  `data_wydarzenia` date DEFAULT NULL,
  `godzina_rozpoczecia` time DEFAULT NULL,
  `data_i_czas_dodania` datetime DEFAULT current_timestamp(),
  `ostatnia_aktualizacja` timestamp NOT NULL DEFAULT current_timestamp() ON UPDATE current_timestamp(),
  `rok_wydania` year(4) DEFAULT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_general_ci;

--
-- Dumping data for table `wydarzenia`
--

INSERT INTO `wydarzenia` (`id`, `nazwa`, `data_wydarzenia`, `godzina_rozpoczecia`, `data_i_czas_dodania`, `ostatnia_aktualizacja`, `rok_wydania`) VALUES
(1, 'Spotkanie zespołu', '2024-10-26', '14:30:00', '2025-09-16 11:21:25', '2025-09-16 09:21:25', '2024'),
(2, 'Prezentacja projektu', '2025-01-15', '10:00:00', '2025-09-16 11:21:25', '2025-09-16 09:21:25', '2025'),
(3, 'Warsztaty kreatywne', '2024-11-05', '09:00:00', '2025-09-16 15:01:53', '2025-09-16 13:01:53', '2024'),
(4, 'Szkolenie BHP', '2024-12-01', '11:00:00', '2025-09-16 15:01:53', '2025-09-16 13:01:53', '2024'),
(5, 'Konferencja branżowa', '2025-03-10', '08:30:00', '2025-09-16 15:01:53', '2025-09-16 13:01:53', '2025'),
(6, 'Integracja firmowa', '2025-04-20', '18:00:00', '2025-09-16 15:01:53', '2025-09-16 13:01:53', '2025'),
(7, 'Zebranie zarządu', '2025-05-02', '16:00:00', '2025-09-16 15:01:53', '2025-09-16 13:01:53', '2025'),
(8, 'Webinar marketingowy', '2025-06-12', '14:00:00', '2025-09-16 15:01:53', '2025-09-16 13:01:53', '2025'),
(9, 'Rozmowy kwalifikacyjne', '2025-07-01', '09:30:00', '2025-09-16 15:01:53', '2025-09-16 13:01:53', '2025'),
(10, 'Audyt wewnętrzny', '2025-08-08', '10:00:00', '2025-09-16 15:01:53', '2025-09-16 13:01:53', '2025'),
(11, 'Kick-off nowego projektu', '2025-09-19', '13:00:00', '2025-09-16 15:01:53', '2025-09-16 13:01:53', '2025'),
(12, 'Szkolenie z oprogramowania', '2025-10-22', '09:00:00', '2025-09-16 15:01:53', '2025-09-16 13:01:53', '2025'),
(13, 'Spotkanie z klientem', '2025-11-14', '11:30:00', '2025-09-16 15:01:53', '2025-09-16 13:01:53', '2025'),
(14, 'Debata panelowa', '2025-12-05', '17:00:00', '2025-09-16 15:01:53', '2025-09-16 13:01:53', '2025'),
(15, 'Planowanie budżetu', '2026-01-25', '10:00:00', '2025-09-16 15:01:53', '2025-09-16 13:01:53', '2026'),
(16, 'Ocena roczna', '2026-02-18', '09:00:00', '2025-09-16 15:01:53', '2025-09-16 13:01:53', '2026'),
(17, 'Dzień otwarty', '2026-03-07', '10:00:00', '2025-09-16 15:01:53', '2025-09-16 13:01:53', '2026'),
(18, 'Testy systemowe', '2026-04-10', '14:00:00', '2025-09-16 15:01:53', '2025-09-16 13:01:53', '2026'),
(19, 'Gala rocznicowa', '2026-05-28', '19:00:00', '2025-09-16 15:01:53', '2025-09-16 13:01:53', '2026'),
(20, 'Szkolenie z zarządzania projektem', '2026-06-15', '09:00:00', '2025-09-16 15:01:53', '2025-09-16 13:01:53', '2026'),
(21, 'Wewnętrzne warsztaty programistyczne', '2026-07-30', '10:00:00', '2025-09-16 15:01:53', '2025-09-16 13:01:53', '2026'),
(22, 'Burza mózgów nad nowymi pomysłami', '2026-08-22', '15:00:00', '2025-09-16 15:01:53', '2025-09-16 13:01:53', '2026');

--
-- Indeksy dla zrzutów tabel
--

--
-- Indeksy dla tabeli `wydarzenia`
--
ALTER TABLE `wydarzenia`
  ADD PRIMARY KEY (`id`);

--
-- AUTO_INCREMENT for dumped tables
--

--
-- AUTO_INCREMENT for table `wydarzenia`
--
ALTER TABLE `wydarzenia`
  MODIFY `id` int(11) NOT NULL AUTO_INCREMENT, AUTO_INCREMENT=23;
COMMIT;

/*!40101 SET CHARACTER_SET_CLIENT=@OLD_CHARACTER_SET_CLIENT */;
/*!40101 SET CHARACTER_SET_RESULTS=@OLD_CHARACTER_SET_RESULTS */;
/*!40101 SET COLLATION_CONNECTION=@OLD_COLLATION_CONNECTION */;
