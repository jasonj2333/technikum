<?php

//var_dump($_POST);
//var_dump($_GET);
if(!isset($_POST['imie'])){
    die("Błąd. Przejdź do strony z formularzem");
}

$name = trim($_POST['imie']);
$surname = trim($_POST['nazwisko']);
$profession = trim($_POST['zawod']);
$email = trim($_POST['email']);
$education = $_POST['wyksztalcenie'];
//$languages = $_POST['jezyki'];
$languages = isset($_POST['jezyki']) ? $_POST['jezyki'] : [];
$rodo = isset($_POST['rodo']) ? $_POST['rodo'] : "nie";

$errors = [];

if(empty($name)) $errors[] = "Pole imię musi być wypełnione";
if(mb_strlen($surname) < 3) $errors[] = "Pole nazwisko musi mieć minimum 3 znaki";
if(mb_strlen($profession) < 5) $errors[] = "Pole zawód musi mieć minimum 5 znaków";
if(mb_strlen($email) < 6) $errors[] = "Pole email musi mieć minimum 6 znaków";
if($rodo == "nie") $errors[] = "Pole RODO musi być zaznaczone";

if(empty($errors)){
    echo "<p>Rejestracja przebiegła pomyślnie</p>";
    echo "<p>Wprowadzone dane:</p>";
    echo "<p>Imię: $name</p>";
    echo "<p>Nazwisko: $surname</p>";
    echo "<p>Zawód: $profession</p>";
    echo "<p>Email: $email</p>";
    echo "<p>Wykształcenie: $education</p>";
    if(!empty($languages)){
        echo "<p>Języki obce</p>";
        echo "<ul>";
        foreach($languages as $lang){
            echo "<li>$lang</li>";
        }
        echo "</ul>";
    }else{
        echo "<p>Brak znajomości języków</p>";
    }
    echo "<p>Zgoda na przetwarzanie danych osobowych: $rodo</p>";

}else{
    foreach($errors as  $error){
        echo "<p style='color:red'>$error</p>";
    }
    echo "<p>Cofnij się do formularza i popraw błędy!!!</p>";
}