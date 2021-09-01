class Solution
{
public:
    vector<int> sortedSquares(vector<int> &nums)
    {
        int n = nums.size();
        int ans[n];
        int l = 0, r = n - 1;
        for (int i = n - 1; i >= 0; i--)
        {
            if (abs(nums[l]) > nums[r])
            {
                ans[i] = nums[l] * nums[l];
                l++;
            }
            else
            {
                ans[i] = nums[r] * nums[r];
                r--;
            }
        }
        for (int i = 0; i < n; i++)
        {
            nums[i] = ans[i];
        }
        return nums;
    }
};