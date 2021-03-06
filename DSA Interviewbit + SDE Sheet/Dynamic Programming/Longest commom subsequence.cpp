static int t[1006][1006];

int LCS(string X, string Y, int m, int n)
{
    for(int i=0; i<m+1; i++)
    {
        for(int j=0; j<n+1; j++)
        {
            if(i==0 || j==0)
            {
                t[i][j] = 0;
            }
        }
    }

    for(int i=1; i<m+1; i++)
    {
        for(int j=1; j<n+1; j++)
        {
            if(X[i-1] == Y[j-1])
            {
                t[i][j] = 1 + t[i-1][j-1];
            }
            else
            {
                t[i][j] = max(t[i-1][j] , t[i][j-1]);
            }
        }
    }
    return t[m][n];
}

int Solution::solve(string A, string B) 
{
    memset(t, -1, sizeof(t));
    int m = A.size();
    int n = B.size();
    int ans = LCS(A, B, m, n);

    return ans;
}
