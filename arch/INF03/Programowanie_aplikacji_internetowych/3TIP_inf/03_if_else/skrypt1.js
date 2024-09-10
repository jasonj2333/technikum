let wiek = 17;

//Jeżeli wiek >= 18 -> możesz głosować w wyborach
//w przeciwnym razie -> nie możesz głosować
//                   -> zapraszam za 1 lat

if(wiek >= 18){
    document.write("<p>Możesz głosować</p>");
}else{
    document.write(`<p>Zapraszamy za ${18-wiek} lat</p>`);
}