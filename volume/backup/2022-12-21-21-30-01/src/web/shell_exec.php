<html>
<head>
<title>
shell_exec test
</title>
<body>
<?php
$output = shell_exec("ifconfig");
echo $output;
?>
</body>
</html>
