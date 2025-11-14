<?php require_once 'functions.php'; ?>
<!DOCTYPE html>
<html lang="pl">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Moja strona</title>
</head>
<body>
    <?php include './layout/naglowek.php'; ?>
    <main>
        <h2>Warto wiedzieć</h2>
        <p>
            <?php 
                $tekst = "Lorem ipsum dolor sit amet consectetur adipisicing elit. Obcaecati expedita sequi molestiae accusamus explicabo atque animi tempore tenetur pariatur, molestias, ea perspiciatis illo delectus deserunt et! Quia accusantium inventore et, itaque vero pariatur consectetur natus nulla repudiandae eligendi animi veritatis neque tempore at? Assumenda fugit cum vero cumque non pariatur veritatis corporis, modi maiores. Odit minus delectus et. Unde fugiat necessitatibus corrupti suscipit esse nemo eius maxime temporibus cumque dolorem amet sequi dolorum voluptatibus enim assumenda quam iste delectus molestiae quis voluptate, tempora quidem ducimus? Laborum vero delectus nulla repudiandae perspiciatis libero consequatur maxime cupiditate, fuga saepe porro veniam sit sed numquam voluptatibus repellendus ipsa illo. Suscipit nisi ea odit harum perferendis ullam voluptatum, sequi, et illo totam reiciendis nostrum cupiditate earum deleniti id, ut quam ipsa officiis quis distinctio explicabo? Quas voluptatum quis adipisci unde est asperiores nisi magnam, ea harum fugiat nihil temporibus molestias assumenda ab, sed deserunt in reiciendis? Dolore quas deserunt sapiente ullam ipsa porro molestiae eius quae. Maxime suscipit laborum voluptates vero ullam dolore blanditiis nisi harum cum beatae quisquam itaque earum, enim expedita ex debitis sit optio? Corrupti dolorum nulla tenetur nobis consectetur! Blanditiis sit odio ad? Maiores consequuntur nisi ratione sit magni ad!";
                for($i = 0; $i < 5; $i++){
                    echo tnij($tekst, 150);
                    echo "<br>";
                    echo "<a href='artykul.php?id=$i'>Czytaj więcej >>> </a>";
                    echo "<hr>";
                }
                
            ?>
        </p>
    </main>
    <aside>
        <?php 
            include 'reklama.php';
        ?>
    </aside>
    <?php include './layout/stopka.php'; ?>
</body>
</html>