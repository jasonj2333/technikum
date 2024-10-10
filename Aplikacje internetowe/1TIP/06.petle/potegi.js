for (let i = 0; i < 10; i++) {
    document.write(i + "->" + i*i + "<br>");
}

document.write("<h2>Wersja z tabelką</h2>");
document.write("<table>");
for (let i = 0; i < 10; i++) {
    document.write(`<tr><td>${i}</td><td>${i*i}</td></tr>`);
}
document.write("</table>");