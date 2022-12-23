<?php
require_once('../include/db_info.inc.php');
$result = pdo_query("SELECT * FROM users");
#echo json_encode($result);
