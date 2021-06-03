int Solution::searchMatrix(vector<vector<int>> &A, int B)
{
    int r = A.size();
    int c = A[0].size();
    int i = 0, j = c - 1;
    while (i >= 0 && i < r && j >= 0 && j < c)
    {
        if (A[i][j] == B)
        {
            return 1;
        }
        else if (A[i][j] > B)
        {
            j--;
        }
        else
        {
            i++;
        }
    }
    return 0;
}
