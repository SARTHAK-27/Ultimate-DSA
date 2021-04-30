vector<int> Solution::nextPermutation(vector<int> &a)
{
    int n = a.size();
    int i, j;
    for (i = n - 2; i >= 0; i--)
    {
        if (a[i] < a[i + 1])
            break;
    }
    if (i == -1)
    {
        reverse(a.begin(), a.end());
        return a;
    }
    else
    {
        for (j = i + 1; j < n; j++)
        {
            if (a[j] <= a[i])
            {
                break;
            }
        }
        swap(a[i], a[j - 1]);
        sort(a.begin() + i + 1, a.end());
        return a;
    }
}
