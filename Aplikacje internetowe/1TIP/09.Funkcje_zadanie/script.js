function maksimum(a, b) {
    if(a > b) return a;
    return b;
}

document.write( maksimum(12, 10) + "<br>" );
document.write( maksimum(4, 8) + "<br>" );
document.write( maksimum(5, 5) + "<br>" );

function ocena(numer) {
    switch (numer) {
        case 1:
            document.write("jedynka");
            break;
        case 5:
            document.write("piątka");
            break;
    
        default:
            document.write("Nie ma takie oceny");
            break;
    }
}

ocena(1);
ocena(7);