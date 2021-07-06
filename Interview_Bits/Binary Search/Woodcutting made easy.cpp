long long int fun(vector<int> &A, long long int mid)
{
    long long int sum1 = 0;
    for (int i = 0; i < A.size(); i++)
    {
        if (A[i] >= mid)
        {
            sum1 += (A[i] - mid);
        }
    }
    return sum1;
}

int Solution::solve(vector<int> &A, int B)
{
    long long int start = 0, end = INT_MIN, mid;
    for (int i = 0; i < A.size(); i++)
    {
        end = max(end, 1ll * A[i]);
    }

    while (start < end)
    {
        mid = (start + end) / 2;
        long long int x = fun(A, mid);
        if (x == B || start == mid)
        {
            return mid;
        }
        else if (x > B)
        {
            start = mid;
        }
        else
        {
            end = mid;
        }
    }
    return mid;
}