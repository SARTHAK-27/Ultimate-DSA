int bs(vector<int> &nums, int target, int start, int end)
{
    int l=start, r=end;
    while(l<=r)
    {
        int mid = (l+r)/2;
        if(nums[mid] == target)
        {
            return mid;
        }
        else if(nums[mid] > target)
        {
            r = mid-1;
        }
        else
        {
            l = mid+1;
        }
    }
    return -1;
}

int findmin(vector<int> &a)
{
    int n = a.size();
    int start = 0, end = n-1;
    if(a[start] < a[end])
    {
        return 0;
    }
    while(start <= end)
    {
        int mid = start + (end-start)/2;
        int next = (mid+1)%n;
        int prev = (mid+n-1)%n;
        if(a[mid] <= a[next] && a[mid] <= a[prev])
        {
            return mid;
        }
        else if(a[mid] <=a[end])
        {
            end = mid-1;
        }
        else
        {
            start = mid+1;
        }
    }
    return -1;
}

int Solution::search(const vector<int> &A, int B) 
{
    int n = A.size();
    int m = findmin(A);
    int a1 = bs(A, B, 0, m-1);
    int a2 = bs(A, B, m, n-1);
    if(a1 == -1)
    {
        return a2;
    }
    else
    {
        return a1;
    }
}

