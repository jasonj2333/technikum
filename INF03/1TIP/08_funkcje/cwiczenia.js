//Zmienna globalna
let stanKonta = 1000;

function zrobZakupy(nazwaProduktu, cena){
    //Zmienna lokalna - widoczna tylko wewnątrz funkcji
    let kosztCalkowity = cena;

    if(stanKonta >= kosztCalkowity){
        stanKonta = stanKonta - kosztCalkowity;
        document.writeln(`Kupiłeś ${nazwaProduktu} za ${kosztCalkowity} zł. Zostało ci: ${stanKonta} zł<br>`);
    }else{
        document.writeln(`Brak środków na zakup ${nazwaProduktu}. Brakuje ci: ${kosztCalkowity - stanKonta} zł<br>`);
    }
}

zrobZakupy("Chleb", 6);
zrobZakupy("Laptop", 800);
zrobZakupy("XBox", 2600);
zrobZakupy("Lego Minecraft", 150);