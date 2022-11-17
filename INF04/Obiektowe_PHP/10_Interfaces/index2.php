<?php
//Interfaces

use Paypal as GlobalPaypal;

interface PaymentInterface{
    public function payNow();
    public function paymentProcess();
}

interface LoginInterface{
    public function loginFirst();
}

class Paypal implements PaymentInterface, LoginInterface {
    public function loginFirst(){
        echo 'Logged';
    }
    public function payNow(){
        echo 'Paypal';
    }
    public function paymentProcess(){
        $this->loginFirst();
        $this->payNow();
    }
}

class Visa implements PaymentInterface{
    public function payNow(){
        echo 'Visa';
    }
    public function paymentProcess(){
        $this->payNow();
    }
}

class Cash implements PaymentInterface{
    public function payNow(){
        echo 'Cash';
    }
    public function paymentProcess(){
        $this->payNow();
    }
}

class BuyProduct{
    public function pay(PaymentInterface $paymentType){
        $paymentType->paymentProcess();
    }
}

$paymentType = new Paypal();
$buyProduct = new BuyProduct();
$buyProduct->pay($paymentType);
