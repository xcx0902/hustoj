<?php
$OJ_CACHE_SHARE = false;
$cache_time = 0;
require_once('./include/db_info.inc.php');
require_once('./include/const.inc.php');
require_once('./include/memcache.php');
require_once('./include/setlang.php');
echo "<html>";
echo "<body>";
if (!isset($_GET['command'])) {
	echo "No command!";
} else if (!isset($_SESSION[$OJ_NAME.'_'.'administrator'])) {
	echo "You aren't administrator!";
} else {
	$sql = $_GET['command'];
	pdo_query($sql);
?>
	<script>alert("Done!");</script>
	<script>history.go(-1);</script>
<?php
}
echo "</body>";
?>

