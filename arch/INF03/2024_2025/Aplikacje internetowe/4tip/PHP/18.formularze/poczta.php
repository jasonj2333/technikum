<?php

//var_dump($_FILES);

if(isset($_FILES['plik'])){
    move_uploaded_file($_FILES['plik']['tmp_name'], "./".$_FILES['plik']['name']);
}

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
    echo "<p>Wprowadzone dane: </p>";
    echo "<p>Imię: $name </p>";
    echo "<p>Nazwisko: $surname </p>";
    echo "<p>Zawód: $profession </p>";
    echo "<p>Email: $email </p>";
    echo "<p>Wykształcenie: $education </p>";
    if(!empty($languages)){
        echo "<p>Języki obce:</p>";
        echo "<ul>";
        foreach($languages as $lang){
            echo "<li>$lang</li>";
        }
        echo "</ul>";
    }else{
        echo "<p>Brak znajmości języków</p>";
    }
    echo "<p>Zgoda na przetwarzanie danych osobowych $rodo</p>";

}else{
    foreach($errors as $error){
        echo"<p style='color:red'>$error</p>";
    }
    echo"<p>Cofnij się do formularza i popraw błędy !!!</p>";
}