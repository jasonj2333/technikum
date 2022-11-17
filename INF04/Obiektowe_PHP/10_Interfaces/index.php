<?php
//Interfaces
interface PaymentInterface{
    public function payNow();
}

class Paypal implements PaymentInterface {
    public function payNow(){
        echo 'Paypal';
    }
}

class Visa implements PaymentInterface{
    public function payNow(){
        echo 'Visa';
    }
}

class Cash implements PaymentInterface{
    public function payNow(){
        echo 'Cash';
    }
}

class BuyProduct{
    public function pay(PaymentInterface $paymentType){
        $paymentType->payNow();
    }
}

$paymentType = new Paypal();
$buyProduct = new BuyProduct();
$buyProduct->pay($paymentType);
