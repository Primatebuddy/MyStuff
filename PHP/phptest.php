<!DOCTYPE html>

<html lang="en">
<head> </head>

<script src=""></script>

<body>

<?php
//single line comments like this are reminiscent of C++. YAY!
//I like the single line comments.
echo "Hello PHP";
?>

<?php
/*this is a comment that spans
multiple lines, like in C. I love C so much!
*/


//what is cool about PHP is that I can write things in the PHP tags...like this:
echo "<div class='myclass'>this text is in a div.</div>";
?>

<div></div>

<div>***ANYWAY*** now its time to so some other interestin' things with PHP</div>
<div>When you see this page, this text below just looks like any other text.</div>
<?php
function MyFunction($mess) {
    echo $mess;
}

$txt = "<div>Hello. This is the message.</div>";
MyFunction($txt);
?>

<div>But really, the text is generated in PHP tags by the following code...</div>
<code>
<p> function MyFunction($mess) {
        echo $mess;
    }
</p>
    $txt = "<div>Hello. This is the message.</div>";
    MyFunction($txt);
</code>

<?php echo "I have added something here"; ?>

</body>
</html>
