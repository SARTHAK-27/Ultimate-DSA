int Solution::solve(vector<int> &A, int B)
{
    int n = A.size();
    int low = 0;
    int high = n - 1;
    int index = -1;
    while (low <= high)
    {
        int mid = low + (high - low) / 2;
        if (A[mid] <= B)
        {
            index = mid;
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }
    return index + 1;
}
