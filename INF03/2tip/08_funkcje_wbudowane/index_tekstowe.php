<?php
$dzien = "piątek";
$tekst = "Dzisiaj mamy $dzien - piękny zimowy dzień.";
$tekst2 = 'Dzisiaj mamy $dzien - piękny zimowy dzień.';
$dlugi_tekst = <<<TX
    Lorem, ipsum dolor sit amet consectetur adipisicing elit. Totam, 
optio possimus. Molestias porro et ipsam rem qui sint facere sapiente 
praesentium cupiditate facilis voluptatem consequuntur a exercitationem, 
deserunt tenetur velit harum ducimus fugit asperiores omnis sit! Facilis 
nemo culpa veritatis ab ea accusamus voluptates architecto ut tempora. 
Neque voluptatum quaerat exercitationem ut esse suscipit perspiciatis 
veritatis dolorum minima corporis minus, ipsum doloribus? Adipisci esse 
odio numquam porro aliquid velit quis tempora perspiciatis quia, similique 
dolor possimus molestiae excepturi ut accusantium nostrum eos quisquam, 
nam dolore ex veniam? Itaque, rerum! Officia tempore assumenda excepturi 
id neque amet, in eius doloremque cum, praesentium doloribus hic totam, 
maiores quod odio omnis molestias nesciunt ea maxime sed qui veritatis 
delectus! Illo fuga odio quo at accusantium quas voluptates aliquam, 
pariatur sapiente vitae, corrupti vero perferendis qui debitis hic amet 
facilis delectus perspiciatis consequuntur officia? Labore iste repellat 
maxime harum maiores doloribus atque totam quasi vero illo exercitationem 
animi, minima omnis blanditiis tenetur! Corrupti exercitationem quis fugiat 
expedita nobis, modi nesciunt voluptatibus voluptatem blanditiis quam eligendi? 
Facere cupiditate quibusdam corrupti voluptas maiores ullam, atque quia! 
TX;
echo $tekst2;
echo nl2br($dlugi_tekst);
echo "<br>";
//Liczenie znaków
echo strlen($dzien);
echo "<br>";
echo mb_strlen($dzien);

//Fragment tekstu
echo "<br>";
echo substr($tekst, 0, 7);

//Wyszukiwanie w tekście
echo "<br>";
var_dump(strpos($tekst, "zimowy"));
echo $tekst[31];

//Zamiana fragmentów tekstu
$nowy_tekst = str_replace("zimowy", "słoneczny", $tekst);
echo "<br>".$nowy_tekst;

//Zmiana wielkości liter
echo "<br>".strtoupper("php");
echo "<br>".strtolower("HTML");
echo "<br>".mb_strtoupper($dzien);

//Usuwanie zbędnych spacji
echo "<br>";
$imie = "        Tomek       ";

echo strlen(ltrim($imie));
echo "<br>";
echo strlen(rtrim($imie));
echo "<br>";
echo strlen(trim($imie));
?>
