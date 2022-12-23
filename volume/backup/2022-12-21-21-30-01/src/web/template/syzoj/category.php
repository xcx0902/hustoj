<?php $show_title="$MSG_SOURCE - $OJ_NAME"; ?>
<?php include("template/$OJ_TEMPLATE/header.php");?>
<div class="padding">
    <div style="margin-top: 0px; margin-bottom: 14px; padding-bottom: 0px; " >
        <p class="transition visible">
           <h1 style="margin-left: 10px; display: inline-block; "><?php echo $MSG_SOURCE?></h1>
        </p>
        <div class="ui existing segment">
        <?php echo $view_category?>
    </div>
</div>
你可以使用 <code>/problemset.php?search=<标签名></code> 或者点击上面的链接访问拥有该标签的所有题目。
<?php include("template/$OJ_TEMPLATE/footer.php");?>
