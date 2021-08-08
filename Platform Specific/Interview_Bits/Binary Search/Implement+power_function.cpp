int Solution::pow(int x, int n, int p)
{
    if (n == 0)
    {
        return 1 % p;
    }
    long long ans = 1, base = x;
    while (n > 0)
    {
        if (n % 2 == 0)
        {
            base = (base * base) % p;
            n = n / 2;
        }
        else
        {
            ans = (ans * base) % p;
            n--;
        }
    }
    if (ans < 0)
    {
        ans = (ans + p) % p;
    }
    return ans;
}