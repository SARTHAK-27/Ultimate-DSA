class Solution
{
public:
    void reverse(vector<int> &v)
    {
        int i = 0, j = v.size() - 1;
        while (i < j)
        {
            swap(v[i], v[j]);
            i++;
            j--;
        }
    }

    void rotate(vector<vector<int>> &matrix)
    {
        int r = matrix.size();
        int c = matrix[0].size();
        for (int i = 0; i < r; i++)
        {
            for (int j = i; j < c; j++)
            {
                swap(matrix[i][j], matrix[j][i]);
            }
        }

        for (int i = 0; i < r; i++)
        {
            reverse(matrix[i]);
        }
    }
};