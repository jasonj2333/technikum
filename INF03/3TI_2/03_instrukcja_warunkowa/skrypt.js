let a = 12;
let b = 12;

if(a > b){
    document.writeln("<p>Zmienna a jest większa od b</p>");
}else{
    //document.writeln("<p>Zmienna a nie jest większa od b</p>");
    if(b > a){
        document.writeln("<p>Zmienna b jest większa od a</p>");
    }else{
        document.writeln("<p>Zmienna a jest równa b</p>");
    }
}

if(a > b){
    document.writeln("<p>Zmienna a jest większa od b</p>");
}
else if(b > a){
    document.writeln("<p>Zmienna b jest większa od a</p>")
}
else{
    document.writeln("<p>Zmienna a jest równa b</p>");
}

document.writeln("Dalsza część programu");