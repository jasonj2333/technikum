<!DOCTYPE html>
<html lang="pl">
<head>
    <meta charset="UTF-8">
    <meta http-equiv="X-UA-Compatible" content="IE=edge">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Warzywniak - Mysqli proceduralny</title>
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
                $conn = mysqli_connect($host, $user, $pass, $db) or die("Nie udało się nawiązać połączenia z bazą danych!");
                mysqli_set_charset($conn, 'utf8');
                $q = "SELECT p.nazwa, p.ilosc, p.opis, p.cena FROM produkty p, rodzaje r WHERE r.nazwa = '$category' AND p.Rodzaje_id = r.id";
                $result = mysqli_query($conn, $q);
                // if(!$conn){
                //     echo "Nie udało się nawiązać połączenia z bazą danych!";
                //     exit();
                // } else {
                //     echo "Nawiązano połączenia z bazą danych";
                // }
                
                $count_rows = mysqli_num_rows($result);
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
                    //Do rozpakowania wyników można użyć następujących funkcji
                    //$row = mysqli_fetch_row($result) //pola tablicy będą indeksowane liczbami od 0 np. $row[0];
                    //$row = mysqli_fetch_assoc($result) //uzyskamy tablicę asocjacyjną - indeksy zgodne nazwami kolumn w bazie lub z aliasami jeśli stworzymy takie w zapytaniu
                    //$row = mysqli_fetch_array($result) //tablica z podwójnymi danymi - dostępne indeksy zarówno numeryczne jak i asocjacyjne
                    //Poniższy przykład tworzy obiekt: mysqli_fetch_object($result), zamiast tablic dostajemy obiekt i za pomocą operatora -> dostajemy się do poszczególnych pól obiektu, nazwy zgodne z nazwami kolumn w bazie lub aliasami jeśli stworzymy takie w zapytaniu
                    while ($row = mysqli_fetch_row($result)) {
                        ?>
                            <tr>
                                <td><?php echo $row[0] ?></td>
                                <td><?php echo $row[1] ?></td>
                                <td><?php echo $row[2] ?></td>
                                <td><?php echo $row[3] ?> zł</td>
                            </tr>
                        <?php
                    }
                    ?>
                    </table>
                    <?php
                }
                mysqli_close($conn);
            }
        } 
        
    ?>
</body>
</html>