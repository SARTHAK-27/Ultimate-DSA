class Solution
{
public:
    int majorityElement(vector<int> &nums)
    {
        int n = nums.size();
        if (n == 1 || n == 2)
        {
            return nums[0];
        }

        int c = 1, res = nums[0];
        for (int i = 1; i < n; i++)
        {
            if (nums[i] == res)
            {
                c++;
            }
            else
            {
                c--;
            }

            if (c == 0)
            {
                res = nums[i];
                c = 1;
            }
        }

        c = 0;
        for (int i = 0; i < n; i++)
        {
            if (nums[i] == res)
            {
                c++;
            }
        }

        if (c > n / 2)
        {
            return res;
        }
        return -1;
    }
};