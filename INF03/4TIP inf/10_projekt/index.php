<!DOCTYPE html>
<html lang="pl">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Moja strona</title>
</head>
<body>
    <ol>
        <li>
            <a href="index.php?id=1">Strona główna</a>
        </li>
        <li>
            <a href="index.php?id=2">Galeria</a>
        </li>
        <li>
            <a href="index.php?id=3">Kontakt</a>
        </li>  
    </ol>
    <?php 
        if(isset($_GET['id'])) $menu = $_GET['id'];
        else $menu = 1;
    ?>
    
    <?php if($menu == 1): ?>
        <h1>Witaj na mojej stronie</h1>
        <p>Lorem ipsum dolor sit amet, consectetur adipisicing elit. Temporibus, odit error. Aliquam inventore fugiat natus neque quia est cumque similique quasi nemo, ea voluptatum nobis repudiandae consequatur praesentium at in!</p>
    <?php elseif($menu == 2): ?>
        <h1>Galeria</h1>
        <p>Lorem ipsum dolor sit, amet consectetur adipisicing elit. Reiciendis, unde, eligendi eos molestias, numquam sit eveniet culpa expedita minima aliquam qui tempore quam facilis quidem itaque soluta dicta. Exercitationem, laboriosam?</p>
    <?php elseif($menu == 3): ?>
        <h1>Kontakt</h1>
        <p>Napisz do mnie na maila tomek@wp.pl</p>
    <?php else: ?>
        <h1>Błąd 404 !!! - Nie znaleziono strony</h1>
    <?php endif; ?>
</body>
</html>