let data = new Date(2018, 10, 24, 3, 15);

document.write(data.toString() + "<br>");
document.write(data.toLocaleString() + "<br>");
document.write(data.toUTCString() + "<br>");
document.write(data.toTimeString() + "<br>");
document.write(data.toLocaleTimeString() + "<br>");

let rokUrodzenia = 1991;
document.write(`Mam ${data.getFullYear()-rokUrodzenia} lat`)