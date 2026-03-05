<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <link rel="stylesheet" href="ksiegowosc.css">
    <title>Księgoappka | Nowoczesna księgowość</title>
</head>
<body>
    <div id="wrapper">
            <nav>
            <div class="kontener-tekst">
                <h1 id="nawigacja-ksiegoappka">księgoAPPka</h1>
                <p>Nowoczesna księgowość w Twoich rękach!</p>
            </div>
            <div class="kontener-odnosniki">
                <a href="">Strona główna</a>
                <a href="mailto:biuro@gmail.com">Oferta</a>
                <a href="kontakt.php">Kontakt</a>
            </div>
        </nav>
        <main>
            <div class="kontener-glowny">
                <div id="lewy">
                    <h1>Możesz na nas liczyć</h1>
                    <p>A my policzymy Twoje podatki. Łatwo i bez formalności. Nie
                        musisz stresować się rachunkami. Jedno kliknięcie - faktury
                        rozliczone!
                    </p>
                </div>
                <div id="prawy">
                    <img src="ksiegowosc.jpg">
                </div>
            </div>
            
            <h3>Polecają nas: </h3>
            <div class="kontener-komponenty">
                <!-- Skrypt 1 - PHP -->

            </div>
        </main>
        <div class="kontener">
            <p>Sprawdź, ile będzie kosztować Twoja księgowość!</p>
        </div>
        <footer>
            <div id="stopka-lewy">
            Rodzaj firmy
                    <select id="rodzaj_spolki">
                        <option value="cywilna">Spółka cywilna</option>
                        <option value="zoo">Spółka z o. o</option>
                        <option value="akcyjna">Spółka akcyjna</option>
                    </select>
                    Typ rozliczenia: 
                    <select id="typ_rozliczenia">
                        <option value="ryczałt">Ryczałt</option>
                        <option value="karta">Karta podatkowa</option>
                    </select>
                    <button>Sprawdź cenę</button>
                    
            </div>
            <div id="stopka-prawy">
                <p id="koszt">Koszt Twojej księgowości: </p>
                <p id="cena"></p>
                <p id="miesiecznie">lub miesięcznie: </p>
            </div>
        </footer>
    </div>
    
</body>
</html>