<?php
/*
function url_exists($url)
{
$head = @get_headers($url);
return is_array($head) ? true : false;
}

function url_exists($url)
{
return file_get_contents($url,0,null,0,1) ? true : false;
}

function url_exists($url)
{
$ch = curl_init();
curl_setopt($ch, CURLOPT_URL,$url);
curl_setopt($ch, CURLOPT_NOBODY, 1); // 不下载
curl_setopt($ch, CURLOPT_FAILONERROR, 1);
curl_setopt($ch, CURLOPT_RETURNTRANSFER, 1);
return (curl_exec($ch)!=false) ? true : false;
}

function url_exists($url)
{
$array = get_headers($url, 1);
if (preg_match('/200/', $array[0]) return true;
else return false;
}
*/

function check($str) {
$ok=array("200","201","202","203","204","205","206","207","300","301","302","303","304","305","306","307","308");
//print_r($ok);
foreach($ok as $x){
 if(strstr($str,$x)){
  return true;
 }
}
return false;
}

function url_exists($url,$debug) {
$hdrs = get_headers($url);
if($debug){echo '<pre>';print_r($hdrs);echo '</pre><br>';}
return is_array($hdrs) ? check($hdrs[0]) : false;
}

$q = $_POST['url'];
if (url_exists($q,1)) {
echo "url $q exists";
} else {
echo "url $q not exists";
}
?>
