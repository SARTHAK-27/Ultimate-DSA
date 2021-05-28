class Solution
{
public:
    vector<int> spiralOrder(vector<vector<int>> &mat)
    {
        vector<int> ans;
        int r = mat.size();
        int c = mat[0].size();
        int x = 0, y = 0;
        int i;
        while (x < r && y < c)
        {
            for (i = y; i < c; i++)
            {
                ans.push_back(mat[x][i]);
            }
            x++;

            for (i = x; i < r; i++)
            {
                ans.push_back(mat[i][c - 1]);
            }
            c--;

            if (x < r)
            {
                for (i = c - 1; i >= y; i--)
                {
                    ans.push_back(mat[r - 1][i]);
                }
                r--;
            }

            if (y < c)
            {
                for (i = r - 1; i >= x; i--)
                {
                    ans.push_back(mat[i][y]);
                }
                y++;
            }
        }
        return ans;
    }
};