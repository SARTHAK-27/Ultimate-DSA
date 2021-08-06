int dp[1001][1001];
class Solution
{
public:
    int LCS(string x, string y)
    {
        int n = x.length();
        int m = y.length();
        for (int i = 0; i < n + 1; i++)
        {
            for (int j = 0; j < m + 1; j++)
            {
                if (i == 0 || j == 0)
                {
                    dp[i][j] = 0;
                }
            }
        }

        for (int i = 1; i < n + 1; i++)
        {
            for (int j = 1; j < m + 1; j++)
            {
                if (x[i - 1] == y[j - 1])
                {
                    dp[i][j] = 1 + dp[i - 1][j - 1];
                }
                else
                {
                    dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
                }
            }
        }

        return dp[n][m];
    }

    int minInsertions(string A)
    {
        int len = A.length();
        string B = "";
        for (int i = len - 1; i >= 0; i--)
        {
            B += A[i];
        }
        int len_lps = LCS(A, B);

        return len - len_lps;
    }
};
