vector<int> Solution::subUnsort(vector<int> &a)
{
    int n = a.size();
    int l = -1, r = -1;
    vector<int> ans;
    for (int i = 0; i < n; i++)
    {
        if (a[i] > a[i + 1])
        {
            l = i;
            break;
        }
    }
    for (int i = n - 1; i >= 0; i--)
    {
        if (a[i] < a[i - 1])
        {
            r = i;
            break;
        }
    }
    int minL = INT_MAX;
    int maxR = INT_MIN;
    for (int i = l; i <= r; i++)
    {
        minL = min(minL, a[i]);
        maxR = max(maxR, a[i]);
    }
    for (int i = 0; i <= l; i++)
    {
        if (a[i] > minL)
        {
            l = i;
        }
    }
    for (int i = r; i < n; i++)
    {
        if (a[i] < maxR)
        {
            r = i;
        }
    }
    if (l == -1 || r == -1)
    {
        ans.push_back(-1);
        return ans;
    }
    else
    {
        ans.push_back(l);
        ans.push_back(r);
        return ans;
    }
}