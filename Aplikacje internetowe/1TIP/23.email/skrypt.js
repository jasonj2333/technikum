const submitButton = document.querySelector("button[type='submit']");
const imie = document.querySelector("#imie");
const nazwisko = document.querySelector("#nazwisko");
const email = document.querySelector("#email");
const temat = document.querySelector("#temat");
const wiadomosc = document.querySelector("#wiadomosc");
const regulamin = document.querySelector("#regulamin");
const wynik = document.querySelector("#wynik");

//console.log(document.forms[0][1]);

submitButton.addEventListener("click", (e)=>{
    e.preventDefault();
    let error = 0;
    wynik.innerHTML = "";

    if(imie.value.length < 3){
        wynik.innerHTML += "<p>Imię musi mieć przynajmniej 3 znaki</p>";
        error++;
    }

    if(nazwisko.value.length < 3){
        wynik.innerHTML += "<p>Nazwisko musi mieć przynajmniej 3 znaki</p>";
        error++;
    }

    if(email.value.length < 5 || !email.value.includes('@')){
        wynik.innerHTML += "<p>To nie jest poprawny email</p>";
        error++;
    }

    if(temat.value == '0'){
        wynik.innerHTML += "<p>Nie wybrałeś żadnego tematu</p>";
        error++;
    }

    if(wiadomosc.value.length < 10){
        wynik.innerHTML += "<p>Wiadomość musi zawierać conajmniej 10 znaków</p>";
        error++;
    }

    if(!regulamin.checked){
        wynik.innerHTML += "<p>Musisz zapoznać się z regulaminem</p>";
        error++;
    }

    if(error > 0) return;

    //document.forms[0].submit();

    let output = "<h3>Twoja wiadomość została wysłana</h3>";
    output += `<p>${imie.value} ${nazwisko.value}</p>`;
    output += `<p>email klienta: ${email.value}</p>`;
    output += `<p>Temat: ${temat.value}</p>`;
    output += `<p>Wiadomość: ${wiadomosc.value}</p>`;
    output += `<p>Zapoznanie z regulaminem: ${regulamin.checked ? "TAK" : "NIE"}</p>`;
    wynik.innerHTML = output;
});