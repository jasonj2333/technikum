let imiona = ["Anna", "Piotr", "Zofia", "Katarzyna", "Jan"];
let indeks = 0;
let imie = "Piotr";

while(imiona[indeks] != imie){
    indeks++;
    if(indeks > 4) break;
}

if(indeks > 4) {
    document.write('Nie znaleziono osoby');
}else{
    document.write(`Imie ${imie} znaleziono pod indeksem ${indeks}`);
}