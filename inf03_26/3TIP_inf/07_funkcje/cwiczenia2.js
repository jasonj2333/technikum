function fib(n){
    if(n == 1 || n == 2) return 1;

    let poprzedni = 1;
    let obecny = 1;

    for(let i = 3; i <= n; i++){
        let nastepny = poprzedni + obecny;
        poprzedni = obecny;
        obecny = nastepny;
    }

    return obecny;
}

console.log( fib(11) );

let n = 25;

for(let i = 1; i <= n; i++){
    document.writeln( fib(i) + ", " );
}
document.writeln("<br>");