<?php 
    session_start();
    if( isset($_SESSION['login']) ){
        unset($_SESSION['login']);
        session_destroy();
        header("location: index.php");
        exit;
    }else{
        header("location: zaloguj.php");
        exit;
    }

?>