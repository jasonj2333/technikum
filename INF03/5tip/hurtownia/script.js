// ZADANIE 1 - FOR LOOP

//Przypisz elementy z html do zmiennych w kodzie
const przycisk1 = document.querySelector("#guzik1");
const przycisk2 = document.querySelector("#guzik2");
const przycisk3 = document.querySelector("#guzik3");
const wynik1 = document.querySelector("#wynik1");


// W forze generuj kolejne wartości ciągu od argumentu funkcji
function generuj(ilosc){
    let wynik = "";
    for(let i = 1; i<= ilosc; i++){
        wynik += i;
        if(i < ilosc) wynik += ", ";
    }
    wynik1.innerHTML = "Wynik: " + wynik;
}

    //przypisz wynik do wynik1


// Przypisz wykonanie funkcji do eventu = klikniecia buttona
przycisk1.onclick = function(){
    generuj(10);
}

przycisk2.onclick = function(){
    generuj(20);
}

przycisk3.onclick = function(){
    generuj(30);
}

// -----------------------------------------------------------------------------

// ZADANIE 2 - IF + INPUTY

//Przypisz elementy z html do zmiennych w kodzie
const paliwo = document.querySelector("#paliwo");
const litry = document.querySelector("#litry");
const hotDog = document.querySelector("#hot-dog");
const przycisk4 = document.querySelector("#guzik4");
const wynik2 = document.querySelector("#wynik2");

//W funkcji sprawdzamy koszt, obliczamy punkty, sprawdzamy hot-doga i wypisujemy
function oblicz(){
    let koszt = 0;

    //Sprawdzamy jakie wybrane zostało paliwo i przypisujemy koszt
    if(paliwo.value == 1){
        koszt = 5.6 * litry.value;
    }else if(paliwo.value == 2){
        koszt = 6.7 * litry.value;
    }else if(paliwo.value == 3){
        koszt = 7.8 * litry.value;
    }else{
        //Sprawdzamy i jeśli koszt jest nieprawidłowy to wyświetlamy błąd i nic więcej nie robimy
        wynik2.innerHTML = "Błąd!!";
        return;
    }
    //Obliczamy liczbę punktów
    let punkty = Math.floor(koszt / 5);
    //Sprzawdzamy czy kupił hot-doga
    if(hotDog.checked){
        punkty += 3;
    }

    //Wpisz punkty do wynik2
    wynik2.innerHTML = "Punkty: " + punkty + " pkt";
}

  
//przypisz do kliku guzika wykonanie funkcji

przycisk4.onclick = oblicz;

// -----------------------------------------------------------------------------

// ZADANIE 3 - HURTOWNIA

//Przypisz elementy z html do zmiennych w kodzie
const produkty = document.querySelectorAll(".produkt");
const ilosc = document.querySelectorAll(".ilosc");
const ceny = document.querySelectorAll(".cena");
const wynik3 = document.querySelector("#wynik3");

console.log(produkty[0]);

//Funkcja zamow
let nrZamowienia = 1;
function zamow(nr){
    alert(`Zamówienie ${nrZamowienia} - ${produkty[nr].textContent}`);
    nrZamowienia++;
}

//Funkcja usunSztuke

//Funkcja dodajSztuke

//Funkcja wpiszIlosc
function wpiszIlosc(nr){
    let iloscSzt = parseInt(prompt("Wpisz liczbę sztuk"));
    if(iloscSzt > 0){
        ilosc[nr].innerHTML = iloscSzt;
    }
}

//Funkcja wyliczSume()

    
    //W forze wylicz sumę
    

    //Zapisz wynik do komórki

    //Ustaw tło komórki


// -----------------------------------------------------------------------------
