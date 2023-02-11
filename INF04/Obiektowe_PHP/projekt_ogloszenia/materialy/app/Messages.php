<?php
class Messages{
	public static function setMsg($text, $type){
		if($type == 'error'){
			$_SESSION['errorMsg'] = $text;
		} else {
			$_SESSION['successMsg'] = $text;
		}
	}

	public static function display(){
		if(isset($_SESSION['errorMsg'])){
			echo '<div class="alert alert-danger alert-dismissible fade show">'.$_SESSION['errorMsg'].'<button type="button" class="btn-close" data-bs-dismiss="alert" aria-label="Close"></button></div>';
			unset($_SESSION['errorMsg']);
		}

		if(isset($_SESSION['successMsg'])){
			echo '<div class="alert alert-success alert-dismissible fade show">'.$_SESSION['successMsg'].'<button type="button" class="btn-close" data-bs-dismiss="alert" aria-label="Close"></button></div>';
			unset($_SESSION['successMsg']);
		}
	}
}