<?php 
    if(isset($_GET['id'])){
        $id = $_GET['id'];
        $conn = mysqli_connect("localhost", "root", "", "biblioteka");
        $query = "DELETE FROM ksiazki WHERE id=$id";
        mysqli_query($conn, $query);
        mysqli_close($conn); 
    }
    header("Location: index.php");