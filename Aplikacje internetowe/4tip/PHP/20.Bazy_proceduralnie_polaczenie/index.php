<?php 

$server = 'localhost';
$user = 'root';
$password = '';
$dbase = 'ja_cukiernia';

$conn = mysqli_connect($server, $user, $password, $dbase);

$query = "SELECT * from wyroby";
$result = mysqli_query($conn, $query);

while($row = mysqli_fetch_row($result)){
    echo "<p>$row[1]</p>";
}

mysqli_close($conn);