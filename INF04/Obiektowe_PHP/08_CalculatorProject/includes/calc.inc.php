<?php
    // declare(strict_types = 1);
    //include './class-autoloader.inc.php';
    if(isset($_POST['operator'])){
        $operator = $_POST['operator'];
        $num1 = $_POST['num1'];
        $num2 = $_POST['num2'];

        $operators = [
            'add' => '+',
            'sub' => '-',
            'div' => '/',
            'mul' => '*',
        ];

        $calc = new Calc($operator, (int)$num1, (int)$num2);

        try {
            $result =  $calc->calculator();
            $operation = $num1.' '.$operators[$operator].' '.$num2.' = ';
            $result = $operation.$result;
        } catch (TypeError $e) {
            $result = "Error!: ".$e->getMessage();
        }
    }
        

?>