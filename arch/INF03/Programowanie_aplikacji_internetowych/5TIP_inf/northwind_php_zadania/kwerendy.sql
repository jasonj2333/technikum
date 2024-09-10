--Wybierz nazwy i adresy wszystkich klientów mających siedziby we Francji lub w Hiszpanii
SELECT CompanyName, Address, Country FROM Customers WHERE Country IN ('France', 'Spain');

--Znajdź produkty, których nie ma w magazynie i które nie zostały jeszcze zamówione
SELECT ProductName FROM Products WHERE UnitsInStock = 0 AND UnitsOnOrder = 0;

--Wybierz nazwy i kraje wszystkich klientów, wyniki posortuj według kraju, a w
--ramach danego kraju nazwy firm posortuj alfabetycznie
SELECT CompanyName, Country FROM Customers ORDER BY Country, CompanyName;

-- Wybierz pięć najdroższych produktów
SELECT * FROM products ORDER BY UnitPrice DESC LIMIT 5;

-- Wybierz imiona, nazwiska oraz miasta pochodzenia klientów tak,
-- by w kolumnie były zaprezentowane w formie "osoba from miasto",
-- np. "Maria Anders from Berlin". Posortuj rekordy po nazwach miast. 
SELECT CONCAT(ContactName, ' from ', City) AS CustomerDescription
FROM Customers
ORDER BY City;

-- Policz liczbę pracowników - kolumnę wynikową nazwij "liczba_pracownikow"
SELECT COUNT (*) AS liczba_pracownikow FROM employees;

-- Wyświetl maksymalną, minimalną, średnią i sumaryczną wartość 
-- produktów, które są w magazynie.
SELECT MAX(TheValue) MAX, MIN(TheValue) MIN, AVG(TheValue) AVG, SUM(TheValue) SUM FROM (
  SELECT UnitPrice * UnitsInStock AS TheValue FROM Products WHERE UnitsInStock > 0
) AS t;

-- Wyświetl liczbę kupionych produktów z podziałem na produkty.
SELECT p.ProductID, p.ProductName, COUNT(*) FROM `Order Details` od LEFT JOIN products p ON p.ProductID = od.ProductID
GROUP BY od.ProductID;