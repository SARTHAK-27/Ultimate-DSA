class Solution
{
public:
    void sortColors(vector<int> &nums)
    {
        int n = nums.size();
        int n0 = 0, n1 = 0, n2 = n - 1;
        while (n1 <= n2)
        {
            if (nums[n1] == 0)
            {
                swap(nums[n1], nums[n0]);
                n0++;
                n1++;
            }
            else if (nums[n1] == 1)
            {
                n1++;
            }
            else if (nums[n1] == 2)
            {
                swap(nums[n1], nums[n2]);
                n2--;
            }
        }
    }
};