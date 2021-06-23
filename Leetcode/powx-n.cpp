class Solution
{
public:
    double myPow(double x, int m)
    {
        double ans = 1;
        long long int n = m;
        if (n == 0)
        {
            return 1;
        }
        if (n < 0)
        {
            n = -n;
            x = 1 / x;
        }
        while (n > 0)
        {
            if (n % 2 == 0)
            {
                x = (x * x);
                n = n / 2;
            }
            else
            {
                ans = ans * x;
                n--;
            }
        }
        return ans;
    }
};