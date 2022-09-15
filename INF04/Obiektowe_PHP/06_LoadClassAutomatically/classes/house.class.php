<?php 
class House{
    //Properties
   private $street;
   private $number;

   //Methods
   public function __construct($street, $number)
   {
        $this->street = $street;
        $this->number = $number;
   }

   public function getAddress()
   {
        return $this->street . ' ' . $this->number;
   }

    
}





