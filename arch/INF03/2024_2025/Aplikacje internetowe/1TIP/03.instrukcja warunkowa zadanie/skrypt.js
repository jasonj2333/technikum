document.write("<h2>Wybory</h2>");

let wiek = prompt("Ile masz lat?");

if(wiek >= 18){
    document.write("<p>Możesz głosować w wyborach</p>");
}else{
    document.write("<p>Jesteś jeszcze za młody</p>");
    let roznica = 18 - wiek; // 18 - '14'
    document.write("<p>Zapraszam " + roznica + " lat</p>");
    //document.write(`<p>Zapraszam ${roznica} lat</p>`);
}