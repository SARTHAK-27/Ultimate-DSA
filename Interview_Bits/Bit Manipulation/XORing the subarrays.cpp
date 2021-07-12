int Solution::solve(vector<int> &A)
{
    int res = 0;
    int N = A.size();

    if (N % 2 == 0)
    {
        return 0;
    }
    for (int i = 0; i < N; i += 2)
    {
        res = res ^ A[i];
    }
    return res;
}
