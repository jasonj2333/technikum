const naglowek1 = document.querySelector("h1");
naglowek1.style.backgroundColor = "red";
naglowek1.style.color = "white";

function zmien(styl) {
    switch (styl) {
        case 'styl1':
            naglowek1.style.backgroundColor = "green";
            naglowek1.style.color = "red";
            break;
        case 'styl2':
            naglowek1.style = "background-color:yellow; color: blue;"
            break;
        case 'styl3':
            naglowek1.style = "background-color:blue; color: yellow;"
            break
        case 'reset':
            naglowek1.style = "background-color: red; color: white;"
            break;
        default:
            break;
    }
}