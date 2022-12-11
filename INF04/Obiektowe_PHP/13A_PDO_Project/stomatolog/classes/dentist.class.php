<?php

class Dentist extends Dbh {

     public function getAllVisits()
     {
          $sql = "SELECT imie, nazwisko, PESEL, dataWizyty, godzinaWizyty, rodzajWizyty, zab, kosztWizyty, id FROM pacjenci p INNER JOIN wizyty w ON p.nrPacjenta = w.nrPacjenta ORDER BY dataWizyty DESC";
          $pdo = $this->connect();
          $stmt = $pdo->query($sql);
          return $stmt->fetchAll();    
     }
     

     public function getPatients()
     { 
         $sql = "SELECT * FROM pacjenci";
         $pdo = $this->connect();
         $stmt = $pdo->query($sql);
         return $stmt->fetchAll();    
     }


    public function deleteVisit($id)
    {
          $sql = "DELETE FROM wizyty WHERE id=?";
          $stmt= $this->connect()->prepare($sql);
          $stmt->execute([$id]);    
    }

}