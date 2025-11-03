// 1
// 12
// 123
// 1234
// 12345
let n = 9;

for(let i = 1; i <= n; i++){
    for(let j=1; j<=i; j++){
        document.writeln(j);
    }
    document.writeln("<br>");
}

//12345
//1234
//123
//12
//1

for(let i = n; i >= 1; i--){
    for(let j=1; j<=i; j++){
        document.writeln(j);
    }
    document.writeln("<br>");
}

document.writeln("<h2>Ćwiczenie 2</h2>");

let wysokosc = 6;
let szerokosc = 15;

// *****
// *****
// *****
// *****
// *****
// *****

for(let i = 0; i < wysokosc; i++){
    for(let j = 0; j < szerokosc; j++){
        document.writeln("*");
    }
    document.writeln("<br>");
}

document.writeln("<h2>Ćwiczenie 3</h2>");

// *
// **
// ***
// ****
// *****
// ******

for(let i = 1; i <= wysokosc; i++){
    for(let j=1; j<=i; j++){
        document.writeln("*");
    }
    document.writeln("<br>");
}

document.writeln("<h2>Ćwiczenie 4</h2>");


// *****
// *---*
// *---*
// *---*
// *---*
// *****

for(let i = 0; i < wysokosc; i++){
    for(let j = 0; j < szerokosc; j++){
        if(i == 0 || i == wysokosc-1) document.writeln("*");
        else{
            if(j == 0 || j == szerokosc-1) document.writeln("*");
            else document.writeln("-");
        }
    }
    document.writeln("<br>");
}