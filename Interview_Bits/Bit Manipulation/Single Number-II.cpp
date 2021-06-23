bool GetBit(int n, int pos)
{
    return ((n & (1 << pos)) != 0);
}

int SetBit(int n, int pos)
{
    return (n | (1 << pos));
}

int Solution::singleNumber(const vector<int> &nums)
{
    int n = nums.size();
    int ans = 0;
    for (int i = 0; i < 32; i++)
    {
        int sum = 0;
        for (int j = 0; j < n; j++)
        {
            if (GetBit(nums[j], i))
            {
                sum++;
            }
        }
        if (sum % 3 != 0)
        {
            ans = SetBit(ans, i);
        }
    }
    return ans;
}
