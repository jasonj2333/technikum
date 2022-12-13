<?php require_once 'functions.php' ?>
<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta http-equiv="X-UA-Compatible" content="IE=edge">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Moja strona</title>
</head>
<body>
    <h1>Witaj na naszej stronie</h1>
    <p>Data: <?php echo teraz(); ?></p>
    
    <?php 
        $text = "Lorem ipsum dolor sit amet consectetur adipisicing elit. Quisquam fuga officiis natus voluptatibus in. Facere adipisci, porro architecto, iure sit totam odit nemo praesentium ipsa vero autem veniam accusantium dolore minus quos hic reprehenderit reiciendis veritatis aliquam consequuntur magni repudiandae laborum? Eaque, ea. Ducimus voluptate assumenda praesentium animi, eum aliquam sed aspernatur minus officia dolorem, eligendi magni veniam quae ipsum! Consequatur ut autem iure sequi, asperiores explicabo non voluptatum doloribus nesciunt libero tenetur at, obcaecati hic itaque ratione incidunt quod aut ipsum! Quisquam unde cumque officia saepe ad debitis, nostrum aliquid accusamus! Ad totam animi quidem suscipit eos explicabo recusandae praesentium repudiandae? Fuga labore veritatis hic quidem consequatur nulla veniam suscipit soluta at saepe quos ex accusantium facere dolorem sunt, quas libero eos provident nesciunt blanditiis dolores. Provident commodi cum ullam a deserunt delectus, ex iusto ducimus? Aliquam dolores, laudantium nobis suscipit corrupti veritatis sed quam excepturi sapiente. Vero autem recusandae consectetur modi illum sapiente! Possimus, ipsa dolorum commodi laborum repudiandae omnis aperiam corporis illo quia placeat sed impedit quaerat ducimus animi consequuntur unde expedita saepe facilis. Commodi modi at culpa, molestias impedit vitae porro, suscipit distinctio consequuntur ea illo magni! Quas ducimus mollitia cumque adipisci, cupiditate asperiores rerum! Culpa.";
        echo tnij($text, 100);
    ?>

    <?php 
        // if(file_exists('xyz'))
        //     if(is_file('xyz')) include_once 'reklama.php' ;
        include_once 'reklama.php' ;
    ?>
    <footer>
        <p>Stronę wykonał: 112131234213412</p>
    </footer>
</body>
</html>