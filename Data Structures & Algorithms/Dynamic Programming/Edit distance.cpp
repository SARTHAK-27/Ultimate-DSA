static int t[451][451];

int edit(string A, string B, int i, int j)
{
    if (i < 0)
    {
        return j + 1;
    }
    if (j < 0)
    {
        return i + 1;
    }
    if (t[i][j] != -1)
    {
        return t[i][j];
    }
    if (A[i] == B[j])
    {
        return t[i][j] = edit(A, B, i - 1, j - 1);
    }
    else
    {
        int ins = 1 + edit(A, B, i, j - 1);
        int del = 1 + edit(A, B, i - 1, j);
        int rep = 1 + edit(A, B, i - 1, j - 1);
        return t[i][j] = min(ins, min(del, rep));
    }
}

int Solution::minDistance(string A, string B)
{
    memset(t, -1, sizeof(t));
    int i = A.size();
    int j = B.size();
    int ans = edit(A, B, i - 1, j - 1);
    return ans;
}
