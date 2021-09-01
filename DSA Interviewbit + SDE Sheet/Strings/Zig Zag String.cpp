string Solution::convert(string A, int n)
{
    if (n == 1)
    {
        return A;
    }
    string ans = "";
    string arr[n];
    int row = 0;
    bool down;
    int len = A.length();
    for (int i = 0; i < len; i++)
    {
        arr[row].push_back(A[i]);
        if (row == n - 1)
        {
            down = false;
        }
        else if (row == 0)
        {
            down = true;
        }

        (down) ? (row++) : (row--);
    }
    for (int i = 0; i < n; i++)
    {
        ans += arr[i];
    }
    return ans;
}
