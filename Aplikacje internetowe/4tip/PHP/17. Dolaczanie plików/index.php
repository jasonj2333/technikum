<?php require_once 'wiadomosci.php';  ?>

<?php include_once 'layout\header.php'; ?>
    <main>
        <h2>Wiadomości</h2>
        <?php 
            foreach ($news as $wiadomosc) {
                echo "<h3> $wiadomosc[0] </h3>";
                echo "<p> $wiadomosc[1] </p>";
            }
        ?>
    </main>
    <?php include_once 'layout\pogoda.php'; ?>  
<?php include_once 'layout\footer.php'; ?>  
</body>
</html>