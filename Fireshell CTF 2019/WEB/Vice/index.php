<?php
//require_once 'config.php';

class SHITS{
  private $url;
  private $method;
  private $addr;
  private $host;
  private $name;

  function __construct($method,$url){
    $this->method = $method;
    $this->url = $url;
  }

  function doit(){
    
    $this->host = @parse_url($this->url)['host'];
    $this->addr = @gethostbyname($this->host);
    $this->name = @gethostbyaddr($this->host);
    if($this->addr !== "127.0.0.1" || $this->name === false){
      $not = ['.txt','.php','.xml','.html','.','[',']'];
      foreach($not as $ext){
        $p = strpos($this->url,$ext);
        if($p){
          die(":)");
        }
      }
      $ch = curl_init();
      curl_setopt($ch,CURLOPT_URL,$this->url);
      curl_setopt($ch,CURLOPT_RETURNTRANSFER,true);

      $result = curl_exec($ch);
      echo $result;
    }else{
      die(":)");
    }
  }
  function __destruct(){
    if(in_array($this->method,array("doit"))){
 
      call_user_func_array(array($this,$this->method),array());
    }else{
      die(":)");
    }
  }
}
if(isset($_GET["gg"])) {
    @unserialize($_GET["gg"]);
} else {
    highlight_file(__FILE__);
}
