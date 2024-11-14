<?php

//var_dump($_POST);

if(!isset($_POST['imie'])) die('Błąd. Przejdź do strony z formularzem');

$name = $_POST['imie'];
$surname = $_POST['nazwisko'];
$profession = $_POST['zawod'];
$email = $_POST['email'];
$education = $_POST['wyksztalcenie'];
$languages = isset($_POST['jezyki']) ? $_POST['jezyki'] : [];
$rodo = isset($_POST['rodo']) ? $_POST['rodo'] : "nie";

$errors = [];
if(empty($name)) $errors[] = "Pole imię musi być wypełnione";
if(empty($surname)) $errors[] = "Pole nazwisko musi być wypełnione";
if(empty($profession)) $errors[] = "Pole zawód musi być wypełnione";
if(empty($email)) $errors[] = "Pole email musi być wypełnione";
if($rodo == 'nie') $errors[] = "Pole rodo musi być zaznaczone";

if(empty($errors)){
    echo "<p>Rejestracja przebiegła pomyślnie.</p>";
}else{
    foreach($errors as $error){
        echo"<p style='color:red'>$error</p>";
    }
    echo"<p>Cofnij się do formularza i popraw błędy !!!</p>";
}