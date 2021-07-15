vector<int> Solution::solve(vector<int> &A)
{
    int n = A.size();
    int l = 0, r = n - 1;
    int ans[n];

    for (int i = n - 1; i >= 0; i--)
    {
        if (abs(A[l]) > A[r])
        {
            ans[i] = A[l] * A[l];
            l++;
        }
        else
        {
            ans[i] = A[r] * A[r];
            r--;
        }
    }

    for (int i = 0; i < n; i++)
    {
        A[i] = ans[i];
    }
    return A;
}
