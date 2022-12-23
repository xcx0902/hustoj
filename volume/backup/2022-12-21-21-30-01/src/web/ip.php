<html>
	<head><title>Get Your IP Address - GXOJ</title></head>
	<body>
	<?php
	if (!empty($_SERVER['HTTP_CLIENT_IP'])) {
	    $ip_address = $_SERVER['HTTP_CLIENT_IP'];
	} elseif (!empty($_SERVER['HTTP_X_FORWARDED_FOR'])) {
		$ip_address = $_SERVER['HTTP_X_FORWARDED_FOR'];
	} else {
		$ip_address = $_SERVER['REMOTE_ADDR'];
	}
	echo gettype($ip_address).' ';
	echo $ip_address;
	?>
</html>
