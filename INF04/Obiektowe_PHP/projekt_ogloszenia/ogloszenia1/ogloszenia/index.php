<?php
session_start();

require('config.php');

#var_dump($_GET);

$requestUrl = "{$_SERVER['HTTP_HOST']}{$_SERVER['REQUEST_URI']}";
$bootstrap = new Bootstrap($requestUrl);
