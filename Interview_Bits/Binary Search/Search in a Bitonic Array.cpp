int peakelement(vector<int> &arr)
{
    int n = arr.size();
    int start = 0, end = n - 1;
    while (start <= end)
    {
        int mid = start + (end - start) / 2;
        if (arr[mid] > arr[mid - 1] && arr[mid] > arr[mid + 1])
        {
            return mid;
        }
        else if (arr[mid] < arr[mid - 1] && arr[mid] > arr[mid + 1])
        {
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
    }
    return -1;
}

int BS(vector<int> &arr, int B, int start, int end)
{
    while (start <= end)
    {
        int mid = start + (end - start) / 2;
        if (arr[mid] == B)
        {
            return mid;
        }
        else if (arr[mid] > B)
        {
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
    }
    return -1;
}

int BSR(vector<int> &arr, int B, int start, int end)
{
    while (start <= end)
    {
        int mid = start + (end - start) / 2;
        if (arr[mid] == B)
        {
            return mid;
        }
        else if (arr[mid] < B)
        {
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
    }
    return -1;
}

int Solution::solve(vector<int> &A, int B)
{
    int n = A.size();
    int p = peakelement(A);
    int a1 = BS(A, B, 0, p);
    int a2 = BSR(A, B, p + 1, n - 1);
    if (a1 == -1)
    {
        return a2;
    }
    else
    {
        return a1;
    }
}
