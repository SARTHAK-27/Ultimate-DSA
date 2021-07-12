int reverse(int n)
{
    int r = 0;
    while (n)
    {
        r <<= 1;
        r |= n & 1;
        n = n >> 1;
    }
    return r;
}

int Solution::solve(int n)
{
    if (n == 1)
    {
        return 1;
    }
    int ans, count = 1, len = 1;
    int p;

    while (count < n)
    {
        len++;
        if (len % 2 == 0)
        {
            p = (len - 2) / 2;
        }
        else
        {
            p = (len) / 2;
        }
        count += pow(2, p);
    }
    count -= pow(2, p);

    ans = pow(2, len - 1);
    int next = n - count - 1;
    ans |= next * (int)pow(2, len / 2);
    ans |= reverse(ans);
    return ans;
}
