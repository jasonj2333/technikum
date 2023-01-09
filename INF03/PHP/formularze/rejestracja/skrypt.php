<?php
    if(!isset($_POST['imie'])) die('Przejdź do strony formularza');
    
    // echo"<pre>";
    // var_dump($_POST);
    // echo"</pre>";

    $name = trim($_POST['imie']);   
    $surname = trim($_POST['nazwisko']);    
    $profession = trim($_POST['zawod']);    
    $email = trim($_POST['email']);    
    $education = isset($_POST['wyksztalcenie']) ? $_POST['wyksztalcenie'] : 'brak';    
    $languages = isset($_POST['jezyki']) ? $_POST['jezyki'] : [];
    $rodo = isset($_POST['rodo']) ? $_POST['rodo'] : 'nie';
    
    $errors = [];
    if(empty($name)) $errors[] = "Pole imię musi być wypełnione";
    if(empty($surname)) $errors[] = "Pole nazwisko musi być wypełnione";
    if(empty($profession)) $errors[] = "Pole zawód musi być wypełnione";
    if(empty($email)) $errors[] = "Pole email musi być wypełnione";
    if($rodo == 'nie') $errors[] = 'Nie można przeprowadzić rejestracji bez twojej zgody na przetwarzanie danych osobowych';

    if(empty($errors)){
        //rejestracja
        echo "<p><b>Rejestracja przebiegła pomyślnie!</b></p>";
        echo "<p><b>Wprowadzone dane:</b></p>";
        echo "<p>Imię: $name</p>";
        echo "<p>Nazwisko: $surname</p>";
        echo "<p>Zawód: $profession</p>";
        echo "<p>Email: $email</p>";
        echo "<p>Wykształcenie: $education</p>";
        if(!empty($languages)){
            echo "<p>Języki obce:</p>";
            echo "<ul>";
            foreach($languages as $lang){
                echo "<li>$lang</li>";
            }
            echo "</ul>";
        }else{
            echo "<p>Brak znajomości języków</p>";
        }
        echo"<p>Zgoda na przetwarzanie danych osobowych: $rodo</p>";

    }else{
        foreach($errors as $error){
            echo "<p style='color:red'>$error</p>";
        }
        echo "<p><b>Cofnij się na stronę z formularzem i popraw błędy</b></p>";
    }

