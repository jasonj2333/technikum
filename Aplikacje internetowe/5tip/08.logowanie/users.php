<?php

function zaloguj($login, $pass){
    $users = [
        'janek' => 'jan23',
        'tomek' => 'tom9',
        'admin' => 'admin'
    ];

    if(array_key_exists($login, $users)){
        if($users[$login] == $pass){
            return true;
        }
    }
    return false;
}