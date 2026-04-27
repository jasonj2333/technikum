const n01 = document.getElementById("a");
const n02 = document.getElementById("b");
const ile = document.getElementById("ile");
const generuj = document.getElementById("generuj_ciag");
const ciag = document.getElementById("elementyCiagu");
const fi = document.getElementById("zlotaProporcja");


generuj.addEventListener("click", ()=>{
    let n1 = Number(n01.value);
    let n2 = Number(n02.value);

    let ciagString = "";
    let fiString = "";
    for(let i = 0; i < ile.value; i++){
        if(i == 0){
            ciagString += `<div>${i + 1} -> ${n1}</div>`;
        }
        else if(i == 1){
            ciagString += `<div>${i + 1} -> ${n2}</div>`;

        }else{
            ciagString += `<div>${i + 1} -> ${n1 + n2}</div>`;
            let temp = n2;
            n2 = n1 + n2;
            n1 = temp;
        }
    }
    ciag.innerHTML = ciagString;
})