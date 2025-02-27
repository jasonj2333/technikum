const liczbaA = document.querySelector("#liczbaA");
const liczbaB = document.querySelector("#liczbaB");
const wynik = document.querySelector("#wynik_14");

// const addOperator = document.querySelector("add");

// addOperator.addEventListener("click", (e)=>{

// });

const buttons = document.querySelectorAll("button");


buttons.forEach(btn => {
    btn.addEventListener("click", (e)=>{
        let liczba1 = parseInt(liczbaA.value);
        let liczba2 = parseInt(liczbaB.value);
        let operator = e.target.id;
        switch (operator) {
            case 'add':
                wynik.innerHTML = "Wynik: " + (liczba1 + liczba2);
                break;

            case 'sub':
                wynik.innerHTML = "Wynik: " + (liczba1 - liczba2);
                break;
            
            case 'mul':
                wynik.innerHTML = "Wynik: " + (liczba1 * liczba2);
                break;

            case 'div':
                    wynik.innerHTML = "Wynik: " + (liczba1 / liczba2);
                    break;
            case 'pow':
                wynik.innerHTML = "Wynik: " + (liczba1 ** liczba2);
                break; 

            default:
                wynik.innerHTML = "Nie ma takiego działa";
                break;
        }
    })
})