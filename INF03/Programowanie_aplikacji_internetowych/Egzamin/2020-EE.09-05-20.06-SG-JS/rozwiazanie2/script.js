document.getElementById("pokazCene").onclick = function() {pokazCene()};

function pokazCene()
        {
            let cena = 0;
            if(document.getElementById('kro').checked) {
            cena = 25;
            }
            else if(document.getElementById('sre').checked) {
            cena = 30;
            }
            else if(document.getElementById('pol').checked) {
            cena = 40;
            }
            else if(document.getElementById('dlu').checked) {
            cena = 50;
            }

            if(cena >0) document.getElementById('wynik').innerHTML = "Cena strzyżenia: " + cena + "zł";
        }