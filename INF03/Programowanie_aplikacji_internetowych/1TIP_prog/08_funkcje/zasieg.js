let globalna = 5;

function suma(a,b){
    let globalna = 100;
    return a + b + globalna;
}

{
    globalna++;
}

document.write( suma(5, 9) +"<br>");
document.write( globalna );