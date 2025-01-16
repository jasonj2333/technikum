const usunBtn = document.querySelectorAll(".usun");
console.log(usunBtn);

usunBtn.forEach(function(row) {
    row.onclick = function(e){
        e.preventDefault();
        let potwierdz = confirm('Czy napewno chcesz usunąć użytkowanika');
        if(potwierdz){
            window.location.href = row.href;  
        }
    }
})

