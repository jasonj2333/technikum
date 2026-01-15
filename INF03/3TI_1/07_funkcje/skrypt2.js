function czyPelnoletni(wiek){
    //Jeżeli wiek >= 18 to funkcja zwraca true
    //w przeciwnym razie zwraca false
    if(wiek >= 18) return true;
    return false;
}

console.log(czyPelnoletni(16));
console.log(czyPelnoletni(18));
console.log(czyPelnoletni(21));

if(czyPelnoletni(20)){
    document.writeln("Możesz głosować w wyborach");
}else{
    document.writeln("Jeszcze nie możesz głosować");
}

function przedzial(liczba, min=0, max=100){
    //Zwracuj true jeżeli liczba mieści się w przedziale
    //False, jeżeli liczba jest spoza przedziału
    if(liczba >= min && liczba <= max){
        return true;
    }
    return false;
}

console.log(przedzial(78));
console.log(przedzial(78, 10, 20));
console.log(przedzial(20, 10, 20));

function obliczVat(cena, stawka=23){
    return cena * (stawka/100);
}

console.log(obliczVat(100, 23));
console.log(obliczVat(100, 8));
console.log(obliczVat(50, 8));

function konwerterTemperatury(temp, skala="C"){
    //Jeżeli skala == 'C' zwraca temperaturę w stopniach F = (C *1.8) + 32
    //Jeżeli skala == 'F' zwraca temperaturę w stopniach C = (F - 32) / 1.8
    if(skala == "C"){
        return (temp *1.8) + 32;
    }else if(skala == "F"){
        return (temp - 32) / 1.8;
    }
}

console.log(konwerterTemperatury(36, "C"));
console.log(konwerterTemperatury(77, "F"));

function ocena(punkty){
    //Punkty są z przedziału od 0 do 100
    //Jeżeli punkty >=0 && <= 29 zwraca "niedostateczny"
    //Jeżeli punkty >=30 && <= 49 zwraca "dopuszczający"
    //Jeżeli punkty >=50 && <= 70 zwraca "dostateczny"
    //Jeżeli punkty >=71 && <= 85 zwraca "dobry"
    //Jeżeli punkty >=86 && <= 95 zwraca "bardzo dobry"
    //Jeżeli punkty >=96 && <= 100 zwraca "celujący"
    //w przeciwnym razie - niepoprawna ilość punktów
    if(punkty < 0 || punkty > 100) return "niepoprawna ilość punktów";

    if(punkty <= 29) return "niedostateczny";
    else if(punkty <= 49) return "dopuszczający";
    else if(punkty <= 70) return "dostateczny";
    else if(punkty <= 85) return "dobry";
    else if(punkty <= 95) return "bardzo dobry";
    else return "celujący";
}

console.log(ocena(15));
console.log(ocena(63));
console.log(ocena(95));
console.log(ocena(143));