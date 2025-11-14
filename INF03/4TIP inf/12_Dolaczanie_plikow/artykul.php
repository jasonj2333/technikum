<?php require_once 'functions.php'; ?>
<!DOCTYPE html>
<html lang="pl">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Artykuł</title>
</head>
<body>
    <?php include './layout/naglowek.php'; ?>
    <article>
        <h1>Artykuł nr <?php echo $_GET['id']; ?></h1>
        <p>Lorem ipsum dolor sit amet consectetur adipisicing elit. Provident mollitia totam nulla deleniti dicta. Itaque ea architecto, labore, eum pariatur harum placeat impedit odio officia, nisi omnis aperiam dolorem eaque quos commodi reiciendis est consequatur nihil et? Tempore voluptate explicabo earum laborum, labore incidunt magni maxime natus illo consequuntur, optio blanditiis dignissimos similique doloribus accusamus assumenda adipisci commodi eius est quis quos sint, mollitia dolores! Possimus sint ipsum molestiae minima, repellat voluptas, ipsa porro fugiat facere doloremque et quam commodi aut id. Qui illum delectus laborum, et aliquid quasi. Atque alias voluptates in dolorum deleniti tenetur nam libero iusto expedita!</p>
        <p>Lorem ipsum dolor sit amet consectetur adipisicing elit. Laboriosam aliquid eaque quam, cupiditate earum et saepe obcaecati excepturi nostrum doloremque, dolore porro ducimus illum dolor consectetur delectus? Error, quibusdam nesciunt eum non placeat esse, molestiae expedita eaque eligendi temporibus culpa, unde praesentium. Aperiam expedita obcaecati blanditiis facilis aspernatur non odio!</p>
    </article>
    <?php include './layout/stopka.php'; ?>
</body>
</html>