<!DOCTYPE html>
<html lang="pl">
<head>
    <meta charset="UTF-8">
    <meta http-equiv="X-UA-Compatible" content="IE=edge">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Warzywniak - Mysqli obiektowy</title>
    <link rel="stylesheet" href="style.css">
</head>
<body>
    <form action="" method="post">
        <label>Podaj rodzaj produktu</label>
        <input type="text" name="rodzaj">
        <input type="submit" value="Wyszukaj">
        <!-- <button>Szukaj</button> -->
    </form>
    <?php
        if (isset($_POST['rodzaj'])) {
            if(empty($_POST['rodzaj'])){
                echo "Nie wybrano rodzaju produktu";
            } else {
                require_once "dbconnect.php";
                $category = $_POST['rodzaj'];
                //Wykorzystanie własne zdefiniowanej funkcji do nawiązywania połączenia z bazą danych
                $conn = dbconnect($host, $user, $pass, $db);
                // alternatywnie
                //$conn = new mysqli($host, $user, $pass, $db);
                $q = "SELECT p.nazwa, p.ilosc, p.opis, p.cena FROM produkty p, rodzaje r WHERE r.nazwa = '$category' AND p.Rodzaje_id = r.id";
                $result = $conn->query($q);
                $count_rows = $result->num_rows;
                if($count_rows == 0){
                    echo "Nie znaleziono produktów w podanej kategorii";
                }else{
                    echo "<h1>Produkty w kategorii ". $category . "</h1>";
                    echo "<p>Liczba znalezionych produktów w kategorii: $count_rows</p>";
                    ?>
                    <table>
                        <tr>
                            <th>Nazwa produktu</th>
                            <th>Ilość</th>
                            <th>Opis</th>
                            <th>Cena</th>
                        </tr>
                    
                    <?php
                    //Do rozpakowania wyników można użyć następujących metod
                    //$row = $result->fetch_row() //pola tablicy będą indeksowane liczbami od 0 np. $row[0];
                    //$row = $result->fetch_assoc() //uzyskamy tablicę asocjacyjną - indeksy zgodne nazwami kolumn w bazie lub z aliasami jeśli stworzymy takie w zapytaniu
                    //$row = $result->fetch_array() //tablica z podwójnymi danymi - dostępne indeksy zarówno numeryczne jak i asocjacyjne
                    //Poniższy przykład tworzy obiekt: $row = $result->fetch_object(), zamiast tablic dostajemy obiekt i za pomocą operatora -> dostajemy się do poszczególnych pól obiektu, nazwy zgodne z nazwami kolumn w bazie lub aliasami jeśli stworzymy takie w zapytaniu
                    while ($row = $result->fetch_object()) {
                        ?>
                            <tr>
                                <td><?php echo $row->nazwa ?></td>
                                <td><?php echo $row->ilosc ?></td>
                                <td><?php echo $row->opis ?></td>
                                <td><?php echo $row->cena ?> zł</td>
                            </tr>
                        <?php
                    }
                    $result->free_result();
                    ?>
                    </table>
                    <?php
                }
                $conn->close();
            }
        } 
        
    ?>
</body>
</html>