-- phpMyAdmin SQL Dump
-- version 5.1.1
-- https://www.phpmyadmin.net/
--
-- Host: localhost:3306
-- Czas generowania: 07 Sty 2022, 13:56
-- Wersja serwera: 5.7.33
-- Wersja PHP: 7.4.19

SET SQL_MODE = "NO_AUTO_VALUE_ON_ZERO";
START TRANSACTION;
SET time_zone = "+00:00";


/*!40101 SET @OLD_CHARACTER_SET_CLIENT=@@CHARACTER_SET_CLIENT */;
/*!40101 SET @OLD_CHARACTER_SET_RESULTS=@@CHARACTER_SET_RESULTS */;
/*!40101 SET @OLD_COLLATION_CONNECTION=@@COLLATION_CONNECTION */;
/*!40101 SET NAMES utf8mb4 */;

--
-- Baza danych: `ksiegowosc`
--

-- --------------------------------------------------------

--
-- Struktura tabeli dla tabeli `firmy`
--

CREATE TABLE `firmy` (
  `id_firmy` int(11) NOT NULL,
  `nazwa_firmy` varchar(64) COLLATE utf8_polish_ci NOT NULL,
  `rodzaj_firmy` varchar(128) COLLATE utf8_polish_ci NOT NULL,
  `rodzaj_rozliczenia` varchar(128) COLLATE utf8_polish_ci NOT NULL,
  `adres_email` varchar(128) COLLATE utf8_polish_ci NOT NULL,
  `id_ksiegowego` int(11) NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8 COLLATE=utf8_polish_ci;

--
-- Zrzut danych tabeli `firmy`
--

INSERT INTO `firmy` (`id_firmy`, `nazwa_firmy`, `rodzaj_firmy`, `rodzaj_rozliczenia`, `adres_email`, `id_ksiegowego`) VALUES
(1, 'DEF', 'Spółka akcyjna', 'Ryczałt', 'def@def.com', 2),
(2, 'Lipex', 'Spółka cywilna', 'Karta podatkowa', 'lipex@lipex.pl', 5),
(3, 'Spedyszyn', 'Spółka z o. o', 'Podatek liniowy', 'spedy@szyn.pl', 3),
(4, 'PolTrans Polska', 'Spółka cywilna', 'Karta podatkowa', 'po@ltrans.xd', 1),
(5, 'brązowi', 'Fundacja', 'Podatek liniowy', 'kosmos@bst.pl', 7);

-- --------------------------------------------------------

--
-- Struktura tabeli dla tabeli `ksiegowi`
--

CREATE TABLE `ksiegowi` (
  `id_ksiegowego` int(11) NOT NULL,
  `imie` varchar(64) COLLATE utf8_polish_ci NOT NULL,
  `nazwisko` varchar(64) COLLATE utf8_polish_ci NOT NULL,
  `adres_email` varchar(64) COLLATE utf8_polish_ci NOT NULL,
  `ilosc_firm` int(11) NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8 COLLATE=utf8_polish_ci;

--
-- Zrzut danych tabeli `ksiegowi`
--

INSERT INTO `ksiegowi` (`id_ksiegowego`, `imie`, `nazwisko`, `adres_email`, `ilosc_firm`) VALUES
(1, 'Zenona', 'Sokołowska', 'z@s.pl', 5),
(2, 'Vladyslav', 'Górski', 'v@g.pl', 3),
(3, 'Kuba', 'Jabłoński', 'k@j.pl', 14),
(4, 'Filip', 'Wrona', 'f@w.pl', 16),
(5, 'Anastazja', 'Kowalczyk', 'a@k.pl', 8),
(6, 'Aniela', 'Kalinowska', 'a@k.pl', 10),
(7, 'Aneta', 'Kamińska', 'a@k.pl', 0),
(8, 'Brajan', 'Włodarczyk', 'b@w.pl', 5),
(9, 'Wanda', 'Kucharska', 'w@k.pl', 4),
(10, 'Tadeusz', 'Bąk', 't@b.pl', 11);

-- --------------------------------------------------------

--
-- Struktura tabeli dla tabeli `opinia`
--

CREATE TABLE `opinia` (
  `id_opinii` int(11) NOT NULL,
  `logo_firmy` varchar(64) COLLATE utf8_polish_ci NOT NULL,
  `nazwa_firmy` varchar(64) COLLATE utf8_polish_ci NOT NULL,
  `opinia` text COLLATE utf8_polish_ci NOT NULL,
  `ulubione` int(11) NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8 COLLATE=utf8_polish_ci;

--
-- Zrzut danych tabeli `opinia`
--

INSERT INTO `opinia` (`id_opinii`, `logo_firmy`, `nazwa_firmy`, `opinia`, `ulubione`) VALUES
(1, 'ezdamin.png', 'ezdamin.pl', '\"Księgoappka? Niesamowity system do zarządzania księgowością\"', 1),
(2, 'traintravel.png', 'TrainTravel', '\"Księgowość szybsza od Pendolino. Takiej nowości jeszcze nie było. Polecamy!\"', 1),
(3, 'harnold.png', 'zPuchy', '\"Serdecznie polecamy Księgoappkę. Dobra robota!\"', 0),
(4, 'skalka.png', 'Skałka sp. z o. o', '\"Nowoczesna księgowość, szybka obsługa. Polecamy z czystym sercem\"', 0),
(5, 'bitbit.png', 'BitBit', '\"Uwielbiamy nowe technologie, jest dla nas więc jasne, że KsięgoAPPka zdobyła nasze serca\"', 1),
(6, 'parkingmaster.png', 'ParkingMaster', '\"Zaparkowaliśmy naszą księgowość w Księgoappce i nie żałujemy. Opłaty niskie jak parkowanie w strefie A!\"', 1);

-- --------------------------------------------------------

--
-- Struktura tabeli dla tabeli `podatki`
--

CREATE TABLE `podatki` (
  `id_podatku` int(11) NOT NULL,
  `nazwa_podatku` varchar(64) COLLATE utf8_polish_ci NOT NULL,
  `wielkosc_podatku` int(10) UNSIGNED NOT NULL,
  `rodzaj_firmy` varchar(64) COLLATE utf8_polish_ci NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8 COLLATE=utf8_polish_ci;

--
-- Zrzut danych tabeli `podatki`
--

INSERT INTO `podatki` (`id_podatku`, `nazwa_podatku`, `wielkosc_podatku`, `rodzaj_firmy`) VALUES
(1, 'podatek krawczyka', 19, 'wszystkie spółki'),
(2, 'podatek dirussa', 21, 'spółki cywilne'),
(3, 'program egzamin plus', 10, 'spolki z o.o, spolki akcyjne'),
(4, 'podatek egzaminacyjny', 3, 'JDG'),
(5, 'podatek centralny', 8, 'wszystkie firmy'),
(6, 'podatek focusowy', 21, 'wszystkie spółki z wyłączeniem komandytowych'),
(7, 'podatek owocowy', 21, 'spółka akcyjna');

--
-- Indeksy dla zrzutów tabel
--

--
-- Indeksy dla tabeli `firmy`
--
ALTER TABLE `firmy`
  ADD PRIMARY KEY (`id_firmy`);

--
-- Indeksy dla tabeli `ksiegowi`
--
ALTER TABLE `ksiegowi`
  ADD PRIMARY KEY (`id_ksiegowego`);

--
-- Indeksy dla tabeli `opinia`
--
ALTER TABLE `opinia`
  ADD PRIMARY KEY (`id_opinii`);

--
-- Indeksy dla tabeli `podatki`
--
ALTER TABLE `podatki`
  ADD PRIMARY KEY (`id_podatku`);

--
-- AUTO_INCREMENT dla zrzuconych tabel
--

--
-- AUTO_INCREMENT dla tabeli `firmy`
--
ALTER TABLE `firmy`
  MODIFY `id_firmy` int(11) NOT NULL AUTO_INCREMENT, AUTO_INCREMENT=6;

--
-- AUTO_INCREMENT dla tabeli `ksiegowi`
--
ALTER TABLE `ksiegowi`
  MODIFY `id_ksiegowego` int(11) NOT NULL AUTO_INCREMENT, AUTO_INCREMENT=11;

--
-- AUTO_INCREMENT dla tabeli `opinia`
--
ALTER TABLE `opinia`
  MODIFY `id_opinii` int(11) NOT NULL AUTO_INCREMENT, AUTO_INCREMENT=7;

--
-- AUTO_INCREMENT dla tabeli `podatki`
--
ALTER TABLE `podatki`
  MODIFY `id_podatku` int(11) NOT NULL AUTO_INCREMENT, AUTO_INCREMENT=8;
COMMIT;

/*!40101 SET CHARACTER_SET_CLIENT=@OLD_CHARACTER_SET_CLIENT */;
/*!40101 SET CHARACTER_SET_RESULTS=@OLD_CHARACTER_SET_RESULTS */;
/*!40101 SET COLLATION_CONNECTION=@OLD_COLLATION_CONNECTION */;
