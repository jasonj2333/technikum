// ------------- METODA PIERWSZA - osobna funkcja dla każdego przycisku
function change_to_indigo() {
    document.getElementById('right').style.backgroundColor = "indigo";
}

// const steelblueButton = document.querySelector('#steelblue');
// steelblueButton.onclick = change_to_steelblue;

// function change_to_steelblue(){
//     document.querySelector('#right').style.backgroundColor = "steelblue";
// }

// const oliveButton = document.querySelector('#olive');
// oliveButton.addEventListener("click", change_to_olive) 

// function change_to_olive(){
//     //document.getElementById('right').style.backgroundColor = "olive";
//     document.getElementById('right').style.cssText = "background-color: olive";
// }


// ------------- METODA DRUGA - funkcja uniwersalna z parametrem
function change_to_color(color){
    document.getElementById('right').style.backgroundColor = color;
}


// ------------- METODA TRZECIA - funkcja uniwersalna z parametrem
//Uchwyt do przycisku Olive
const oliveButton = document.querySelector('#olive');
oliveButton.addEventListener("click", change_to_color2) 

//Funkcja bezparametrowa - uniwersalna - kolor jest pobierany z identyfikatora przycisku na rzecz którego została wywołana funckja - this.id;
function change_to_color2(){
    //console.dir(this);
    document.getElementById('right').style.backgroundColor = this.id;
}

// ------------- METODA CZWARTA - uchwyt wszystkich przycisków łącznie
// const colorButtons = document.querySelectorAll(".left button");
// console.dir(colorButtons);
// colorButtons.forEach(function(button){
//     button.addEventListener("click", ()=>{
//         change_to_color(button.id);
//     }) 
// })

// ------------- ZMIANA KOLORU CZCIONKI
// const fontColorSelect = document.querySelector('.list');
// fontColorSelect.addEventListener("change", change_font_color) 

function change_font_color() {
    const x = document.getElementById('list').value;
    document.getElementById('right').style.color = x;
}

// ------------- ZMIANA WIELKOŚCI CZCIONKI
const fontSize = document.querySelector('#czcionka');
//Nasłuchiwanie zdarzenia metodą addEventListener("rodzaj zdarzenia", funkcja anonimowa)
fontSize.addEventListener("change", function () {
    const x = document.getElementById('czcionka').value;
    document.getElementById('right').style.fontSize = x;
}) 

//ZAMIAST FUNKCJI ANONIMOWEJ MOŻNA PODPIĄĆ WCZEŚNIEJ ZDEFINIOWANĄ FUNKCJE
// function change_size() {
//     const x = document.getElementById('czcionka').value;
//     document.getElementById('right').style.fontSize = x;
// }

// ------------- WŁĄCZENIE I WYŁĄCZENIE RAMKI WOKÓŁ OBRAZKA
const borderSize = document.querySelector('#box');
borderSize.addEventListener("change", change_border); 

function change_border() {
    if (document.getElementById('box').checked) {
        document.getElementById('img').style.border = '1px solid white';
    }
    else {
        document.getElementById('img').style.border = 'none';
    }
}

// ------------- ZMIANA PUNKTATORA DLA LISTY - metoda z pętlą
//const listType = document.getElementsByName('punktor');
//const listType = document.querySelectorAll("input[name='punktor']");
//console.dir(listType);

// listType.forEach(li => {
//     li.addEventListener("change", ()=>{
//         //console.log(li.dataset.type);
//         radio(li.dataset.type);
//     })
// })

// ------------- ZMIANA PUNKTATORA DLA LISTY - metoda z tłumaczeniem argumentów
function radio(rad){
    let radiopalette = document.getElementById('lista2');
    if (rad == 'dysk') {
        radiopalette.style.listStyle = 'disc';
    }
    if (rad == 'kwadrat') {
        radiopalette.style.listStyle = 'square';
    }
    if (rad == 'okrag') {
        radiopalette.style.listStyle = 'circle';
    }
    //Jeśli jako parametr funkcji podamy jako nazwę właściwości list-type dla listy np. circle - to możemy sprawę załawtić jedną liniką - zamiast powyższej instrukcji warunkowe
    //radiopalette.style.listStyle = rad;
}


