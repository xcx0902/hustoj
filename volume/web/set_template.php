<?php
$OJ_CACHE_SHARE = false;
$cache_time = 0;
require_once('./include/db_info.inc.php');
require_once('./include/const.inc.php');
require_once('./include/memcache.php');
require_once('./include/setlang.php');
echo "<html>";
echo "<body>";
if (!isset($_SESSION[$OJ_NAME.'_'.'administrator'])) {
	echo "You aren't administrator!";
} else if (!isset($_GET['template'])) {
	echo "You don't set the template name!";
} else {
	$ori = $OJ_TEMPLATE;
	$new = $_GET['template'];
	echo "$ori -> $new ... <br>";
	echo "Executing sudo sed -i 's/$ori/$new/g' /home/judge/src/web/include/db_info.inc.php <br>";
	#shell_exec("sudo sed -i 's/$ori/$new/g' /home/judge/src/web/include/db_info.inc.php");
	$output = shell_exec("bash /home/judge/src/web/set_template.sh $ori $new 2>&1");
	echo "Output: $output <br>";
	echo "Success! You set the template to ".$_GET['template']."!";
}
echo "</body>";
?>

