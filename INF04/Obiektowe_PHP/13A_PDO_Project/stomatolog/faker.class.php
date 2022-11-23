<?php 

class Faker extends Dbh{
    public function createTables()
    {
         $stmt = $this->connect();
         $commands = ['DROP TABLE IF EXISTS pacjenci', 'DROP TABLE IF EXISTS wizyty','CREATE TABLE IF NOT EXISTS pacjenci (
                        nrPacjenta INTEGER PRIMARY KEY AUTOINCREMENT,
                        imie TEXT NOT NULL,
                        nazwisko TEXT NOT NULL,
                        ulicaNr VARCHAR (50) NOT NULL,
                        miejscowosc VARCHAR (50) NOT NULL,
                        kodPocztowy VARCHAR (6) NOT NULL,
                        nrTelefonu VARCHAR (20) NOT NULL,
                        PESEL VARCHAR (11) NOT NULL
                        
          )',
            'CREATE TABLE IF NOT EXISTS wizyty (
                    id INTEGER PRIMARY KEY AUTOINCREMENT,
                    nrPacjenta INTEGER NOT NULL,
                    dataWizyty TEXT NOT NULL,
                    godzinaWizyty TEXT NOT NULL,
                    rodzajWizyty VARCHAR (50),   
                    zab VARCHAR (3),   
                    kosztWizyty REAL,
                    FOREIGN KEY (nrPacjenta)
                    REFERENCES pacjenci(nrPacjenta) ON UPDATE CASCADE ON DELETE CASCADE   
                )'];
            // execute the sql commands to create new tables
            foreach ($commands as $command) {
                $stmt->exec($command);
            }
         
    }

    public function createFakeData()
    {
     $stmt = $this->connect();
          $commands = ["INSERT INTO pacjenci (nazwisko,imie,kodPocztowy,ulicaNr,miejscowosc, nrTelefonu, PESEL) VALUES 
            ('Zając','Tomasz','53-123','Powstańców Śl 132/7','Wrocław','60 0112223','61021298712'),
            ('Nowak','Agnieszka','43-234','Budziszyńska 12/1','Wrocław','000 897 324','60021298741'),
            ('Wrona','Bolesław','11-234','Paczkowa 2/9','Wrocław','11 9900199','77041298712'),
            ('Kalarus','Krzysztof','45-080','M.Buczka 111','Wałbrzych','70 0118223','80051208712'),
            ('Kminek','Franciszka','34-124','Pabianicka 32/9','Oleśnica','066 897 324','88042298727'),
            ('Krajewski','Kacper','52-300','Zielona 98','Wrocław','11 2340011','86021298712'),
            ('Szymczak','Barbara','54-345','Kamienna 98','Wrocław','70 9004423','89021448725'),
            ('Grabowski','Jan','12-342','Oleśnicka 90','Wrocław','066 117 324','90041233712'),
            ('Janik','Ewa','65-111','Stysia 12','Gniechowice','21 2348888','59061929465'),
            ('Małyga','Jakub','23-456','Ptysia 98/3','Wrocław','70 0112223','99111277712'),
            ('Krawczyk','Maria','45-167','Wieczysta 45/9','Wrocław','200 897 324','56021298787'),
            ('Stopa','Kasia','54-200','Kozanowska 43','Wrocław','11 2340011','61121245361'),
            ('Kaczka','Stefan','55-014','Zielona 9/23','Żerniki','73 0122287','87022398712'),
            ('Wysocki','Maciej','33-112','Pomorska 2','Wrocław','066 897 224','99021277712'),
            ('Wieczorek','Zofia','50-200','Mała 40','Tyniec M.','11 2340011','86021777787'),
            ('Kotlarska','Anna','51-113','Kamieńskiego 13/9','Małuszów','70 0145200','99021333323'),
            ('Piechota','Radosław','50-234','Obornicka 32','Wrocław','000 891 324','65021111111'),
            ('Leszczyński','Tadeusz','34-987','Pocztowa 9/6','Żerniki','71 0400119','61022543212'),
            ('Sołtys','Beata','50-120','Racławicka 12/9','Wrocław','70 0116623','99021298747'),
            ('Kogut','Marian','53-200','Biała 23','Wrocław','10 6822324','87021298712');",
          "INSERT INTO wizyty (nrPacjenta,dataWizyty,godzinaWizyty,rodzajWizyty,zab,kosztWizyty) VALUES
            (1,'2022.09.21', '12:30', 'ekstrakcja', '8GP', 220),
            (1,'2022.09.21', '13:30', 'leczenie kanałowe', '6DL', 250),
            (3,'2022.09.21', '14:30', 'plombowanie', '2DP', 180),
            (4,'2022.09.22', '9:00', 'kontrola uzębienia', NULL, 150),
            (7,'2022.09.22', '10:00', 'plombowanie', '3DP', 200),
            (9,'2022.11.31', '8:30', NULL, NULL, NULL),
            (19,'2022.11.31', '9:30', NULL, NULL, NULL),
            (6,'2022.11.31', '10:30', NULL, NULL, NULL),
            (12,'2022.12.02', '8:30', NULL, NULL, NULL),
            (1,'2022.12.04', '8:30', NULL, NULL, NULL),
            (3,'2022.12.06', '8:30', NULL, NULL, NULL)
            ;"];

        foreach ($commands as $command) {
            $stmt->exec($command);
        }
         
    }
}