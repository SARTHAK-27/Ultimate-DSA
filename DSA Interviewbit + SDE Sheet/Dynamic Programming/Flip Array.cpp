int Solution::solve(const vector<int> &A) 
{
    int n = A.size();
    int sum = 0;
    for(int i=0; i<n; i++)
    {
        sum += A[i];
    }
    sum = sum/2;
    vector<int> dp(sum+1 , INT_MAX);
    dp[0] = 0;
    for(int i=0; i<n; i++)
    {
        for(int j=sum; j>=A[i]; j--)
        {
            if(dp[j - A[i]] != INT_MAX)
            {
                dp[j] = min(dp[j] , dp[j-A[i]]+1);
            }
        }
    }
    for(int i=sum; i>=0; i--)
    {
        if(dp[i] != INT_MAX)
        {
            return dp[i];
        }
    }
}
