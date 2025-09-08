for(let i = 0; i < 10; i++){
    document.write(i + " ");
}

document.write("<h2>while(wyrażenie warunkowe)</h2>");

let dodatnia = 10;
while(dodatnia > 0){
    document.write(dodatnia + " ");
    dodatnia--;
}

document.write("<h2>do .. while(wyrażenie warunkowe)</h2>");

let imie = "";

do{
    imie = prompt("Podaj imię");
}while(imie != "Tomek");

document.write("Cześć Tomek");