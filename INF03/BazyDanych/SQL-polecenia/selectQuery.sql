--WHERE - operatory logiczne
SELECT productid, productname, supplierid, unitprice FROM
products WHERE (productname LIKE 'T%' OR productid = 46)
AND unitprice > 11.00;

SELECT productid, productname, supplierid, unitprice FROM
products WHERE productname LIKE 'T%' OR productid = 46
AND unitprice > 11.00;

SELECT productname, unitprice
FROM products
WHERE unitprice BETWEEN 10 AND 20

--WHERE - lista wartości
SELECT FirstName FROM Employees WHERE country IN ('USA', 'UK')

--Wybierz nazwy i adresy wszystkich klientów mających siedziby we Francji lub w Hiszpanii
SELECT CompanyName, Address, Country FROM Customers WHERE Country IN ('France', 'Spain');
--Wybierz nazwy i ceny produktów o cenie jednostkowej pomiędzy 20.00 a 30.00
SELECT ProductName, UnitPrice FROM Products WHERE UnitPrice BETWEEN 20 AND 30; 
--Wyszukaj informacje o produktach o cenach mniejszych niż 10 lub większych niż 20
SELECT ProductName, UnitPrice FROM Products WHERE UnitPrice < 10 OR UnitPrice > 20;
SELECT ProductName, UnitPrice FROM Products WHERE UnitPrice NOT BETWEEN 10 AND 20; 
--Znajdź produkty, których nie ma w magazynie i które nie zostały jeszcze zamówione
SELECT ProductName FROM Products WHERE UnitsInStock = 0 AND UnitsOnOrder = 0;

--WHERE - wyszukiwanie wartości NULL
SELECT CompanyName, fax
FROM suppliers WHERE fax IS NULL

--Napisz instrukcję select tak aby wybrać numer zlecenia, datę zamówienia,
--numer klienta dla wszystkich niezrealizowanych jeszcze zleceń, dla których
--krajem odbiorcy jest Argentyna
SELECT OrderID, OrderDate, CustomerID FROM Orders WHERE ShipCountry = 'Argentina' AND ShippedDate IS NULL

--Sortowanie - ORDER BY
SELECT productname, unitprice
FROM products
ORDER BY unitprice;

SELECT productname, unitprice
FROM products
ORDER BY unitprice DESC;

--Sortowanie - kilka kolumn
SELECT productid, productname, categoryid, unitprice
FROM products
ORDER BY categoryid, unitprice DESC

--Wybierz nazwy i kraje wszystkich klientów, wyniki posortuj według kraju, a w
--ramach danego kraju nazwy firm posortuj alfabetycznie
SELECT CompanyName, Country FROM Customers ORDER BY Country, CompanyName;
--Wybierz informację o produktach (kategoria, nazwa, cena), produkty posortuj
--wg kategorii a w kategoriach malejąco wg ceny
SELECT CategoryID, ProductName, UnitPrice FROM Products ORDER BY CategoryID, UnitPrice DESC;
--Wybierz nazwy i kraje wszystkich klientów mających siedziby w Japonii
--(Japan) lub we Włoszech (Italy), wyniki posortuj tak jak w pkt 1
SELECT CompanyName, Country FROM Customers WHERE Country IN ('Japan', 'Italy') ORDER BY Country, CompanyName;

---------------------------------------------------------------------------------------
--Eliminowanie duplikatów - DISTINCT
SELECT country
FROM suppliers ORDER BY country;
SELECT DISTINCT country
FROM suppliers ORDER BY country;

--1 .Znajdź państwa, z których pochodzą pracownicy

--2. Znajdź różne docelowe kraje i miasta wysyłki zamówień. Wyniki posortuj tak,
--jak chciałbyś / chciałabyś je widzieć na raporcie.

--Nadawanie nazw kolumnom - AS
SELECT firstname AS First, lastname AS Last,
employeeid AS 'Employee ID:'
FROM employees

--LIMIT
SELECT * FROM Orders LIMIT 5;

-- 1. Wybierz pięć najdroższych produktów

-- 2. Wybierz pięć najtańszych produktów

-- 3. Wybierz trzy produkty czekoladowe (choco), których jest najwięcej wmagazynie

-- FUNKCJE AGREGUJĄCE - COUNT -----------------------------------------------
SELECT COUNT (*) FROM employees;
SELECT COUNT(Region) FROM employees;
SELECT COUNT (*) AS liczba_pracownikowFROM employees;

-- 1. Podaj liczbę pracowników z UK.

-- 2. Podaj liczbę produktów o cenach mniejszych niż 10$ lub większych niż 20$

-- 3. Podaj liczbę zakupionych towarów, na które udzielono zniżki.

-- 4. Podaj dwie liczby dostawców: wszystkich, oraz tych, którzy podali
-- region swojej działalności. Wynik uzyskaj jednym zapytaniem.

-- FUNKCJE AGREGUJĄCE - AVG -----------------------------------------------
SELECT AVG(unitprice) FROM products;
SELECT COUNT(*), AVG(unitprice) FROM products;

-- 1. Wyświetl średnią przyznaną zniżkę.

-- 2. Wyświetl średnią przyznaną zniżkę dla pozycji zamówień, dla których ją przyznano.

-- 3. Wyświetl średnią liczbę zamawianych sztuk w jednej pozycji zamówienia.

-- 4. Wyświetl średnią cenę produktów z kategorii ID=2.

-- 5. Wyświetl liczbę produktów o cenie powyżej średniej.