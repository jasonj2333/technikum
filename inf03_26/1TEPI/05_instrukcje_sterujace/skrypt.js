// == - porównania wartości
// === - porównanie typów i wartości
// >, <, >=, <=, != (różne)

let wiek = 25;

if(wiek >= 18){
    document.writeln("Jesteś pełnoletni");
}else{
    document.writeln("Jesteś nieletni");
}

let kolor = "czerwony";

if(kolor == "zielony"){
    console.log("Światło zielone - idź");
}
else if(kolor == "żółty"){
    console.log("Światło żółte - przygotuj się");
}
else if(kolor == "czerwony"){
    console.log("Światło czerwone - stój");
}
else{
    console.log("Nie ma takiego światła");
}

const wpis = prompt("Ile masz punktów");
if(wpis == ''){
    console.log("Nic nie wpisałeś");
}
else if(wpis === null){
    console.log("Anulowałeś operacje");
}
else{
    const punkty = Number(wpis);
    if(punkty >= 50){
        console.log("Zdałeś");
    }else{
        console.log("Nie zdałeś");
    }
}

let ocena = prompt("Podaj ocenę od 1 do 6");
ocena = Number(ocena);

if(ocena == 1){
    console.log("Ocena niedostateczny");
}
else if(ocena == 2){
    console.log("Ocena dopuszczający");
}
else if(ocena == 3){
    console.log("Ocena dostateczny");
}
else if(ocena == 4){
    console.log("Ocena dobry");
}
else if(ocena == 5){
    console.log("Ocena bardzo dobry");
}
else if(ocena == 6){
    console.log("Ocena celujący");
}
else{
    console.log("Nieznana ocena");
}