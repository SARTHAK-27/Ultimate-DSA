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
    void rotate(vector<vector<int>> &img)
    {
        int r = img.size();
        int c = img[0].size();
        for (int i = 0; i < r; i++)
        {
            for (int j = i; j < c; j++)
            {
                swap(img[i][j], img[j][i]);
            }
        }

        for (int i = 0; i < r; i++)
        {
            reverse(img[i]);
        }
    }
};