<!DOCTYPE html>
<html lang="pl-pl">
<head>
    <meta charset="UTF-8">
    <title>Cukiernia Różana</title>
    <link rel="stylesheet" href="style.css">
</head>
<body>
    <header>
        <h1>Cukiernia Różana</h1>
        
    </header>
    <main>
        <aside>
            <h1>Nasze wyroby:</h1>
            <ul>
            <!-- Skrypt 1 -->
            <?php 
                $conn = mysqli_connect("localhost", "root", "", "ja_cukiernia");
                $query = "SELECT nazwa, typ, czy_gluten FROM wyroby;";
                $result = mysqli_query($conn, $query);
                while($row = mysqli_fetch_row($result)){
                    $gluten = $row[2] ? "zawiera gluten" : "bez glutenu";
                    $typy = ["", "Ciasto", "Ciasteczka", "Oferta specjalna", "Pączek"];
                    // switch ($row[1]) {
                    //     case '1':
                    //         $typ = "Ciasto";
                    //         break;
                    //     case '2':
                    //         $typ = "Ciasteczka";
                    //         break;
                    //     case '3':
                    //         $typ = "Oferta specjalna";
                    //         break;
                    //     case '4':
                    //         $typ = "Pączek";
                    //         break;
                    //     default:
                    //         $typ = "";
                    //         break;
                    // }
                    //echo "<li>".$typ. " ".$row[0]." ".$gluten."</li>";
                    echo "<li>".$typy[$row[1]]. " ".$row[0]." ".$gluten."</li>";
                }
                mysqli_close($conn);
            ?>
            </ul>
            
        </aside>
        <article>
            
            <div id="wybierz-cukiernie">
                <h1>Witaj!</h1>
                <!-- Skrypt 2 -->
                 <?php 
                    if(isset($_POST['cukiernia'])){
                        $cukiernia = $_POST['cukiernia'];
                        echo "<div id='cukiernia_wybrana'>";
                        echo "<h1>Jesteś w cukierni $cukiernia. Jeżeli chcesz wybrać inną cukiernie, prześlij formularz jeszcze raz.</h1>";
                        echo "</div>";
                    }
                 ?>

                <h3>Wybierz cukiernię, aby wyświetlić, jakie mamy produkty!</h3>
                <form action="" method="post">
                    <!-- Skrypt 3 -->
                    <select name = "cukiernia">
                    <?php
                        $conn = mysqli_connect("localhost", "root", "", "ja_cukiernia");
                        $query = "SELECT nazwa, miasto FROM filie";
                        $result = mysqli_query($conn, $query);
                        while($row = mysqli_fetch_row($result)){
                            echo "<option value='$row[0]'>";
                            echo $row[0].", ".$row[1];
                            echo "</option>";
                        }

                        mysqli_close($conn);
                    ?>
                    </select>
                    <button type="submit">Ustaw cukiernię!</button>
                </form>
            </div>
            <div id="wyroby">
                <h2>Zobacz nasze ciasta!</h2>
                <img src="espinosa.jpg" alt="Ciasto espinosa">
                <img src="truskawkowa.jpg" alt="Truskawkowe szaleństwo">
                <img src="jezyny.jpg" alt="Jeżyny">
            </div>
        </article>
    </main>
    <footer>
        <p id="autor">Wykonał: 122321434124</p>
    </footer>
</body>
</html>