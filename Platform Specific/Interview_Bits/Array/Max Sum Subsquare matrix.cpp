int Solution::solve(vector<vector<int>> &a, int b)
{
    int r = a.size();
    int c = a[0].size();
    vector<vector<int>> dp(r + 1, vector<int>(c + 1, 0));

    for (int i = 1; i <= r; i++)
    {
        for (int j = 1; j <= c; j++)
        {
            dp[i][j] = dp[i - 1][j] + dp[i][j - 1] + dp[i - 1][j - 1] + a[i - 1][j - 1];
        }
    }

    int ans = INT_MIN;

    for (int i = 1; i <= r; i++)
    {
        for (int j = 1; j <= c; j++)
        {
            if (i >= b && j >= b)
            {
                int sq = dp[i][j] + dp[i - b][j] + dp[i][j - b] + dp[i - b][j - b];
                ans = max(ans, sq);
            }
        }
    }
    return ans;
}