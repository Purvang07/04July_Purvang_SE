// Function to format the follower count
function formatFollowersCount(count)
{
    // If the count is 1,000 or more, convert it to K
    if (count >= 1000 && count < 1000000)
    {
        return (count / 1000).toFixed(1) + "K";
    }

    // If the count is 1,000,000 or more, convert it to M
    else if (count >= 1000000)
    {
        return (count / 1000000).toFixed(1) + "M";
    }

    // If the count is below 1,000, return it as it is
    else
    {
        return count.toString();
    }
}

// Calling the function
console.log(formatFollowersCount(1500));
console.log(formatFollowersCount(1200000));
console.log(formatFollowersCount(850));