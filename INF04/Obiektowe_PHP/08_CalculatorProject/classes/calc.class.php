<?php

class Calc{
    private $operator;
    private $num1;
    private $num2;

    public function __construct(string $operator, int $num1, int $num2)
    {
        $this->operator = $operator;
        $this->num1 = $num1;
        $this->num2 = $num2;
    }

    public function calculator()
    {
        switch ($this->operator) {
            case 'add':
                return $this->num1 + $this->num2;
                break;
            case 'sub':
                return $this->num1 - $this->num2;
                break;
            case 'div':
                if($this->num2 == 0) return "Error! Division by zero!";
                return $this->num1 / $this->num2;
                break;
            case 'mul':
                return $this->num1 * $this->num2;
                break;
            default:
                echo "Error!";
                break;
        }
    }
}