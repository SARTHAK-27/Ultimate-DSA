int Solution::sqrt(int A)
{
    int l = 1, r = A;
    while (l <= r)
    {
        int mid = l + (r - l) / 2;
        long sq = long(mid) * long(mid);
        if (sq == A)
        {
            return mid;
        }
        else if (sq < A)
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
