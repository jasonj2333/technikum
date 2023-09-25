document.write("<h2>Wybory</h2>");
let wiek = prompt("Ile masz lat?");

if(wiek >= 18){
    document.write("<p>Możesz głosować</p>");
}else{
    let roznica = 18 - wiek;
    document.write(`<p>Zapraszam za ${roznica} lat</p>`); 
}