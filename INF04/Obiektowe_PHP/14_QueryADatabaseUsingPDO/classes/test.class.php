<?php

class Test extends Dbh {
    public function getUsers()
    {
         $sql = "SELECT * FROM users";
         $stmt = $this->connect()->query($sql);
         while($row = $stmt->fetch()){
            echo $row['user_firstname'] .' '. $row['user_lastname'] . ' '. $row['user_dateofbirth'] . '<br>';
         }
    }

    public function getUsersStmt($firstname, $lastname)
    {
         $sql = "SELECT * FROM users WHERE user_firstname = ? AND user_lastname = ?";
         $stmt = $this->connect()->prepare($sql);
         $stmt->execute([$firstname, $lastname]);
         $names = $stmt->fetchAll();

         foreach($names as $name){
            echo $name['user_firstname'] .' '. $name['user_lastname'] . ' '. $name['user_dateofbirth'] . '<br>';
         }
    }

    public function setUsersStmt($firstname, $lastname, $dateofbirth)
    {
         $sql = "INSERT INTO users(user_firstname, user_lastname, user_dateofbirth) VALUES (?, ?, ?)";
         $stmt = $this->connect()->prepare($sql);
         $stmt->execute([$firstname, $lastname, $dateofbirth]);
         
    }
}