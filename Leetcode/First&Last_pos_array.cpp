class Solution {
public:
    
    int first_occ(vector<int>& nums, int target)
    {
        int res=-1;
        int n = nums.size();
        int start = 0, end = n-1;
        while(start <= end)
        {
            int mid = start + (end-start)/2;
            if(target == nums[mid])
            {
                res = mid;
                end = mid-1;
            }
            else if(target < nums[mid])
            {
                end = mid-1;
            }
            else
            {
                start = mid+1;
            }
        }
        return res;
    }
    
    int last_occ(vector<int>& nums, int target)
    {
        int res=-1;
        int n = nums.size();
        int start = 0, end = n-1;
        while(start <= end)
        {
            int mid = start + (end-start)/2;
            if(target == nums[mid])
            {
                res = mid;
                start = mid+1;
            }
            else if(target < nums[mid])
            {
                end = mid-1;
            }
            else
            {
                start = mid+1;
            }
        }
        return res;
    }
    
    vector<int> searchRange(vector<int>& nums, int target) {
        int f = first_occ(nums, target);
        int l = last_occ(nums, target);
        
        return {f,l};
    }
};