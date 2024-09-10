//console.log(window.innerWidth);
//console.log(window.innerHeight);

//window.open('https://onet.pl');
let lekcje = 5;
function funkcja1(){
    document.write('<p>Cześć</p>');
}

window.setTimeout(funkcja1, 3000);
window.setTimeout(function(){
    document.write('<p>Mamy piękny dzień!</p>');
}, 4000);

let doDomu = setInterval(function(){
    document.write(`<p>Zostało już tylko ${lekcje} lekcji</p>`);
    lekcje--;
    if(lekcje == 0){
        clearInterval(doDomu);
        document.write('Hurra idziemy do domu');
    }
}, 5000)
