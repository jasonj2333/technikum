let a = 5;
let b = 7;

if(a > b){
    document.writeln("<p>Zmienna a jest większa od b</p>");
}else{
    if(b > a){
        document.writeln("<p>Zmienna b jest większa od a</p>");  
    }else{
        document.writeln("<p>Zmienne a i b są równe</p>");  
    } 
}

if(a > b){
    document.writeln("<p>Zmienna a jest większa od b</p>");
}
else if(b > a){
    document.writeln("<p>Zmienna b jest większa od a</p>"); 
}else{
    document.writeln("<p>Zmienne a i b są równe</p>"); 
}