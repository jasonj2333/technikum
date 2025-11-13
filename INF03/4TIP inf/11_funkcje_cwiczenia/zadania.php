<?php

function poleKola($r){
    return pi() * $r * $r;
}

echo poleKola(5) . "<br>";
echo poleKola(3) . "<br>";
echo poleKola(22) . "<br>";

function rokPrzestepny($rok = 2024){
    if(($rok % 4 == 0 && $rok % 100 != 0)|| $rok % 400 == 0){
        return true;
    } else {
        return false;
    }
}

echo rokPrzestepny() ? "Rok jest przestępny" : "Rok nie jest przestępny";
echo rokPrzestepny(2026) . "<br>";
echo rokPrzestepny(1400) . "<br>";

if(rokPrzestepny(2026)){
    echo "W tym roku luty miał 29 dni";
}else{
    echo "Urodzeni 29 lutego nie mają w tym roku urodzin";
}