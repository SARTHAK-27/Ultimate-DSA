int Solution::solve(int n, vector<int> &a)
{
    int cnt[n] = {0}, s = 0;
    for (int i = 0; i < n; i++)
    {
        s += a[i]; // Sum of all elements
    }

    if (s % 3 != 0)
    {
        return 0; // To divide into 3 equal sums vector sum needs to be divisible by 3
    }

    s /= 3; // Sum of each part

    int ss = 0;

    for (int i = n - 1; i >= 0; i--)
    {
        ss += a[i];
        if (ss == s)
        {
            cnt[i] = 1;
        }
    }

    // Cumulative sum

    for (int i = n - 2; i >= 0; i--)
    {
        cnt[i] += cnt[i + 1];
    }

    // Calculate ans using original & cumulative sum array

    int ans = 0;
    ss = 0;

    for (int i = 0; i + 2 < n; i++)
    {
        ss += a[i];
        if (ss == s)
        {
            ans += cnt[i + 2];
        }
    }
    return ans;
}
