<!DOCTYPE html>
<html lang="pl">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Klasy i obiekty</title>
</head>
<body>
    <h1>Klasy i obiekty</h1>
    <?php 
        class Samochod{
            public string $marka;
            public string $model;

            public function jedz() : void{
                echo "<p>Samochod $this->marka $this->model jedzie</p>";
            }
        }

        $auto = new Samochod(); //obiekt, instacja klasy
        $auto->marka = "Toyota";
        $auto->model = "Corolla";
        $auto->jedz();
        
        $auto2 = new Samochod(); //obiekt, instacja klasy
        $auto2->marka = "Fiat";
        $auto2->model = "126 p";
        $auto2->jedz();

        class KontoBankowe{
            private float $saldo = 0;

            //Setter
            public function wplata(float $kwota) : void{
                if($kwota >0) $this->saldo += $kwota;
            }
            //Getter
            public function getSaldo() : float {
                return $this->saldo;
            }
        }

        $mojeKonto = new KontoBankowe();
        //$mojeKonto->saldo = 100; //tak się nie da
        $mojeKonto->wplata(-300);
        $mojeKonto->wplata(200);
        $mojeKonto->wplata(-200);
        echo $mojeKonto->getSaldo();

        class Osoba{
            private string $imie;
            private int $wiek;

            //Konstruktor - funkcje automatycznie wywoływana w momencie tworzenia obiektu
            public function __construct(string $imie, int $wiek)
            {
                $this->imie = $imie;
                $this->wiek = $wiek;
            }

            public function przedstawSie() : string{
                return "Cześć, mam na imię $this->imie i mam $this->wiek lat";
            }

            //urodziny - metoda, która zwiększa wiek o 1 i zwraca życzenia
            public function urodziny() : string{
                $this->wiek++;
                return "Wszystkiego najlepszego $this->imie";
            }
        }

        $osoba1 = new Osoba("Kamila", 17);
        $osoba2 = new Osoba("Tomek", 21);
        echo "<p>".$osoba1->przedstawSie()."</p>";
        echo "<p>".$osoba2->przedstawSie()."</p>";
        echo "<p>".$osoba2->urodziny()."</p>";
        echo "<p>".$osoba2->przedstawSie()."</p>";

    ?>
</body>
</html>