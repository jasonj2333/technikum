<?php
    include './includes/class-autoloader.inc.php';
    // include './classes/dbh.class.php';
    // include './classes/denstist.class.php';
    $dentist = new Dentist();
?>
<?php require_once 'header.php'; ?>
    <!-- Main Start -->
    <div class="container-fluid py-5 wow fadeInUp" data-wow-delay="0.1s">
        <div class="container">

            <div class="row g-5">
                <div class="col-lg-12">
                    <div class="section-title mb-4">
                        <h5 class="position-relative d-inline-block text-primary text-uppercase">Lista wizyt</h5>
                    </div>


                    <div class="row g-3">
                        <table class="table table-bordered table-striped">
                            <tr>
                                <th>Data</th>
                                <th>Godzina</th>
                                <th>Imię</th>
                                <th>Nazwisko</th>
                                <th>PESEL</th>
                                <th>Rodzaj wizyty</th>
                                <th>Ząb</th>
                                <th>Koszt</th>
                                <th>Operacje</th>
                            </tr>
                            <?php 
                                    $rows = $dentist->getAllVisits();
                                    foreach($rows as $row):
                            ?>
                                <tr>
                                    <td><?php echo $row['dataWizyty'] ?></td>
                                    <td><?php echo $row['godzinaWizyty'] ?></td>
                                    <td><?php echo $row['imie'] ?></td>
                                    <td><?php echo $row['nazwisko'] ?></td>
                                    <td><?php echo $row['PESEL'] ?></td>
                                    <td><?php echo $row['rodzajWizyty'] ?></td>
                                    <td><?php echo $row['zab'] ?></td>
                                    <td><?php echo $row['kosztWizyty'] ?> zł</td>
                                    <td class="text-center">
                                        
                                        <form style="display:inline-block"  class="delForm" action="./includes/visitDelete.php" method="post"><input type="hidden" name="id" value="<?php echo $row['id'] ?>">
                                        <button class="btn btn-danger delete">X</button>
                                        </form>
                                        
                                    </td>
                                    
                                </tr>
                            <?php endforeach; ?>
                        </table>
                    </div>    

                </div>

            </div>
        </div>
    </div>
    <!-- Main End -->

    

<?php require_once 'footer.php'; ?>
    <script>
        const delButton = document.querySelectorAll(".delete");
        delButton.forEach((button)=>{
            button.addEventListener("click", (e)=>{
                e.preventDefault();
                console.dir(button);
                if(confirm('Czy na pewno chcesz usunąć wizytę ?')){
                    button.parentNode.submit();
                }
            })
        })

    </script>
</body>

</html>