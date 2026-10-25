<?php
echo "<h2>Review Received</h2>";
echo "Username: " . htmlspecialchars($_POST['username']) . "<br>";
echo "Rating: " . htmlspecialchars($_POST['rating']) . "<br>";
echo "Review: " . htmlspecialchars($_POST['review']) . "<br>";
?>