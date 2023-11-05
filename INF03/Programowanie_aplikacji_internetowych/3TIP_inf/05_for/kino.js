let liczbaRzedow = 25
let liczbaMiejsc = 32

document.write("<h1>Sala kinowa</h1>");
document.write("<table>");

for(let rzad = 1; rzad <= liczbaRzedow; rzad++){
    document.write("<tr>");
    for(let miejsce = 1; miejsce <= liczbaMiejsc; miejsce++){
        document.write(`<td> ${miejsce} </td>`);
    }
    document.write("</tr>");
}

document.write("</table>");