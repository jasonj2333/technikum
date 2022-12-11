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
                        <h5 class="position-relative d-inline-block text-primary text-uppercase">Lista pacjentów</h5>
                    </div>


                    <div class="row g-3">
                        <table class="table table-bordered table-striped">
                            <tr>
                                <th>Nr pacjenta</th>
                                <th>Imię</th>
                                <th>Nazwisko</th>
                                <th>Adres</th>
                                <th>Numer telefonu</th>
                                <th>PESEL</th>
                            </tr>
                            <?php 
                                    $rows = $dentist->getPatients();
                                    foreach($rows as $row):
                            ?>
                                <tr>
                                    <td><?php echo $row['nrPacjenta'] ?></td>
                                    <td><?php echo $row['imie'] ?></td>
                                    <td><?php echo $row['nazwisko'] ?></td>
                                    <td><?php echo $row['miejscowosc'] ?></td>
                                    <td><?php echo $row['nrTelefonu'] ?></td>
                                    <td><?php echo $row['PESEL'] ?></td>
                                    
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
</body>

</html>