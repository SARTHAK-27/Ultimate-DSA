class Solution
{
public:
    int mySqrt(int x)
    {
        int l = 1, r = x;

        while (l <= r)
        {
            int mid = l + (r - l) / 2;
            long sqr = long(mid) * long(mid);
            if (sqr == x)
            {
                return mid;
            }
            else if (sqr < x)
            {
                l = mid + 1;
            }
            else
            {
                r = mid - 1;
            }
        }
        return r;
    }
};