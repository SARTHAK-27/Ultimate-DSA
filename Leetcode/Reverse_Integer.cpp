class Solution
{
public:
    int reverse(int A)
    {
        long long res = 0;
        while (A)
        {
            res = res * 10 + A % 10;
            if (res > INT_MAX || res < INT_MIN)
            {
                return 0;
            }
            A = A / 10;
        }
        return res;
    }
};