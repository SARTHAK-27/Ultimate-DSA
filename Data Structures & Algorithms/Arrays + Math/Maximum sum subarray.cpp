class Solution
{
public:
    int maxSubArray(vector<int> &nums)
    {
        int n = nums.size();
        int curr = 0;
        int maxsum = INT_MIN;
        for (int i = 0; i < n; i++)
        {
            curr += nums[i];
            if (curr > maxsum)
            {
                maxsum = curr;
            }
            if (curr < 0)
            {
                curr = 0;
            }
        }
        return maxsum;
    }
};