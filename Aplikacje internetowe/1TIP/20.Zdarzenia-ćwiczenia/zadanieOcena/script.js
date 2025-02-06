const teksty = document.getElementById("teksty");
const zeruj = document.querySelector("#zeruj");

teksty.addEventListener("click", ()=>{
    teksty.innerHTML = "Niepołomice";
})

teksty.addEventListener("mouseover", ()=>{
    teksty.style.color = "green";
})

teksty.addEventListener("mouseout", ()=>{
    teksty.style.color = "black";
})

zeruj.addEventListener("click", ()=>{
    teksty.innerHTML = "Kraków";
    teksty.style.color = "black";
})