<?php

##setcookie(name, value, expire, path, domain, secure, httponly);
setcookie("pismo", "Na skróty", time()+3600, "/", "localhost", false);

if(isset($_COOKIE['pismo'])){
    echo "<p>Jesteś naszym stałym klientem</p>";
}else{
    echo "<p>Witamy pierwszy raz na naszej stronie</p>";
}

#setcookie("pismo", "Na skróty", time()-1, "/", "localhost", false);