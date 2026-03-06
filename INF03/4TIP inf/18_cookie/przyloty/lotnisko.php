<!DOCTYPE html>
<html>
<head>
	<meta charset="UTF-8" />
	<title>Port Lotniczy</title>
	<link rel="stylesheet" href="styl5.css" />
</head>
<body>
	<div id="baner1">
		<img src="zad5.png" alt="logo lotnisko" />
	</div>
	<div id="baner2">
		<h1>Przyloty</h1>
	</div>
	<div id="baner3">
		<h3>przydatne linki</h3>
		<a href="kwerendy.txt" target="_blank">Pobierz...</a>
	</div>
	<div id="glowny">
		<table>
			<tr>
				<th>czas</th>
				<th>kierunek</th>
				<th>numer rejsu</th>
				<th>status</th>
			</tr>
			<?php
			//skrypt
			$conn = mysqli_connect("localhost", "root", "", "przyloty");
			$query = "SELECT czas, kierunek, nr_rejsu, status_lotu FROM przyloty ORDER BY czas ASC;";
			$result = mysqli_query($conn, $query);
			while($row = mysqli_fetch_row($result)){
				echo "<tr>";
				echo "<td>$row[0]</td>";
				echo "<td>$row[1]</td>";
				echo "<td>$row[2]</td>";
				echo "<td>$row[3]</td>";
				echo "</tr>";
			}

			mysqli_close($conn);
			?>
		</table>
	</div>
	<div id="stopka1">
	<?php
	//skrypt
		if(isset($_COOKIE['odwiedziny'])){
			echo "<p><em>Witaj ponownie na stronie lotniska</em></p>";
		}else{
			echo "<p><strong>Dzień dobry. Strona lotniska używa ciasteczek</strong></p>";
		}
		setcookie("odwiedziny", 1, time()+2*60*60);
	?>
	</div>
	<div id="stopka2">
		Autor: Chriskyy#0181
	</div>
</body>
</html>