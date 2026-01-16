<!DOCTYPE html>
<html lang="pl">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Rejestracja do programu "Czyste powietrze"</title>
</head>
<body>
    <h1>Rejestracja do programu "Czyste powietrze"</h1>
    <form action="rejestracja.php" method="post">
        <div>
            <label for="imie">Podaj imię: </label>
            <input type="text" id="imie" name="imie" required>
        </div>
        <div>
            <label for="nazwisko">Podaj nazwisko: </label>
            <input type="text" id="nazwisko" name="nazwisko" required>
        </div>
        <div>
            <label for="zawod">Podaj zawód: </label>
            <input type="text" id="zawod" name="zawod" required>
        </div>
        <div>
            <label for="email">Podaj email: </label>
            <input type="email" id="email" name="email" required>
        </div>
        <div>
            <p>Wykształcenie:</p>
            <input type="radio" name="wyksztalcenie" id="wyksztalcenie1" value="podstawowe" checked>
            <label for="wyksztalcenie1">Podstawowe</label>

            <input type="radio" name="wyksztalcenie" id="wyksztalcenie2" value="srednie">
            <label for="wyksztalcenie2">Średnie</label>

            <input type="radio" name="wyksztalcenie" id="wyksztalcenie3" value="wyzsze">
            <label for="wyksztalcenie3">Wyższe</label>
        </div>
        <div>
            <p>Języki obce:</p>
            <select name="jezyki[]" id="jezyki" multiple>
                <option value="angielski">Język angielski</option>
                <option value="niemiecki">Język niemiecki</option>
                <option value="wloski">Język włoski</option>
                <option value="hiszpanski">Język hiszpański</option>
            </select>
        </div>

        <div>
            <input type="checkbox" name="rodo" id="rodo" value="tak">
            <label for="rodo">Wyrażam zgodę na przetrwarzanie danych osobowych</label>
        </div>

        <button>Wyślij</button>
        <!-- <input type="submit" value="Wyślij2"> -->
    </form>

</body>
</html>