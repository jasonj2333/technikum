// *****
// *****
// *****
// *****
// *****

for(let i=1; i<=5; i++){
    for(let j=1; j<5; j++){
        document.writeln("*");
    }
    document.writeln("<br>");
}

// 1
// 12
// 123
// 1234
// 12345

for(let i=1; i<=5; i++){
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

for(let i=5; i>=1; i--){
    for(let j=1; j<=i; j++){
        document.writeln(j);
    }
    document.writeln("<br>");
}

//tabliczka mnożenia 10x10

for(let i=1; i<=10; i++){
    for(let j=1; j<=10; j++){
        document.writeln(i*j);
    }
    document.writeln("<br>");
}