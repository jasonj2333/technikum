const dataCzas = document.getElementById("dataCzas");

let data = new Date();
//dataCzas.innerHTML = data.toString();
//dataCzas.innerHTML = data.toLocaleString();
//dataCzas.innerHTML = data.toUTCString();
//dataCzas.innerHTML = data.toDateString();
//dataCzas.innerHTML = data.toLocaleDateString();
//dataCzas.innerHTML = data.toTimeString();
//dataCzas.innerHTML = data.toLocaleTimeString();
//dataCzas.innerHTML = data.getDate(); //pobiera dzień miesiąca
//dataCzas.innerHTML = data.getDay(); //pobiera dzień tygodnia 0 - niedziela
//dataCzas.innerHTML = data.getFullYear(); //pobiera rok
//dataCzas.innerHTML = data.getMonth(); //pobiera miesiac 0 - styczeń

//Data: 2024-12-12
//dataCzas.innerHTML = `Data: ${data.getFullYear()}-${data.getMonth()+1}-${data.getDate()}`;

dataCzas.innerHTML = "<p>Data: " + data.getFullYear() + "-" + (data.getMonth()+1) + "-" + data.getDate() + "</p>";
dataCzas.innerHTML += `<p>Data uniwersalna: ${data.toUTCString()}</p>`;