const imiona = ["Ania", "Tomek", "Ola", "Wojtek"];

let n = imiona.length; //liczba elementów tablicy
console.log(n);
console.log(imiona[n-1]); //ostatni element tablicy
console.log(imiona[0]);
imiona[2] = "Aleksandra"; //zamiana wartości
console.log(imiona[2]);
console.log(imiona);

//metoda modyfikujące tablice
imiona.push("Bartek"); //dodaj na końcu tablicy
imiona.push("Zosia");

let ostatni = imiona.pop(); //usuwa i zwraca ostatni element;
console.log(ostatni);

imiona.unshift("Adam"); //dodaje wartość na początku tablicy
let pierwszy = imiona.shift(); //usuwa i zwraca pierwszy element tablicy
console.log(pierwszy);

console.log(imiona);
document.writeln(imiona);

const kolory = ["czerwony", "niebieski", "zielony", "żółty"];
kolory.splice(2, 1); //usuń spod indeksu, ile kolejnych

console.log(kolory);

const oceny = [6, 2, 4, 6, 1, 2, 2, 3, 4, 5, 1, 3, 4, 5];

document.writeln("<br>");

for(let i = 0; i < oceny.length; i++){
    document.writeln(`${i+1}. Ocena: ${oceny[i]} <br>`);
    //document.writeln(i+1, ". Ocena: ", oceny[i], "<br>");
}

document.writeln("<br><hr>");

for(const ocena of oceny){
    document.writeln(ocena + ", ");
}

document.writeln("<br><hr>");

oceny.forEach((ocena, index) => {
    document.writeln(index + ": " + ocena + " | ");
});