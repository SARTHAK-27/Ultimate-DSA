int Solution::solve(string A)
{
    int n = A.size();
    int i = 0;
    int j = n - 1;
    int count = 0;
    while (i <= j)
    {
        if (A[i] == A[j])
        {
            i++;
            j--;
        }
        else if (A[i + 1] == A[j])
        {
            count++;
            i++;
        }
        else if (A[j - 1] == A[i])
        {
            count++;
            j--;
        }
        else
        {
            return 0;
        }
    }
    if (count <= 1)
    {
        return 1;
    }

    return 0;
}
