void DFS(int i, int j, vector<string> &mat, int r, int c)
{
    if (i < 0 || i >= r || j < 0 || j >= c || mat[i][j] != 'X')
    {
        return;
    }
    mat[i][j] = 'O';
    DFS(i + 1, j, mat, r, c);
    DFS(i - 1, j, mat, r, c);
    DFS(i, j + 1, mat, r, c);
    DFS(i, j - 1, mat, r, c);
}

int Solution::black(vector<string> &A)
{
    vector<string> mat;
    mat = A;
    int r = mat.size();
    int c = mat[0].size();

    int count = 0;
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            if (mat[i][j] == 'X')
            {
                DFS(i, j, mat, r, c);
                count++;
            }
        }
    }
    return count;
}
