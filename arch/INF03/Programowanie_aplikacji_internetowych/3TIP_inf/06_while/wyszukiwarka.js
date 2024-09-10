let imiona = ["Anna", "Tomasz", "Jan", "Zofia", "Marek"];

let wybor = prompt("Wybierz opcje: 1 - wyświetl imiona; 2 - znajdź imie");

if(wybor == '1'){
    for(let i = 0; i < imiona.length; i++){
        document.write(imiona[i] + "<br>");
    }
}
else if(wybor == '2'){
    let i = 0;
    let imie = prompt("Podaj imie: ");
    while(imiona[i] != imie){
        i++;
        if(i == imiona.length) break;
    }
    if(i < imiona.length) document.write(`Imię ${imie} znajduje się na pozycji ${i+1}`);
    else document.write('Nie znaleziono szukanego imienia');
}
else{
    document.write('Błędny wybór');
}