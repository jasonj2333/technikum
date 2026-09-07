<!DOCTYPE html>
<html lang="pl">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Pierwsza aplikacja w PHP</title>
</head>
<body>
    <h1>Pierwsza aplikacja w PHP</h1>
    <?php 
        echo "<p>Witaj w mojej aplikacji</p>";
        //Print jest funkcją, która dodatkowo zwraca wartość typu int
        print "<h2>Tekst za pomocą print</h2>";
        $superTajneHaslo =  "123";  
    ?>
    <h2>Dalsza część strony</h2>
    <p>Lorem ipsum dolor sit amet consectetur adipisicing elit. Sunt, nam nobis deleniti nostrum eaque quia qui optio hic fugiat culpa dolore nesciunt reprehenderit et. Maxime excepturi ut natus. Quaerat, quae!</p>
    <?php 
        $imie = "Tomek";
        echo "<h4>Stronę wykonał: $imie</h4>";
        echo '<h4>Stronę wykonał: $imie</h4>';
        echo '<h4>Stronę wykonał: ' . $imie . '</h4>';
    ?>
</body>
</html>