<?php

$czas = time() + 60 * 60 * 24;
$czas = strtotime("+4 day");

echo date('Y-m-d H:i:s', $czas);
//echo date('c', $czas);
echo "<br>";
$data = getdate($czas);

echo $data['weekday'];

// echo"<pre>";
// print_r($data);
// echo"</pre>";
echo "<br>";
echo strtotime("now"), "<br>";
echo strtotime("10 September 2000"), "<br>";
echo strtotime("+1 day"), "<br>";
echo strtotime("+1 week"), "<br>";
echo strtotime("+1 week 2 days 4 hours 2 seconds"), "<br>";
echo strtotime("next Thursday"), "<br>";
echo strtotime("last Monday"), "<br>";