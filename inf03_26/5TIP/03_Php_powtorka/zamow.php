<!DOCTYPE html>
<html lang="pl">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Podsumowanie zamówienia</title>
</head>
<body>
    <h1>Podsumowanie zamówienia</h1>
    <?php 
        if(isset($_POST['imie'])){
            $imie = $_POST['imie'];
            $nazwisko = $_POST['nazwisko'];
            $adres = htmlspecialchars($_POST['adres']); //zamiana znaków < na &lt; > na &gt;
            $wysylka = $_POST['wysylka'];
            $produkty = isset($_POST['produkty']) ? $_POST['produkty'] : [];
            echo "<p>Imię: $imie </p>";
            echo "<p>Nazwisko: $nazwisko </p>";
            echo "<p>Adres: $adres </p>";
            $typ_wysylki = [
                'p' => 'paczkomat',
                'k' => 'kurier',
                'pp' => 'Poczta Polska',
            ];
            echo "<p>Wysyłka: ".$typ_wysylki[$wysylka]." </p>";
            //var_dump($produkty);
            echo "<h2>Zamówione produkty</h2>";
            echo "<ul>";
            foreach($produkty as $produkt){
                echo "<li>$produkt</li>";
            }
            echo "</ul>";
        }else{
            echo "<h2>Błąd. Przejdź na stronę zamówienia</h2>";
        }
    ?>
    <h2>Historia zamówień</h2>
    <ul>
        <li>Zamówienie nr 145 z dn. 5.09.2026 - <a href="historia.php?id=145">zobacz</a> </li>
        <li>Zamówienie nr 221 z dn. 12.09.2026 - <a href="historia.php?id=221">zobacz</a></li>
        <li>Zamówienie nr 378 z dn. 17.09.2026 - <a href="historia.php?id=378">zobacz</a></li>
    </ul>
</body>
</html>