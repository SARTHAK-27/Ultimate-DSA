string Solution::solve(string A, int B)
{
    string ans = "";
    string t = "";
    int count = 0;
    for (int i = 0; i < A.length(); i++)
    {
        t = t + A[i];
        count++;
        if (A[i] != A[i + 1])
        {
            if (count != B)
            {
                ans = ans + t;
            }
            t = "";
            count = 0;
        }
    }
    return ans + t;
}
