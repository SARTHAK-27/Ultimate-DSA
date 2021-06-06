
bool ispossible(vector<int> &arr, int n, int B, int mid)
{
    int students = 1;
    int sum = 0;
    for(int i=0; i<n; i++)
    {
        sum += arr[i];
        if(sum > mid)
        {
            students++;
            sum = arr[i];
        }
    }
        if(students > B)
        {
            return false;
        }
    return true;
}

int Solution::books(vector<int> &A, int B) 
{
    int n = A.size();
    if(n < B)
    {
        return -1;
    }
    int max = -1;
    int sum = 0;
    for(int i=0; i<n; i++)
    {
        if(A[i] > max)
        {
            max = A[i];
        }
        sum += A[i];
        
    }
    int start = max;
    int end = sum;
    int res = -1;;
    while(start <= end)
    {
        int mid = start + (end-start)/2;
        if(ispossible(A,n,B,mid) == true)
        {
            res = mid;
            end = mid-1;
        }
        else
        {
            start = mid+1;
        }
    }
    return res;
}
