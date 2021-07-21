int Solution::hammingDistance(const vector<int> &A)
{
    long ans = 0, n = A.size();
    for (int i = 0; i < 32; i++)
    {
        int c = 0;
        for (int j = 0; j < n; j++)
        {
            if ((A[j] & (1 << i)))
            {
                c++;
            }
        }
        ans = ans + (c * (n - c) * 2);
    }
    return ans % 1000000007;
}