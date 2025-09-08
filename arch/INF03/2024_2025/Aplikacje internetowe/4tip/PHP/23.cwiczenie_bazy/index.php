<?php 

$conn = mysqli_connect("localhost", "root", "", "ja_cukiernia");
$query = "SELECT f.nazwa fnazwa, w.nazwa wnazwa, ilosc FROM `dostepnosc` d JOIN filie f ON(d.id_filii = f.id) JOIN wyroby w ON(d.id_towaru = w.id);";

$result = mysqli_query($conn, $query);

echo "<table>";
echo "<tr><th>Nazwa filii</th><th>Nazwa produktu</th><th>Ilość</th></tr>";
while($row = mysqli_fetch_assoc($result)){
    echo "<tr><td>{$row['fnazwa']} </td><td> {$row['wnazwa']} </td><td> {$row['ilosc']}</td></tr>";
}
echo "</table>";
mysqli_close($conn);