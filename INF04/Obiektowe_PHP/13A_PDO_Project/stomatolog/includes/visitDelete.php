<?php
include './class-autoloader.inc.php';
// include '../classes/dbh.class.php';
// include '../classes/weather.class.php';

if(isset($_POST['id'])){
        $id = $_POST['id'];

        try {
            $dentist = new Dentist();
            $dentist->deleteVisit($id);
            header("location: ../visitsList.php");
        } catch (PDOException $e) {
            echo $e->getMessage();
        }
}

