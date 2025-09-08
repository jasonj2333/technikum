let a = 4;
let b = 7;

document.write('<h1>Instrukcja warunkowa</h1>');
document.write(`<p>a = ${a}</p>`);
document.write(`<p>b = ${b}</p>`);

// if(a > b){
//     document.write("<p>a jest większe od b</p>");
// }else{
//     if(a == b){
//         document.write("<p>a jest równe b</p>");
//     }else{
//         document.write("<p>b jest większe od a</p>");
//     }    
// }

if(a > b){
    document.write("<p>a jest większe od b</p>");
}
else if(a == b){
    document.write("<p>a jest równe b</p>"); 
}
else{
    document.write("<p>b jest większe od a</p>");
}

document.write('<p>Dalsza część programu</p>');