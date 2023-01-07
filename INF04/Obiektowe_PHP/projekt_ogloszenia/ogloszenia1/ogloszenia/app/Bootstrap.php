<?php 

class Bootstrap{
    private $controller;
    private $action;
    private $argument;
    private $request;

    public function __construct($request)
    {
        $this->request = str_replace(ROOT_DOMAIN, "/". $request);
        $this->HomeController = HOME_CONTROLLER;
        $this->action = 'index';
        $this->argument = '';
        $this->processRequest();
    }

    private function processRequest(){
        if($this->request == '/'){
            $this->controller = new $this->HomeController($this->action, $this->argument);
            return;
        }
    }
}