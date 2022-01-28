int FindMaxSum(vector<int> arr, int n)
{
    vector<int> dp(n);
    if (n == 1)
    {
        return arr[0];
    }
    else if (n == 2)
    {
        return max(arr[0], arr[1]);
    }
    else if (n == 3)
    {
        dp[0] = arr[0];
        dp[1] = arr[1];
        dp[2] = arr[2] + arr[0];
        return max(dp[2], dp[0]);
    }
    else
    {
        dp[0] = arr[0];
        dp[1] = arr[1];
        dp[2] = arr[2] + arr[0];
        for (int i = 3; i < n; i++)
        {
            dp[i] = arr[i] + max(dp[i - 2], dp[i - 3]);
        }
        return max(dp[n - 1], dp[n - 2]);
    }
}