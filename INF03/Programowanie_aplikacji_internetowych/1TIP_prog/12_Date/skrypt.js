const dataCzas = document.getElementById("dataCzas");
let date = new Date();
// dataCzas.innerHTML = date.toString();
// dataCzas.innerHTML = date.toLocaleString();
// dataCzas.innerHTML = date.toUTCString();
// dataCzas.innerHTML = date.toDateString();
// dataCzas.innerHTML = date.toLocaleDateString();
// dataCzas.innerHTML = date.toTimeString();
// dataCzas.innerHTML = date.toLocaleTimeString();
// dataCzas.innerHTML = date.getDate(); //pobiera dzień miesiąca
// dataCzas.innerHTML = date.getDay(); //pobiera dzień tygodnia 0 - niedziela
// dataCzas.innerHTML = date.getFullYear();
// dataCzas.innerHTML = date.getMonth(); //0 - styczeń

dataCzas.innerHTML = `<p><b>Czas lokalny</b>: ${date.toLocaleString()}</p>`;
dataCzas.innerHTML += `<p><b>Czas uniwersalny</b>: ${date.toUTCString()} </p>`;
dataCzas.innerHTML += "<hr>";
