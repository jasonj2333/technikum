<!DOCTYPE html>
<html lang="pl">

<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Dzień tygodnia</title>
</head>

<body>
    <h1>Dzień tygodnia</h1>
    <form action="" method="post">
        <label for="day">Podaj nr dnia tygodnia (1-7)</label>
        <input type="number" name="day">
        <input type="submit" value="Sprawdź">
    </form>

    <?php
    if (isset($_POST['day'])) {
        $day = $_POST['day'];
        echo "<p>Dzień $day - ";
        switch ($day) {
            case 1:
                echo "Poniedziałek";
                break;
            case 2:
                echo "Wtorek";
                break;
            case 3:
                echo "Środa";
                break;
            case 4:
                echo "Czwartek";
                break;
            case 5:
                echo "Piątek";
                break;
            case 6:
            case 7:
                echo "Weekend";
                break;
            default:
                echo "Nie ma takiego dnia";
                break;
        }
        echo "</p>";
        //operator warunkowy
        echo ($day == 7) ? "Ale niestety jutro trzeba iść do pracy" : "";
    }

    $x = -11;
    $wynik = ($x < 0) ? "ujemna" : "dodatnia";
    echo $wynik;
    ?>

</body>

</html>