<!DOCTYPE html>
<html lang="pl">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Bloki naprzemienne</title>
</head>
<body>
    <?php
        $wersja = 0;
    ?>
    <h1>Moja strona</h1>

    <?php if($wersja == 1): ?>
        <h2>Wersja 1</h2>
        <p>Lorem ipsum dolor, sit amet consectetur adipisicing elit. Pariatur sint praesentium iusto molestias quae, totam hic velit accusantium obcaecati, nulla culpa reiciendis? Nihil, eligendi, perferendis aspernatur eos aliquam suscipit iste, unde blanditiis nisi optio animi assumenda reiciendis. Perferendis, voluptatibus corporis saepe quas nobis, animi eos repellendus quaerat, minima consectetur ut!</p>
    <?php elseif($wersja == 2): ?>
        <h2>Wersja 2</h2>
        <p>Lorem ipsum, dolor sit amet consectetur adipisicing elit. Veniam dolorem labore natus repellat neque laboriosam eligendi tempora praesentium nisi rerum explicabo, molestiae, qui officia, porro consectetur libero minus! Deleniti quibusdam magni molestiae explicabo earum facere ipsam laborum, delectus distinctio, similique ab deserunt perspiciatis quis dolor est natus aspernatur nam qui!</p>
          
    <?php else: ?>
        <h2>Strona w budowie!</h2>
    <?php endif; ?>

    <p>Dalsza część stron </p>
</body>
</html>