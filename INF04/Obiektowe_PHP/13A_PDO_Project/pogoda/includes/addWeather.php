<?php
include './class-autoloader.inc.php';

if(isset($_POST['measurementDate'])){
        $measurementDate = $_POST['measurementDate'];
        $temperatureMorning = $_POST['temperature1'];
        $temperatureEvening = $_POST['temperature2'];
        $weatherId = $_POST['weatherId'];
        $comments = $_POST['comments'];

        try {
            $weather = new Weather();
            $weather->addWeather($measurementDate, $temperatureMorning, $temperatureEvening, $weatherId, $comments);
            header("location: ../index.php");
        } catch (PDOException $e) {
            echo $e->getMessage();
        }
}