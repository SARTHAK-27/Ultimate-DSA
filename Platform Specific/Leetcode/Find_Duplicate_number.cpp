class Solution
{
public:
    int findDuplicate(vector<int> &A)
    {
        int slow = A[0];
        int fast = A[A[0]];
        while (slow != fast)
        {
            slow = A[slow];
            fast = A[A[fast]];
        }

        fast = 0;
        while (slow != fast)
        {
            slow = A[slow];
            fast = A[fast];
        }
        return slow;
    }
};

// 2 approach Binary Search

class Solution
{
public:
    int findDuplicate(vector<int> &nums)
    {
        sort(nums.begin(), nums.end());
        int n = nums.size() + 1;
        int lo = 0;
        int hi = n;
        int dup = INT_MAX;

        while (lo <= hi)
        {
            int mid = lo + (hi - lo) / 2;

            if (nums[mid] < mid + 1 && nums[mid - 1] == mid)
            {
                dup = nums[mid];
                break;
            }
            if (nums[mid] < mid + 1 && nums[mid - 1] != mid)
            {
                hi = mid - 1;
            }
            else
            {
                lo = mid + 1;
            }
        }
        return dup;
    }
};