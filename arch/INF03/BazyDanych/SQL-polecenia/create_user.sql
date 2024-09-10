CREATE USER 'anna'@'localhost' IDENTIFIED BY '@nna321';
CREATE USER anna; -- % konto anna łączące się z dowolnego hosta
DROP USER 'anna'@'localhost';
SELECT CURRENT_USER();
SET PASSWORD = PASSWORD('Anulka1313');
SET PASSWORD FOR 'anna'@'localhost' = PASSWORD('Anulka1313');
GRANT UPDATE ON *.* TO 'anna'@'localhost';
GRANT UPDATE ON ksiegarnia.* TO 'anna'@'localhost';
-- Po wybraniu bazy danych
GRANT UPDATE ON * TO 'anna'@'localhost';
GRANT INSERT ON ksiegarnia.ksiazki TO 'anna'@'localhost';
GRANT UPDATE (tytul), INSERT ON ksiegarnia.ksiazki TO 'anna'@'localhost';
GRANT ALL PRIVILEGES ON ksiegarnia.* TO 'anna'@'localhost';
--Dodatkowe klauzule
GRANT USAGE ON ksiegarnia.* TO Marcin WITH MAX_QUERIES_PER_HOUR 1;
--MAX_UPDATE_PER_HOUR
--MAX_CONNECTIONS_PER_HOUR
--MAX_USER_CONNECTIONS --ogranicza liczbę jednoczesnych połączeń uzyskiwanych z jednego konta
REVOKE UPDATE ON ksiegarnia.* FROM 'anna'@'localhost';
--Baza systemowa mysql
USE mysql;
SELECT * FROM user;
SHOW GRANTS FOR 'anna'@'localhost';
-- Ćwiczenia
--1. Utwórz użytkownika Janek i nadaj mu pełne prawa do bazy danych (aktualnie wybranej)
GRANT ALL ON * TO Janek IDENTIFIED BY 'Janek20';
--2. Ogranicz uprawnienia użytkownika do tworzenia użytkowników i nadawania im uprawnień
REVOKE CREATE, GRANT OPTION ON * FROM Janek;
--3. Utwórz użytkownika Michał, który będzie użytkownikiem bazy ksiegarnia i nie będzie posiadał żadnych uprawnień. Sprawdź jego uprawnienia. Sprawdź czy taki użytkownik istnieje
GRANT SELECT, INSERT on ksiegarnia.* TO Michal;