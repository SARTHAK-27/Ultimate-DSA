void dfs(int i, int j, int n, int m, vector<vector<int>> &A, vector<vector<int>> &vis)
{
    if (i < 0 || i >= n || j < 0 || j >= m)
    {
        return;
    }
    vis[i][j] = 1;

    if (i + 1 < n && vis[i + 1][j] == 0 && A[i][j] <= A[i + 1][j])
    {
        dfs(i + 1, j, n, m, A, vis);
    }
    if (i - 1 >= 0 && vis[i - 1][j] == 0 && A[i][j] <= A[i - 1][j])
    {
        dfs(i - 1, j, n, m, A, vis);
    }

    if (j + 1 < m && vis[i][j + 1] == 0 && A[i][j] <= A[i][j + 1])
    {
        dfs(i, j + 1, n, m, A, vis);
    }
    if (j - 1 >= 0 && vis[i][j - 1] == 0 && A[i][j] <= A[i][j - 1])
    {
        dfs(i, j - 1, n, m, A, vis);
    }
}

int Solution::solve(vector<vector<int>> &A)
{
    int n = A.size();
    int m = A[0].size();
    if (n == 0)
    {
        return 0;
    }

    vector<vector<int>> blue_vis(n, vector<int>(m, 0));
    vector<vector<int>> red_vis(n, vector<int>(m, 0));

    // Blue side
    for (int i = 0; i < n; i++)
    {
        dfs(i, 0, n, m, A, blue_vis);
    }
    for (int j = 0; j < m; j++)
    {
        dfs(0, j, n, m, A, blue_vis);
    }

    // Red side
    for (int i = 0; i < n; i++)
    {
        dfs(i, m - 1, n, m, A, red_vis);
    }
    for (int j = 0; j < m; j++)
    {
        dfs(n - 1, j, n, m, A, red_vis);
    }

    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (blue_vis[i][j] && red_vis[i][j])
            {
                ans++;
            }
        }
    }
    return ans;
}
