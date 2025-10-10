<!DOCTYPE html>
<html lang="pl">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Instrukcje sterujące</title>
</head>
<body>
    <h2>If .. else ...</h2>
    <?php 
        if(isset($_GET['id']))
            $menu = $_GET['id'];
        else $menu = 1;

        echo "<p>Menu</p>";
        echo "<ol>";
        echo "<li>
               <a href='index.php?id=1'> Galeria</a>
            </li>";
        echo "<li>
                <a href='index.php?id=2'> Kontakt</a>
            </li>";
        echo "<li>
                <a href='index.php?id=3'> Rejestracja</a>
            </li>";
        echo "<li>
                <a href='index.php?id=4'> Koniec</a>
            </li>";
        echo "</ol>";

        // if($menu == 1){
        //     echo "<h1>Galeria</h1>";
        //     echo "<p>Jakiś opis</p>";
        // }
    ?>

    <?php if($menu == 1): ?>
        <h1>Galeria</h1>
        <p>Zdjecia ...</p>
    <?php elseif($menu == 2): ?>
        <h1>Kontakt</h1>
        <p>Lorem ipsum dolor sit amet consectetur adipisicing elit. Quos beatae repellendus in eos, quibusdam laudantium enim! Ratione doloribus ab deleniti sed ea corporis aspernatur nam eveniet alias? At, quos ad!</p>
    <?php elseif($menu == 3): ?>
        <h1>Rejestracja</h1>
        <p>Lorem ipsum dolor sit amet consectetur adipisicing elit. Quos beatae repellendus in eos, quibusdam laudantium enim! Ratione doloribus ab deleniti sed ea corporis aspernatur nam eveniet alias? At, quos ad!</p>
    <?php elseif($menu == 4): ?>
        <h1>Dziękujemy za korzystanie z naszej strony</h1>
        <p>Do zobaczenia !!!</p>
    <?php else: ?>
        <h2>Błąd 404!! - Nie znaleziono strony</h2>
    <?php endif;?>
</body>
</html>