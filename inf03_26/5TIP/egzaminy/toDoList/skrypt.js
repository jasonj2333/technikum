const wykonajButtons = document.querySelectorAll("ul button");
const dodajButton = document.querySelector("nav button");
const dodajInput = document.querySelector("nav input");
const lista = document.querySelector("ul");
//console.dir(dodajButton);

function przekresl(){
    this.parentElement.style.textDecoration = "line-through";
}

function dodajZadanie(){
    const zadanie = dodajInput.value;
    //console.log(zadanie);
    // lista.innerHTML += `<li>
    //                 ${zadanie}
    //                 <button>Wykonane</button>
    //             </li>`;
    const li = document.createElement("li");
    li.innerText = zadanie;
    const button = document.createElement("button");
    button.innerText = "Wykonane";
    button.addEventListener("click", przekresl);
    li.appendChild(button);
    lista.appendChild(li);
    dodajInput.value = "";
}

wykonajButtons.forEach(button => {
    button.addEventListener("click", przekresl);
})

dodajButton.addEventListener("click", dodajZadanie);