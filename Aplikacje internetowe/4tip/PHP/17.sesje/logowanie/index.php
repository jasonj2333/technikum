<?php 
    $imie = "Tomek";
?>
<!DOCTYPE html>
<html lang="pl">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Strona główna</title>
</head>
<body>
    <?php if(!isset($imie)): ?>
        <h1>Witaj nieznajomy</h1>
        <p>Większość informacji na naszej stronie dostępnych jest dla zalogowanych użytkowników - <a href="zaloguj.php">Zaloguj się!!</a></p>
    <?php else: ?>
        <h1>Witaj <?php echo $imie ?> </h1>
        <p>Jesteś w strefie dla zalogowanych użytkowników, przed opuszczeniem strony   - <a href="wyloguj.php">Wyloguj się!!</a></p>
    <?php endif; ?>
</body>
</html>