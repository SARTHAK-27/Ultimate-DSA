int Solution::solve(int n, vector<int> &B)
{
    int ans = 0;
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += B[i];
    }
    if (sum % 3 != 0)
    {
        return 0;
    }

    int s = sum / 3;
    int ss = 0;
    int cnt[n] = {0};

    for (int i = n - 1; i > 0; i--)
    {
        ss += B[i];
        if (ss == s)
        {
            cnt[i] = 1;
        }
    }

    for (int i = n - 2; i > 0; i--)
    {
        cnt[i] += cnt[i + 1]; // Cumulative sum
    }
    ss = 0;

    for (int i = 0; i + 2 < n; i++)
    {
        ss += B[i];
        if (ss == s)
        {
            ans += cnt[i + 2];
        }
    }
    return ans;
}

// Leetocde

class Solution
{
public:
    bool canThreePartsEqualSum(vector<int> &arr)
    {
        int sum = 0;
        int ss = 0;
        int n = arr.size();
        for (int i = 0; i < n; i++)
        {
            sum += arr[i];
        }

        if (sum % 3 != 0)
            return false;
        int pre = 0;
        int c = 0;
        for (int i = 0; i < n; i++)
        {
            pre += arr[i];
            if (pre == sum / 3)
            {
                c++;
                pre = 0;
            }
        }
        if (c >= 3)
            return true;
        return false;
    }
};