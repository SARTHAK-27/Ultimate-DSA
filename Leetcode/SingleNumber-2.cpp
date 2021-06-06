class Solution
{
public:
    int SetBit(int n, int pos)
    {
        return ((n & (1 << pos)) != 0);
    }
    vector<int> singleNumber(vector<int> &nums)
    {
        vector<int> ans;
        int n = nums.size();
        int xorsum = 0;
        for (int i = 0; i < n; i++)
        {
            xorsum = xorsum ^ nums[i];
        }
        int tempxor = xorsum;
        int setbit = 0, pos = 0;
        while (setbit != 1)
        {
            setbit = xorsum & 1;
            pos++;
            xorsum = xorsum >> 1;
        }
        int newxor = 0;
        for (int i = 0; i < n; i++)
        {
            if (SetBit(nums[i], pos - 1))
            {
                newxor ^= nums[i];
            }
        }
        ans.push_back(newxor);
        ans.push_back(newxor ^ tempxor);
        return ans;
    }
};