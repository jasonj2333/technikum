<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta http-equiv="X-UA-Compatible" content="IE=edge">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Data dzisiejsza</title>
</head>
<body>
    <h1>Data dzisiejsza</h1>
    <?php 
        function getMyDate(){
            $months = [
                'stycznia',
                'lutego',
                'marca',
                'kwietnia',
                'maja',
                'czerwieca',
                'lipieca',
                'sierpnia',
                'września',
                'października',
                'listopada',
                'grudnia',
            ];
            $week = [
                'niedzielę',
                'poniedziałek',
                'wtorek',
                'środa',
                'czwartek',
                'piątek',
                'sobotę', 
            ];
            $result = "Dzisiaj mamy ";
            $weekDay = date("w");
            $monthDay = date("j");
            $yearMonth = date("n");
            $yearMonth = date("n");
            $year = date("Y");
            $yearDay = date("z")+1;
            $yearEnd = mktime(23,59,59,12,31,$year);
            $now = time();
            $diff = $yearEnd - $now;
            $days = (int)($diff / (24*60*60));
            $hours = (int)(($diff % (24*60*60)) / 3600);
            $minutes = (int)((($diff % (24*60*60)) % 3600) / 60);
            $seconds = (int)((($diff % (24*60*60)) % 3600) % 60);
            $result .= $week[$weekDay]." ".$monthDay." ".$months[$yearMonth-1]. " ".$year." roku jest to ". $yearDay ." dzień roku. Do końca roku pozostało: ".$days. " dni ".$hours. " godzin ". $minutes. " minut i ".$seconds." sekund";

            return $result;
        }

        echo getMyDate();
    ?>
</body>
</html>