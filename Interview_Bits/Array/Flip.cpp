vector<int> Solution::flip(string A)
{
    int n = A.length();
    int l = 0, lmax = -1, rmax = -1;
    int curr = 0, i, max = 0;
    for (i = 0; i < n; i++)
    {
        if (A[i] == '0')
        {
            curr++;
        }
        else
        {
            curr--;
        }
        if (curr > max)
        {
            max = curr;
            lmax = l;
            rmax = i;
        }
        if (curr < 0)
        {
            curr = 0;
            l = i + 1;
        }
    }
    if (rmax == -1 || lmax == -1)
    {
        return vector<int>(0, 0);
    }
    vector<int> v;
    v.push_back(lmax + 1);
    v.push_back(rmax + 1);
    return v;
}
