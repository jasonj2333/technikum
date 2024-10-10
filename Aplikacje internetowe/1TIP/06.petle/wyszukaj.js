let imiona = ["Anna", "Tomek", "Zofia", "Wojtek"];
let szukaneImie = prompt("Podaj imię");

let index = 0;

while(imiona[index] != szukaneImie){
    index++;
    if(index > 3) break;
}

if(index > 3){
    document.write("Nie znaleziono imienia na liście");
}else{
    document.write(`Imię ${szukaneImie} znaleziono pod indeksem ${index}`);
}
