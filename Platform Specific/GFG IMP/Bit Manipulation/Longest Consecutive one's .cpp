class Solution
{
public:
    int maxConsecutiveOnes(int N)
    {
        int c = 0;
        while (N != 0)
        {
            N = (N & (N << 1));
            c++;
        }
        return c;
    }
};