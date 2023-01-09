<!DOCTYPE html>
<html lang="pl">
<head>
    <meta charset="UTF-8">
    <meta http-equiv="X-UA-Compatible" content="IE=edge">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Rejestracja</title>
</head>
<body>
    <h1>Rejestracja do programu "Czyste powietrze"</h1>
    <form action="skrypt.php" method="post">
        <p>
            <label for="imie">Imię</label><br>
            <input type="text" name="imie" id="imie">
        </p>
        <p>
            <label for="nazwisko">Nazwisko</label><br>
            <input type="text" name="nazwisko" id="nazwisko">
        </p>
        <p>
            <label for="zawod">Zawód</label><br>
            <input type="text" name="zawod" id="zawod">
        </p>
        <p>
            <label for="email">Email</label><br>
            <input type="email" name="email" id="email">
        </p>
        <p>
            <b>Wykształcenie</b><br>
            
            <input type="radio" name="wyksztalcenie" id="wyksztalcenie1" value="podstawowe" checked><label for="wyksztalcenie1">Podstawowe</label><br>
            <input type="radio" name="wyksztalcenie" id="wyksztalcenie2" value="średnie"><label for="wyksztalcenie2">Średnie</label><br>
            <input type="radio" name="wyksztalcenie" id="wyksztalcenie3" value="wyższe"><label for="wyksztalcenie3">Wyższe</label><br>

        </p>
        <p>
            <b>Języki obce</b><br>
            <select name="jezyki[]" id="jezyki" multiple>
                <option value="j.angielski">Język angielski</option>
                <option value="j.niemiecki">Język niemiecki</option>
                <option value="j.hiszpański">Język hiszpański</option>
                <option value="j.włoski">Język włoski</option>
                <option value="j.rosyjski">Język rosyjski</option>
            </select>
        </p>

        <input type="checkbox" name="rodo" id="rodo" value="tak">
        <label for="rodo">Zgadzam się na przetwarzenie danych osobowych</label>
        <br><br>
        <input type="submit" value="Zarejestruj">
        <input type="reset" value="Wyczyść">
    </form>
</body>
</html>