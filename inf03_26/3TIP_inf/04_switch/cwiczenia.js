let kierunek = prompt("Podaj kierunek świata N, S, W, E");

switch(kierunek.toUpperCase()){
    case 'N':
        document.writeln("Północ");
        break;
    case 'S':
        document.writeln("Południe");
        break;
    case 'E':
        document.writeln("Wschód");
        break;
    case 'W':
        document.writeln("Zachód");
        break;
    default:
        document.writeln("Nieznany kierunek");
        break;
}