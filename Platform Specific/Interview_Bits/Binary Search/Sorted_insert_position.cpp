int Solution::searchInsert(vector<int> &nums, int target)
{
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details

    int l = 0;
    int r = nums.size() - 1;
    while (l <= r)
    {
        int m = l + (r - l) / 2;
        if (nums[m] >= target)
            r = m - 1;
        else
            l = m + 1;
    }
    return l;
}
