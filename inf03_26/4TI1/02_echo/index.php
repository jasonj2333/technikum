<!DOCTYPE html>
<html lang="pl">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Pierwsza aplikacja na PHP - komenda echo</title>
</head>
<body>
    <h1>Pierwsza aplikacja na PHP - komenda echo</h1>
    <?php 
        echo "<p>Witaj w mojej aplikacji</p>";
        //Print jest funkcją, która dodatkowo zwraca wartość typu int
        print "<h2>Tekst za pomocą print</h2>";
        $superTajneHaslo = "123";
    ?>
    <h2>Dalsza część strony</h2>
    <p>Lorem ipsum dolor sit amet consectetur, adipisicing elit. Quo, nisi iste neque ad ipsa laboriosam ea vitae temporibus voluptas dicta voluptate qui deserunt accusantium quaerat officia sit hic quisquam labore.</p>
    <?php 
        $imie = "Ania";
        $data = "2026-09-08";
        echo "<p>Stronę wykonała: $imie</p>";
        echo '<p>Stronę wykonała: $imie</p>';
        echo '<p>Stronę wykonała: ' . $imie . '</p>';
    ?>

    <p>Ostatnia aktualizacja: <?php echo $data ?></p>
    <!-- Skrótowy zapis stosowany do szybkiego wyświetlenie jakiś treści w PHP - stosowany w widokach -->
    <p>Ostatnia aktualizacja: <?= $data ?></p>
</body>
</html>