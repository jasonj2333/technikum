<?php
class UsersController{
    private $action;
    private $argument;

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

    public function Index()
    {
        echo "Users controller";
    }

    public function Delete($id=null)
    {
        echo "Users controller - delete $id";
    }
}