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

--Znajdź państwa, z których pochodzą pracownicy
SELECT DISTINCT Country FROM Customers;
--Znajdź różne docelowe kraje i miasta wysyłki zamówień. Wyniki posortuj tak,
--jak chciałbyś / chciałabyś je widzieć na raporcie.
SELECT DISTINCT ShipCountry, ShipCity FROM Orders ORDER BY ShipCountry, ShipCity;
-----------------------------------------
--Nadawanie nazw kolumnom - AS
SELECT firstname AS First, lastname AS Last,
employeeid AS 'Employee ID:'
FROM employees
------------------------------------------
--LIMIT
SELECT * FROM Orders LIMIT 5;

-- Wybierz pięć najdroższych produktów
SELECT * FROM products ORDER BY UnitPrice DESC LIMIT 5;
-- Wybierz pięć najtańszych produktów
SELECT * FROM products ORDER BY UnitPrice LIMIT 5;
-- Wybierz trzy produkty czekoladowe (choco), których jest najwięcej wmagazynie
SELECT * FROM products WHERE ProductName LIKE '%choco%' ORDER BY UnitsInStock DESC LIMIT 3;
------------------------------------------
-- KOLUMNY WYLICZANE
SELECT OrderId, UnitPrice,
UnitPrice * 1.05 AS NewUnitPrice
FROM `Order Details`

SELECT CONCAT(firstname, ' ', lastname) AS imie_nazwisko
FROM Employees

-- Wybierz wyjściowe ceny produktów, poziom zniżki i ceny 
-- uwzględniające zniżkę dla wszystkich pozycji zamówień, 
-- którym zniżka została przyznana.
-- UWAGA zniżka Discount została podana w procentach
SELECT ProductID, UnitPrice, Discount, UnitPrice * (1-Discount/100) AS FinalPrice
FROM `Order Details`
WHERE Discount > 0;

-- Wybierz imiona, nazwiska oraz miasta pochodzenia klientów tak,
-- by w kolumnie były zaprezentowane w formie "osoba from miasto",
-- np. "Maria Anders from Berlin". Posortuj rekordy po nazwach miast. 
SELECT CONCAT(ContactName, ' from ', City) AS CustomerDescription
FROM Customers
ORDER BY City;

-- FUNKCJE AGREGUJĄCE - COUNT -----------------------------------------------
SELECT COUNT (*) FROM employees;
SELECT COUNT(Region) FROM employees;
SELECT COUNT (*) AS liczba_pracownikow FROM employees;

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

-- Wyświetl średnią przyznaną zniżkę.
SELECT AVG(Discount) AvgDiscount FROM `Order Details`;

-- Wyświetl średnią przyznaną zniżkę 
-- dla pozycji zamówień, dla których ją przyznano.
SELECT AVG(Discount) AvgDiscount 
FROM `Order Details`
WHERE Discount > 0;

-- Wyświetl średnią liczbę zamawianych sztuk 
-- w jednej pozycji zamówienia.
SELECT AVG(Quantity) FROM `Order Details`;

-- Wyświetl średnią cenę produktów z kategorii ID=2.
SELECT AVG(UnitPrice) FROM Products WHERE CategoryID = 2;

-- Wyświetl liczbę produktów o cenie powyżej średniej.
SELECT AVG(UnitPrice) FROM Products;
SELECT COUNT(*) FROM Products WHERE UnitPrice > 28.8663;

SELECT COUNT(*) FROM Products WHERE UnitPrice > (SELECT AVG(UnitPrice) FROM Products);


-- FUNKCJE AGREGUJĄCE - MIN, MAX, SUM -----------------------------------------------

-- 1. Podaj liczbę sprzedanych produktów (jednostek).
-- 2. Wyświetl informacje o najdroższym produkcie.
-- 3. Podaj maksymalną cenę produktu dla produktów o cenach poniżej 20$
-- 4. Podaj maksymalną i minimalną i średnią cenę produktu dla produktów sprzedawanych w butelkach ('bottle')
-- 5. Podaj sumaryczną wartość zamówienia o numerze 10250. Uwzględnij zniżki!

-- Podaj liczbę sprzedanych produktów (jednostek).
SELECT SUM(Quantity) FROM `Order Details`;

-- Wyświetl informacje o najdroższym produkcie.
SELECT MAX(UnitPrice) FROM Products;
SELECT * FROM Products WHERE UnitPrice = 263.5;

-- Podaj maksymalną cenę produktu dla produktów 
-- o cenach poniżej 20$
SELECT MAX(UnitPrice) FROM Products WHERE UnitPrice < 20;

-- Podaj maksymalną i minimalną i średnią cenę produktu 
-- dla produktów o produktach sprzedawanych w butelkach (‘bottle’)
SELECT MAX(UnitPrice), MIN(UnitPrice), AVG(UnitPrice)
FROM Products
WHERE QuantityPerUnit LIKE '%bottle%';

-- Podaj wartość zamówienia o numerze 10250
SELECT SUM(UnitPrice * (1-Discount/100)) FROM `Order Details`
WHERE OrderID = 10250;

-- PODZAPYTANIA  -----------------------------------------------
-- Podzapytanie jako warunek
SELECT * FROM Products WHERE CategoryID = (
    SELECT CategoryID FROM Categories WHERE CategoryName = 'Seafood'
); 
-- Podzapytanie jako tabela tymczasowa ("widok")
SELECT MIN(FinalPrice), MAX(FinalPrice), AVG(FinalPrice) FROM (
    SELECT UnitPrice * (1-Discount/100) AS FinalPrice
    FROM `Order Details`
) AS temp_table;

-- 1. Wybierz nazwy oraz informacje o stanie magazynowym dla produktów dostarczanych przez firmę 'Tokyo Traders'
-- 2. Wyświetl informacje o najdroższym produkcie.
-- 3. Wyświetl liczbę produktów o cenie powyżej średniej.
-- 4. Podaj liczbę sprzedanych produktów z kategorii Seafood.
-- 5. Wyświetl maksymalną, minimalną, średnią i sumaryczną wartość
-- produktów, które są w magazynie.

-- Wybierz nazwy oraz informacje o stanie magazynowym dla 
-- produktów dostarczanych przez firmę 'Tokyo Traders'
SELECT ProductName, UnitsInStock FROM Products
WHERE SupplierID = (
  SELECT SupplierID FROM Suppliers WHERE CompanyName = 'Tokyo Traders'
);

-- Wyświetl informacje o najdroższym produkcie.
SELECT * FROM Products WHERE UnitPrice = (SELECT MAX(UnitPrice) FROM Products);

-- Wyświetl liczbę produktów o cenie powyżej średniej.
SELECT COUNT(*) FROM Products WHERE UnitPrice > (
  SELECT AVG(UnitPrice) FROM Products
);

-- Podaj liczbę sprzedanych produktów z kategorii Seafood.
SELECT SUM(Quantity) FROM `Order Details` WHERE ProductID IN (
  SELECT ProductID FROM Products WHERE CategoryID IN (
    SELECT CategoryID FROM Categories WHERE CategoryName = 'Seafood'
  )
);

-- Wyświetl maksymalną, minimalną, średnią i sumaryczną wartość 
-- produktów, które są w magazynie.
SELECT MAX(TheValue) MAX, MIN(TheValue) MIN, AVG(TheValue) AVG, SUM(TheValue) SUM FROM (
  SELECT UnitPrice * UnitsInStock AS TheValue FROM Products WHERE UnitsInStock > 0
) AS t;

-- GRUPOWANIE ---------------------------------------------------------------
SELECT OrderID, SUM(Quantity) AS total_quantity
FROM `Order Details`
GROUP BY OrderID;

SELECT ProductID, SUM(Quantity) AS total_quantity
FROM `Order Details`
GROUP BY ProductID

-- WHERE filtruje rekordy przed wykonaniem grupowania
SELECT ProductID,
SUM(Quantity) AS total_quantity
FROM `Order Details`
WHERE ProductId >= 2
GROUP BY ProductID

-- 1. Wyświetl liczbę pracowników z poszczególnych krajów.
-- 2. Wyświetl liczbę kupionych produktów z podziałem na produkty.
-- 3. Wyświetl minimalną, maksymalną i średnią cenę zakupu produktów z podziałem na produkty.
-- 4. Wybierz 30 zamówień zawierających najdrożej sprzedane produkty.
-- 5. Podaj liczbę przesyłek dostarczonych przez poszczególnych przewoźników z podziałem na miasta.
-- 6. Podaj liczbę i sumaryczny koszt przesyłki dla zamówień dostarczanych przez poszczególnych spedytorów (przewoźników).
-- 7. Który ze spedytorów był najaktywniejszy w 1997 roku?

-- Wyświetl liczbę pracowników z poszczególnych krajów.
SELECT Country, COUNT(*) FROM Employees GROUP BY Country;

-- Wyświetl liczbę kupionych produktów z podziałem na produkty.
SELECT ProductID, COUNT(*) FROM `Order Details`
GROUP BY ProductID;

-- Wyświetl minimalną, maksymalną i średnią cenę zakupu produktów
-- z podziałem na produkty.
SELECT ProductID, MIN(UnitPrice) MIN, MAX(UnitPrice) MAX, AVG(UnitPrice) AVG
FROM `Order Details`
GROUP BY ProductID;

-- Wybierz 30 zamówień zawierających najdrożej sprzedane produkty.
SELECT OrderID, MAX(UnitPrice) MAX
FROM `Order Details`
GROUP BY OrderID
ORDER BY MAX DESC LIMIT 30;

-- Podaj liczbę przesyłek dostarczonych przez poszczególnych 
-- przewoźników z podziałem na miasta.
SELECT ShipVia, ShipCity, COUNT(*)
FROM Orders
GROUP BY ShipVia, ShipCity
ORDER BY ShipCity;

-- Podaj liczbę i sumaryczny koszt przesyłki dla zamówień 
-- dostarczanych przez poszczególnych spedytorów (przewoźników).
SELECT ShipVia, COUNT(*), SUM(Freight)
FROM `Orders` 
GROUP BY ShipVia;

-- Który z spedytorów był najaktywniejszy w 1997 roku?
SELECT ShipVia, COUNT(*) HandledOrders
FROM Orders 
WHERE OrderDate BETWEEN '1997-01-01' AND '1997-12-31'
GROUP BY ShipVia
ORDER BY HandledOrders DESC LIMIT 1;

-- Grupowanie z HAVING------------------
-- HAVING dodaje warunek na kolumny
-- zawierające wynik agregacji (po grupowaniu)
SELECT ProductID,
SUM(Quantity) AS total_quantity
FROM `Order Details`
GROUP BY ProductID
HAVING SUM(Quantity) < 40;

-- 1. Wyświetl listę identyfikatorów produktów i liczbę sprzedanych sztuk dla tych
-- produktów, których zamówiono ponad 1200 jednostek.
-- 2. Wyświetl zamówienia, w których zamówiono ponad 5 różnych produktów.
-- 3. Wyświetl identyfikatory klientów dla których w 1998 roku zrealizowano
-- więcej niż 8 zamówień (wyniki posortuj malejąco wg łącznej kwoty za
-- dostarczenie zamówień dla każdego z klientów)
-- 4. Wyświetl dane klientów dla których w 1998 roku zrealizowano więcej niż 8
-- zamówień.
-- 5. Podaj liczbę zamówionych jednostek produktów dla produktów z
-- kategorii Seafood i których zamówiono więcej niż 800

-- Wyświetl listę identyfikatorów produktów i liczbę sprzedanych
-- sztuk dla tych produktów, których zamówiono ponad 1200 jednostek.
SELECT ProductID, SUM(Quantity)
FROM `Order Details`
GROUP BY ProductID
HAVING SUM(Quantity) > 1200
ORDER BY SUM(Quantity) DESC;

-- Wyświetl zamówienia, w których zamówiono ponad 5 różnych produktów.
SELECT OrderID, COUNT(*)
FROM `Order Details`
GROUP BY OrderID
HAVING COUNT(*) > 5;

-- Wyświetl identyfikatory klientów dla których w 1998 roku zrealizowano więcej 
-- niż 8 zamówień (wyniki posortuj malejąco wg łącznej kwoty za 
-- dostarczenie zamówień dla każdego z klientów)
SELECT CustomerID, COUNT(*), SUM(Freight)
FROM Orders
WHERE OrderDate BETWEEN '1998-01-01' AND '1998-12-31'
GROUP BY CustomerID
HAVING COUNT(*) > 8
ORDER BY SUM(Freight) DESC;

-- Wyświetl dane klientów dla których w 1998 roku zrealizowano 
-- więcej niż 8 zamówień.
SELECT * FROM Customers WHERE CustomerID IN(
	SELECT CustomerID
	FROM Orders
	WHERE OrderDate BETWEEN '1998-01-01' AND '1998-12-31'
	GROUP BY CustomerID
	HAVING COUNT(*) > 8
);

-- Podaj liczbę zamówionych jednostek produktów dla produktów 
-- z kategorii Seafood i których zamówiono więcej niż 800 
SELECT ProductID, SUM(Quantity)
FROM `Order Details`
WHERE ProductID IN (
  SELECT ProductID FROM Products WHERE CategoryID = (
    SELECT CategoryID FROM Categories WHERE CategoryName = 'Seafood'
  )
)
GROUP BY ProductID
HAVING SUM(Quantity) > 800;