const imie = document.querySelector("#imie");
const nazwisko = document.querySelector("#nazwisko");
const email = document.querySelector("#email");
const wiadomosc = document.querySelector("#wiadomosc");
const rodo = document.querySelector("#rodo");
const wynik = document.querySelector("#wynik");

function wyslij(){
    if(imie.value.length < 3){
        alert('Imię musi mieć przynajmniej 3 znaki!');
        return;
    }
    if(nazwisko.value.length < 3){
        alert('Nazwisko musi mieć przynajmniej 3 znaki!');
        return;
    }
    if(email.value.length < 5 || !email.value.includes("@")){
        alert('To nie jest poprawny email!');
        return;
    }

    if(wiadomosc.value.length < 10){
        alert('Wiadomość musi mieć przynajmniej 10 znaków');
        return;
    }

    if(!rodo.checked){
        alert('Rodo musi być zaznaczone');
        return;
    }
    wynik.innerHTML = `<p>Imię: ${imie.value}, Nazwisko: ${nazwisko.value}</p>`;
    wynik.innerHTML += `<p>Email: ${email.value}</p>`;
    wynik.innerHTML += `<p>Wiadomość: ${wiadomosc.value}</p>`;
    wynik.innerHTML += `<p>Rodo: ${rodo.checked ? "Tak" : "Nie"}</p>`;
    // console.log(document.forms);
    // document.forms[0].submit();
}