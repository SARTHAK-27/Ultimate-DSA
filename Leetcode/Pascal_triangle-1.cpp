class Solution
{
public:
    vector<vector<int>> generate(int A)
    {
        vector<vector<int>> v(A);
        for (int i = 0; i < A; i++)
        {
            for (int j = 0; j <= i; j++)
            {
                v[i].push_back(1);
            }
        }
        int c;
        for (int i = 1; i < A; i++)
        {
            c = 1;
            for (int j = 1; j <= i; j++)
            {
                v[i][j] = c * (i - j + 1) / j;
                c = v[i][j];
            }
        }
        return v;
    }
};