<?php 
    ##setcookie(name, value, expire, path, domain, secure, httponly);
    setcookie("pismo", "Na skróty", time()+3600*24*365*10);

    if(isset($_POST['usun'])){
        setcookie("pismo", "Na skróty", -1);
    }
    
    if(isset($_COOKIE['pismo'])){
        echo "Jesteś naszym stałym klientem";
        echo '<form action="" method="post">
            <button name="usun">Usuń cookie</button>
        </form>';
    }else{
        echo "Witaj na stronie po raz pierwszy";
    }
?>