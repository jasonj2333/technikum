const oblicz = document.querySelector("button");
const wynik = document.querySelector("#wynik_17");
const opcje = document.querySelectorAll("input[type='checkbox']");

// oblicz.addEventListener("click", ()=>{
//     let suma = 0;
//     opcje.forEach(box => {
//         if(box.checked){
//             switch (box.id) {
//                 case 'piling':
//                     suma += 45;
//                     break;
//                 case 'maska':
//                     suma += 30;
//                     break;
//                 case 'masaz':
//                     suma += 20;
//                     break;
//                 case 'regulacjaBrwi':
//                     suma += 5;
//                     break;
//             }
//         }
//     })
//     wynik.innerHTML = `Cena zabiegów: ${suma}`;
// })

oblicz.addEventListener("click", ()=>{
    let suma = 0;
    const zabiegi = {
        'piling': 45,
        'maska': 30,
        'masaz': 20,
        'regulacjaBrwi': 5,
    };
    opcje.forEach(box => {
        if(box.checked){
            suma += zabiegi[`${box.id}`]
        }
    })
    wynik.innerHTML = `Cena zabiegów: ${suma}`;
})
