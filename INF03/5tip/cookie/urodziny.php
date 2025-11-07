<?php 
    if(isset($_POST['urodziny'])){
        $urodziny = $_POST['urodziny'];
        setcookie("urodziny", $urodziny, time()+60*60*24*365*5);
    }else if(isset($_COOKIE['urodziny'])){
        $urodziny = $_COOKIE['urodziny'];
    }

    function sprawdzUrodziny($ur){
        $ur = strtotime($ur);
        $r = date('Y');
        $m = date('m', $ur);
        $d = date('d', $ur);
        $urWRoku = strtotime($r.'-'.$m.'-'.$d);

        if($urWRoku+60*60*24 > time()){
            $next = $r.'-'.$m.'-'.$d;
        }else{
            $next = ($r+1).'-'.$m.'-'.$d;
        }
        $zaIle = diff(strtotime($next), time())[2]+1;
        $ileLat = diff(strtotime($next), $ur)[0];
        echo "Następne urodziny masz: $next czyli za $zaIle dni, ukończysz wtedy $ileLat lat";
    }

    function diff($do, $od)
    {
        $delta = $do - $od;
        $y = floor($delta / (60 * 60 * 24* 365));
        $m = floor($delta / (60 * 60 * 24));
        $d = floor($delta / (60 * 60 * 24));
        return [$y, $m, $d];
    }
?>
<!DOCTYPE html>
<html lang="pl">
<head>
    <meta charset="UTF-8">
    <meta http-equiv="X-UA-Compatible" content="IE=edge">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Licznik odwiedzin</title>
</head>
<body>
    <?php if(!isset($urodziny)) :?>
        <form action="" method="post">
            <label for="nazw">Podaj datę urodzin</label>
            <input type="date" name="urodziny">
            <br>
            <input type="submit" value="Prześlij">
        </form>
    <?php else: ?>
        <p>Urodziłeś się: <?php echo $urodziny ?> </p>
        <p> <?php sprawdzUrodziny($urodziny); ?></p>
    <?php endif ?>
</body>
</html>