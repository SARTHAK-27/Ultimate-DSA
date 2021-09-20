class Solution
{
public:
    int reverse(int A)
    {
        long int ans = 0;

        while (A != 0)
        {
            ans = ans * 10 + A % 10;
            A = A / 10;
        }
        if (ans > INT_MAX || ans < INT_MIN)
        {
            return 0;
        }
        return ans;
    }
};