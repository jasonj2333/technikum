document.write("<h2>Obiekt String</h2>");
let tekst = "Obiekty języka JavaScript";
let dlugosc = tekst.length;
document.write(dlugosc);

document.write("<p>" + tekst + "</p>");
document.write("<p>" + tekst.toUpperCase() + "</p>");
document.write("<p>" + tekst.toLowerCase() + "</p>");
let x = tekst.substring(15,19);
document.write("<p>" + x + "</p>");

document.write("<h2>Obiekt Date</h2>");
let dataDzisiejsza = new Date();
let jakaData = new Date(2013,2,27);

document.write( dataDzisiejsza.toString() + "<br>" );
document.write( jakaData.toString() + "<br>" );

document.write( dataDzisiejsza.toLocaleString() + "<br>" );
document.write( dataDzisiejsza.toUTCString() + "<br>" );
document.write( dataDzisiejsza.toDateString() + "<br>" );
document.write( dataDzisiejsza.toLocaleDateString() + "<br>" );
document.write( dataDzisiejsza.toTimeString() + "<br>" );
document.write( dataDzisiejsza.toLocaleTimeString() + "<br>" );
document.write( dataDzisiejsza.getFullYear() + "<br>" );
document.write( dataDzisiejsza.getHours() + "<br>" );
document.write( Date.now() + "<br>" );
//console.log(dataDzisiejsza.toJSON())