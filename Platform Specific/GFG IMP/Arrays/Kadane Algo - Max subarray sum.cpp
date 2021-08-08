class Solution
{
public:
    // arr: input array
    // n: size of array
    //Function to find the sum of contiguous subarray with maximum sum.
    int maxSubarraySum(int arr[], int n)
    {
        int max_so_far = INT_MIN, max_so_end = 0;
        for (int i = 0; i < n; i++)
        {
            max_so_end = max_so_end + arr[i];

            if (max_so_end > max_so_far)
            {
                max_so_far = max_so_end;
            }

            if (max_so_end < 0)
            {
                max_so_end = 0;
            }
        }
        return max_so_far;
    }
};