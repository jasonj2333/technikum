// nazwa email(imie, nazwisko)
// zwrócić adres email w formacie imie.nazwisko@gmail.com

function email() {
    let imie = document.getElementById("imie").value;
    let nazwisko = document.getElementById("nazwisko").value;
    
    let email = imie + "." + nazwisko + "@gmail.com";
    //return email.toLowerCase();
    //document.write( email.toLowerCase() );
    document.getElementById("email").innerHTML = email.toLowerCase();
}

//document.write( email("Tomek", "Nowak") );