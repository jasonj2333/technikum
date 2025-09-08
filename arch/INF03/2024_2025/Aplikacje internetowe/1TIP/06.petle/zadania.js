document.write("<h2>1. Utwórz program wyświetlający liczby od 5 do 15.</h2>");

for (let i = 5; i <= 15; i++) {
    document.write(i + " "); 
}

document.write("<h2>2. Utwórz program wyświetlający liczby od 20 do 10.</h2>");

for (let i = 20; i >= 10; i--) {
    document.write(i + " "); 
}

document.write("<h2>3 i 4. Utwórz program wyświetlający 5 linii zawierających Twoje imię.</h2>");

for (let i = 0; i < 5; i++) {
    document.write(i+1 + ". Jurek <br>"); 
}


document.write('<h2>5. Napisz program, który wyprowadzi na ekran monitora prostokąt o bokach 10 na 5, narysowanego za pomocą znaków "*". Wnętrze prostokąta powino być wypełnione znakami "*".</h2>');

for(let i = 1; i < 51; i++){
    document.write("*");
    if(i % 10 == 0){
        document.write("<br>");
    }
}
document.write("<hr>");

for(let i = 0; i < 5; i++){
    for(let j = 0; j < 10; j++){
        document.write("*");
    }
    document.write("<br>");
}

document.write('<h2>6. Napisz program, który wyprowadzi na ekran monitora prostokąt narysowany za pomocą znaków "*" o wielkości x, y podanej przez użytkownika.</h2>');

//let x = parseInt( prompt("Podaj szerokość - x: ") ); 
//let y = parseInt( prompt("Podaj wysokość - y: ") ); 
let x = 20;
let y = 10;

for(let i = 0; i < y; i++){
    for(let j = 0; j < x; j++){
        document.write("*");
    }
    document.write("<br>");
}

document.write('<h2>7. Napisz program wyświeltlający tabliczkę mnożenia do 100 według przykładu poniżej. </h2>');

for(let i = 1; i <= 10; i++){
    for(let j = 1; j <= 10; j++){
        document.write(i + " * " + j + " = " + i * j);
        document.write("<br>");
    }  
}

document.write('<h2>8. Napisz program, który wyprowadzi na ekran monitora trójką narysowany za pomocą znaków "*" według przykładu:</h2>');
for(let i = 1; i <= 5; i++){
    for(let j = 1; j <= i; j++){
        document.write("*");
    }
    document.write("<br>");
}

//http://www.informatyka.orawskie.pl/?pl_petle,147

document.write("<hr>");

// Zadanie 9.
// Napisz program, który wyprowadzi na ekran monitora trójką narysowany za pomocą znaków "*" według przykładu:


//       *
//      ***
//     *****
//    *******
//   *********

for(let i = 1; i < 10; i+=2){
    for(let j = 1; j <= 9 - i; j++){
        document.write("&nbsp;");
    }
    for(let j = 1; j <= i; j++){
        document.write("*");
    }
    document.write("<br>");
}

document.write("<hr>");

// Zadanie 10.

// Napisz program, który wyprowadzi na ekran monitora trójką narysowany za pomocą znaków "*" według przykładu:

 

//       *
//      ***
//     *****
//       *
//      ***
//     *****
//       *
//      ***
//     *****


for(let k = 0; k < 3; k++){
    for(let i = 1; i < 6; i+=2){
        for(let j = 1; j <= 5 - i; j++){
            document.write("&nbsp;");
        }
        for(let j = 1; j <= i; j++){
            document.write("*");
        }
        document.write("<br>");
    }
}



document.write("<hr>");
 

// Zadanie 11.

// Napisz program, który wyprowadzi na ekran monitora trójką narysowany za pomocą znaków "*" według przykładu:

 

//             *
//            ***
//           *****
//             *
//            ***
//           *****
//          *******
//             *
//            ***
//           *****
//          *******
//         *********

for(let k = 0; k < 3; k++){
    for(let i = 1; i < 6; i+=2){
        for(let j = 1; j <= 5 + k - i; j++){
            document.write("&nbsp;");
        }
        for(let j = 1; j <= i; j++){
            document.write("*");
        }
        document.write("<br>");
    }
}