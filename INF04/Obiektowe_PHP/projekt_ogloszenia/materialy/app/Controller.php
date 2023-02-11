<?php

abstract class Controller{
    protected $action;
    protected $argument;

    public function __construct($action, $argument=null){
        $this->action = $action;
        $this->argument = $argument;
    }

    public function executeAction()
    {
        return $this->argument == null ? 
            $this->{$this->action}() : 
            $this->{$this->action}($this->argument);
    }

    protected function returnView($view, $data=null, $isChildView = true)
    {
       $view = 'views/'.$view.'.php';
       $data_view = $data;
       if($isChildView){
            require('views/main.php');
        } else {
            require($view);
        }
    }

    protected function redirect($controller, $action = null)
    {
        $url = ROOT_URL. $controller;
        if(!empty($action)) $url .= "/$action";
        header("Location:$url");
    }
}