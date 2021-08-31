void DFS(int i, int j, int n, int m, vector<vector<char>> &A)
{
    if (i < 0 || j < 0 || i >= n || j >= m || A[i][j] != 'O')
    {
        return;
    }
    A[i][j] = '#';

    DFS(i + 1, j, n, m, A);
    DFS(i - 1, j, n, m, A);
    DFS(i, j - 1, n, m, A);
    DFS(i, j + 1, n, m, A);
}

void Solution::solve(vector<vector<char>> &A)
{
    if (A.size() == 0)
        return;
    int n = A.size();
    int m = A[0].size();

    for (int i = 0; i < n; i++)
    {
        if (A[i][0] == 'O')
        {
            DFS(i, 0, n, m, A);
        }
        if (A[i][m - 1] == 'O')
        {
            DFS(i, m - 1, n, m, A);
        }
    }

    for (int j = 0; j < m; j++)
    {
        if (A[0][j] == 'O')
        {
            DFS(0, j, n, m, A);
        }
        if (A[n - 1][j] == 'O')
        {
            DFS(n - 1, j, n, m, A);
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (A[i][j] == '#')
            {
                A[i][j] = 'O';
            }
            else if (A[i][j] == 'O')
            {
                A[i][j] = 'X';
            }
        }
    }
}
