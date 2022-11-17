<?php
include_once "abstract/paymenttypes.abstract.php";
include_once "classes/BuyProduct.class.php";

$buyProduct = new BuyProduct();
echo $buyProduct->getPayment();
