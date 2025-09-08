<?php

function zaloguj($login, $pass){
    $users = [
        'janek' => 'Jan23',
        'tomek' => 'tom9',
    ];

    if(array_key_exists($login, $users)){
        if($users[$login] == $pass) return true;
    }

    return false;
}