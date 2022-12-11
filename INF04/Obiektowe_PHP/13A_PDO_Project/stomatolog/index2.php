<?php
    include './includes/class-autoloader.inc.php';
    // include './classes/dbh.class.php';
    // include './classes/weather.class.php';
    $faker = new Faker();
    $faker->createTables();
    $faker->createFakeData();
    header("location: ./index.php");
?>