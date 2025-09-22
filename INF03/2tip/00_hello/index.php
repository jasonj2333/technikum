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
        echo "<p>Witaj świecie</p>";
        print "<h2>Tekst w princie</h2>";
        $superTajneHaslo = 'moje&haslo123$abc';
        echo "<h3>Moje hasło $superTajneHaslo</h3>";
        echo '<h3>Moje hasło '.$superTajneHaslo.'</h3>';
    ?>
    <h2>Dalsza część strony</h2>
    <p>Lorem ipsum dolor sit amet consectetur adipisicing elit. Nobis explicabo voluptatum nemo animi, veniam, quod fuga optio culpa sapiente nisi earum, quas dolore veritatis rem odio molestias aliquam iusto modi.</p>
    <?php 
        echo "<p>Kolejny skrypt w PHP</p>";
    ?>
</body>
</html>