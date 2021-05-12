class Solution
{
public:
    int BinarySearch(vector<int> &nums, int target, int start, int end)
    {
        int l = start, r = end;
        while (l <= r)
        {
            int mid = (l + r) / 2;
            if (nums[mid] == target)
            {
                return mid;
            }
            else if (nums[mid] > target)
            {
                r = mid - 1;
            }
            else
            {
                l = mid + 1;
            }
        }
        return -1;
    }

    int findMin(vector<int> &nums)
    {
        int n = nums.size();
        int start = 0, end = n - 1;
        if (nums[start] < nums[end])
        {
            return 0;
        }
        while (start <= end)
        {
            int mid = start + (end - start) / 2;
            int next = (mid + 1) % n;
            int prev = (mid + n - 1) % n;
            if (nums[mid] <= nums[next] && nums[mid] <= nums[prev])
            {
                return mid;
            }
            if (nums[mid] <= nums[end])
            {
                end = mid - 1;
            }
            else if (nums[start] <= nums[mid])
            {
                start = mid + 1;
            }
        }
        return -1;
    }

    int search(vector<int> &nums, int target)
    {
        int n = nums.size();
        int min_index = findMin(nums);
        int a1 = BinarySearch(nums, target, 0, min_index - 1);
        int a2 = BinarySearch(nums, target, min_index, n - 1);
        if (a1 == -1)
            return a2;
        else
            return a1;
    }
};