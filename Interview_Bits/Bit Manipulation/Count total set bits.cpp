int Solution::solve(int n)
{
    if (n == 0)
    {
        return 0;
    }
    int p = 1;
    while (pow(2, p) <= n)
    {
        p++;
    }
    p--;

    int cnt = pow(2, p - 1) * p + (n - pow(2, p) + 1) + solve(n - pow(2, p));

    return cnt % 1000000007;
}
