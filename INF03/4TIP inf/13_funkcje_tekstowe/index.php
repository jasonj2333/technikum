<!DOCTYPE html>
<html lang="pl">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Funkcje tekstowe</title>
</head>
<body>
    <?php 
        $tekst = <<<TX
        Lorem ipsum          dolor sit amet consectetur adipisicing elit. Totam iure non quaerat vero
        perspiciatis iusto, explicabo deserunt deleniti culpa animi voluptates suscipit ea. Iusto
        aut eveniet vitae explicabo eos possimus a ipsa ut dignissimos illo voluptate, maiores
        pariatur commodi harum aperiam iste animi consequatur, eum obcaecati. Dolores, ad
        laborum temporibus eius, quae, harum earum magnam sunt excepturi fugit quos a. Ullam quia
        eius perspiciatis sapiente eum voluptate, voluptas recusandae alias vero impedit.
        Perspiciatis beatae corrupti doloremque quibusdam sapiente voluptatum natus minus facilis
        eius. Nisi incidunt obcaecati nostrum debitis amet quaerat ullam, repellendus maiores eum
        nemo placeat odio delectus error beatae aut unde ratione, ea repudiandae quasi suscipi
        nihil omnis maxime. Est, laboriosam quo. Quis suscipit eos, consectetur est eum, iust
        ullam ut voluptas facere id quaerat sed. Hic illum veniam et adipisci dolores quis sed, quos obcaecati unde, qu
        earum inventore eaque atque asperiores officia voluptatem dignissimos quibusdam sint tenetur reprehenderit ad
        aliquam voluptatibus consectetur id? Placeat debitis, similique voluptatibus id perferendis, saepe mollitia facilis
        vero, obcaecati esse et error nulla? Provident, ratione iure non eveniet ipsa consequatur sint earum quo officia
        facere neque, reiciendis fugiat cumque nisi exercitationem ipsum aliquam animi debitis. Quis exercitationem eaque
        quaerat accusamus assumenda! Veritatis consectetur optio rerum, alias delectus tempore obcaecati, possimus itaque eos molestias quam nobis. Nihil, deleniti impedit facilis laudantium quos aliquam placeat sit eius, tempora vel praesentium voluptatum. Autem mollitia soluta enim voluptas consequatur aliquam, minus temporibus velit delectus doloremque atque perferendis dignissimos quia. Ut voluptatum cupiditate explicabo vel ipsa laudantium.

        TX;
        //echo nl2br($tekst); //zamienia \n na <br>
        echo "<br><br>";
        //echo wordwrap($tekst, 20, "<br>\n"); //zawija tekst po określonej liczbie znaków
        echo "<br><br>";
        $tekst2 = "litwo ojczyzno moja TY JESTEŚ JAK ZDROWIE";
        echo strtoupper($tekst2);
        echo "<br><br>";
        //echo strtolower($tekst2);
        echo mb_strtolower($tekst2);
        echo "<br><br>";
        echo ucfirst($tekst2);
        echo "<br><br>";
        echo ucfirst(mb_strtolower($tekst2));
        echo "<br><br>";
        echo ucwords(mb_strtolower($tekst2));
        echo "<br><br>";

        $login = " janek  ";
        $db_pass = "e99a18c428cb38d5f260853678922e03";
        $pass = md5(trim("abc123"));
        echo $pass;
        if(trim($login) == "janek" && $db_pass == $pass){
            echo "<p>Użytkownik zalogowany</p>";
        }else{
            echo "<p>Użytkownik niezalogowany</p>";
        }

        $tekst3 = "Już jutro sobota";
        $dlugosc = mb_strlen($tekst3);
        echo "<br><br>";
        echo $dlugosc;
        echo "<br>";
        echo $tekst3[1];
        echo "<br>";
        echo $tekst3[$dlugosc-1];
        echo "<br>";

        for($i=0; $i<$dlugosc; $i++){
            echo $tekst3[$i] . "-";
        }

        echo "<br>";
        foreach (mb_str_split($tekst3) as $znak) {
            echo $znak . "-";
        }
        
        echo "<br>";
        echo strstr($tekst3, "jutro");

        echo "<br>";
        $dane = "Jan Kowalski ul. Długa 23, 80-874 Gdańsk, tel. 678-890-789";
        echo strstr($dane, "tel.");
        $dane = "Jan Kowalski, ul. Długa 23, 80-874 Gdańsk, tel. 678-890-789, PESEL: 12345678901";
        echo "<br>";
        $pozycja = strpos($dane, "tel.");
        //echo $pozycja;
        echo substr($dane, $pozycja, 16);
        echo "<br>";
        echo substr($dane, -11);

        echo "<br>";
        $tablica_dane = explode(",", $dane);
        var_dump($tablica_dane);
        echo ltrim($tablica_dane[2]);

    ?>
</body>  
</html>