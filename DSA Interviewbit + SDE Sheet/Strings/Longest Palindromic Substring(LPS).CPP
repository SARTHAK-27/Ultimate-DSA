string Solution::longestPalindrome(string str)
{
    int n = str.size();
    bool dp[n][n];
    memset(dp, 0, sizeof(dp));
    int maxlen = 1;
    for (int i = 0; i < n; i++)
    {
        dp[i][i] = 1;
    }

    int start = 0;
    for (int i = 0; i < n - 1; i++)
    {
        if (str[i] == str[i + 1])
        {
            dp[i][i + 1] = 1;
            start = i;
            maxlen = 2;
        }
    }

    for (int k = 3; k <= n; k++)
    {
        for (int i = 0; i < n - k + 1; i++)
        {
            int j = i + k - 1;
            if (dp[i + 1][j - 1] == 1 && str[i] == str[j])
            {
                dp[i][j] = 1;
                if (k > maxlen)
                {
                    start = i;
                    maxlen = k;
                }
            }
        }
    }
    string ans = "";
    for (int i = start; i <= start + maxlen - 1; i++)
    {
        ans += str[i];
    }
    return ans;
}
