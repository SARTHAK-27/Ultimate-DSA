class Solution
{
public:
    vector<vector<int>> generateMatrix(int n)
    {
        //vector<vector<int>> mat;
        vector<vector<int>> mat(n, vector<int>(n));
        int r = n;
        int c = n;
        int x = 0, y = 0;
        int i;
        int count = 1;
        while (x < r && y < c)
        {
            for (i = y; i < c; i++)
            {
                mat[x][i] = count;
                count++;
            }
            x++;

            for (i = x; i < r; i++)
            {
                mat[i][c - 1] = count;
                count++;
            }
            c--;

            if (x < r)
            {
                for (i = c - 1; i >= y; i--)
                {
                    mat[r - 1][i] = count;
                    count++;
                }
                r--;
            }

            if (y < c)
            {
                for (i = r - 1; i >= x; i--)
                {
                    mat[i][y] = count;
                    count++;
                }
                y++;
            }
        }
        return mat;
    }
};