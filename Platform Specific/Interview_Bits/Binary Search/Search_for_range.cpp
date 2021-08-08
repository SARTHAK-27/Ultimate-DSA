int first_occ(const vector<int> &nums, int target)
{
    int res = -1;
    int n = nums.size();
    int start = 0, end = n - 1;
    while (start <= end)
    {
        int mid = start + (end - start) / 2;
        if (target == nums[mid])
        {
            res = mid;
            end = mid - 1;
        }
        else if (target < nums[mid])
        {
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
    }
    return res;
}

int last_occ(const vector<int> &nums, int target)
{
    int res = -1;
    int n = nums.size();
    int start = 0, end = n - 1;
    while (start <= end)
    {
        int mid = start + (end - start) / 2;
        if (target == nums[mid])
        {
            res = mid;
            start = mid + 1;
        }
        else if (target < nums[mid])
        {
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
            ;
        }
    }
    return res;
}

vector<int> Solution::searchRange(const vector<int> &A, int B)
{
    vector<int> ans;
    int f = first_occ(A, B);
    ans.push_back(f);
    int l = last_occ(A, B);
    ans.push_back(l);

    return ans;
}
