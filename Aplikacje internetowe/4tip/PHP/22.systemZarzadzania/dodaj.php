<?php
    require_once "dbase.php";

    

    if(isset($_POST['imie'])){
        $imie = $_POST['imie'];
        $nazwisko = $_POST['nazwisko'];
        $telefon = $_POST['telefon'];
        $email = $_POST['email'];

        $query = "INSERT INTO uzytkownik VALUES('', '$imie', '$nazwisko', '$telefon', '$email');";

        $result = mysqli_query($polaczenie, $query);
        if($result){
            echo "<p>Użytkownik $imie $nazwisko został dodany do bazy</p>";
        }else{
            echo "<p>Wystąpił błąd, użytkownik nie został dodany.</p>";
        }

    }else{
        echo "<p>Błąd dostępu</p>";
    }

    echo "<p>
        <a href='index.php'>Powrót do strony głównej</a>
    </p>";
    mysqli_close($polaczenie);
