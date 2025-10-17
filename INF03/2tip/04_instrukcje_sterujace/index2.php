<?php

$danie = 'zupa';

switch ($danie) {
    case 'pizza':
        echo "Cena pizzy: 35 zł <br>";
        break;
    
    case 'burger':
        echo "Cena pizzy: 25 zł <br>";
        break;
    
    case 'zupa':
        echo "Cena pizzy: 15 zł <br>";
        break;

    default:
        echo "Nie mamy takiego dania w ofercie <br>";
        break;
}