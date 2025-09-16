const liczbaDziesietna = document.querySelector("#liczba");
const wynik = document.querySelector("#wynik");
const button = document.querySelector("button");

button.onclick = przelicz;

function przelicz(){
    let liczba10 = Number(liczbaDziesietna.value);
    let binarna = "";

    if(liczba10 == 0){
        wynik.innerHTML = "0 <sub>2</sub>";
        return;
    }

    let licznik = 0;

    while(liczba10 > 0){
        licznik++;
        binarna = (liczba10 % 2) + binarna;

        if(licznik == 4) {
            binarna = " " + binarna;
            licznik = 0;
        }
        
        liczba10 = Math.floor(liczba10 / 2);
    }
    wynik.innerHTML = binarna + "<sub>2</sub>";


    // K1: Czytaj liczba dziesiętna (L)  
    // K2: Liczba binarna (B) przypisz pusty napis "" 
    // K3: B przypisz L mod 2  
    // K4: L = L/ 2  (zaokrąglona do niższej całkowitej)  
    // K5: Jeśli L = 0 idź do K6; w przeciwnym razie idź do K3  
    // K6: Odwróć napis B tak że ostatnia cyfra staje się pierwszą itd. wypisz B  
}