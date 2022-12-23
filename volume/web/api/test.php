<?php
if (!isset($_GET['a']) || !isset($_GET['b'])) {
	echo "未指定参数 a 或 b！";
} else {
	$a = $_GET['a'];
	$b = $_GET['b'];
	$c = $a + $b;
	echo strval($a)." + ".strval($b)." = ".strval($c);
}
