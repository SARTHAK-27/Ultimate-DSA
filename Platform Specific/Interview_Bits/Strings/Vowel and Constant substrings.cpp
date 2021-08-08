int Solution::solve(string A)
{
    vector<int> c(A.size(), 0);
    vector<int> v(A.size(), 0);
    int n = A.size();
    if (A[n - 1] == 'a' || A[n - 1] == 'e' || A[n - 1] == 'i' || A[n - 1] == 'o' || A[n - 1] == 'u')
        v[n - 1] = 1;
    else
        c[n - 1] = 1;

    for (int i = n - 2; i >= 0; i--)
    {
        if (A[i] == 'a' || A[i] == 'e' || A[i] == 'i' || A[i] == 'o' || A[i] == 'u')
        {
            v[i] = 1 + v[i + 1];
            c[i] = c[i + 1];
        }
        else
        {
            c[i] = 1 + c[i + 1];
            v[i] = v[i + 1];
        }
    }
    int count = 0;
    for (int i = 0; i < A.size(); i++)
    {
        if (A[i] == 'a' || A[i] == 'e' || A[i] == 'i' || A[i] == 'o' || A[i] == 'u')
            count = (count + c[i]) % 1000000007;
        else
            count = (count + v[i]) % 1000000007;
    }

    return count;
}
