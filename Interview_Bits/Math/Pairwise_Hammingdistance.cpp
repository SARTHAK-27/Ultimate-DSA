int Solution::hammingDistance(const vector<int> &A)
{
    int mod = (int)1e9 + 7;
    int ans = 0;
    for (int i = 0; i < 31; i++)
    {
        long long z = 0, o = 0;
        for (int j = 0; j < A.size(); j++)
        {
            if ((A[j] >> i) & 1 == 1)
            {
                o++;
            }
            else
            {
                z++;
            }
        }
        ans = (ans + (z * o) % mod) % mod;
    }
    return (2 * ans) % mod;
}
