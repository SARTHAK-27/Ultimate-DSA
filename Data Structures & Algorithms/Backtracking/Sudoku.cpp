bool isvalid(vector<vector<char>> &A, int r, int c, int x)
{
    for (int i = 0; i < 9; i++)
    {
        if (A[i][c] == x)
        {
            return false;
        }
        if (A[r][i] == x)
        {
            return false;
        }
        if (A[3 * (r / 3) + i / 3][3 * (c / 3) + i % 3] == x)
        {
            return false;
        }
    }
    return true;
}

bool solve(vector<vector<char>> &A)
{
    for (int r = 0; r < A.size(); r++)
    {
        for (int c = 0; c < A[0].size(); c++)
        {
            if (A[r][c] == '.')
            {
                for (char x = '1'; x <= '9'; x++)
                {
                    if (isvalid(A, r, c, x))
                    {
                        A[r][c] = x;
                        if (solve(A))
                        {
                            return true;
                        }
                        else
                        {
                            A[r][c] = '.';
                        }
                    }
                }
                return false;
            }
        }
    }
    return true;
}

void Solution::solveSudoku(vector<vector<char>> &A)
{
    solve(A);
}
