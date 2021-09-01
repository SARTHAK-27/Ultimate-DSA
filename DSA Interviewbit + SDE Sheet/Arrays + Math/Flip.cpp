vector<int> Solution::flip(string A)
{
    int n = A.length();
    vector<int> ans;
    int l = 0, curr = 0, lmax = -1, rmax = -1, max = 0;

    for (int i = 0; i < n; i++)
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
        else if (curr < 0)
        {
            curr = 0;
            l = i + 1;
        }
    }
    if (rmax == -1 || lmax == -1)
    {
        return vector<int>(0, 0);
    }

    ans.push_back(lmax + 1);
    ans.push_back(rmax + 1);

    return ans;
}
