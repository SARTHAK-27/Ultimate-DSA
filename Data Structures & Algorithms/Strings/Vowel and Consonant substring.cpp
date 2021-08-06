int Solution::solve(string A)
{
    int mod = 1e9 + 7;
    int c = 0, v = 0, sc_c = 0, sc_v = 0;
    int n = A.length();
    for (int i = 0; i < n; i++)
    {
        if (A[i] == 'a' || A[i] == 'e' || A[i] == 'i' || A[i] == 'o' || A[i] == 'u')
        {
            v++;
            sc_c += c;
        }
        else
        {
            c++;
            sc_v += v;
        }
    }
    return (sc_c + sc_v) % mod;
}
