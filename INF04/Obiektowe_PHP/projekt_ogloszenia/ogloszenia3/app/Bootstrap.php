<?php 

class Bootstrap{
    private $controller;
    private $action;
    private $argument;
    private $request;

    public function __construct($request)
    {
        $this->request = str_replace(ROOT_DOMAIN, "/", $request);
        $this->HomeController = HOME_CONTROLLER;
        $this->action = 'index';
        $this->argument = '';
        $this->processRequest();
    }

    public function createController(){
        return $this->controller;
    }

    private function processRequest(){
        if($this->request == '/'){
            $this->controller = new $this->HomeController($this->action, $this->argument);
            return;
        }

        $components = $this->splitURL();

        try {
            $controllerName = ucfirst(strtolower($components[0]));
            $controllerClass = $controllerName ."Controller";
            if(!class_exists($controllerClass)){
                throw new Exception("Nie znaleziono klasy kontrolera");
            }
            if(isset($components[1])) $this->action = $components[1];
            if(isset($components[2])) $this->argument = $components[2];
            $this->controller = new $controllerClass($this->action, $this->argument);
        } catch (Exception $e) {
            $this->action = 'error';
            $this->argument = $e->getMessage();
            $this->controller = new $this->HomeController($this->action, $this->argument);
        }
    }

    private function splitURL(){
        return explode("/", filter_var(trim($this->request, "/"), FILTER_SANITIZE_URL));
    }
}