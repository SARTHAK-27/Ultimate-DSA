string Solution::solve(string A)
{
    string ans;
    int i = 0;
    int n = A.length();
    while (i < n)
    {
        while (i < n && A[i] == ' ')
        {
            i++;
        }
        if (i >= n)
        {
            break;
        }
        int j = i + 1;
        while (j < n && A[j] != ' ')
        {
            j++;
        }
        string temp = A.substr(i, j - i);
        if (ans.length() == 0)
        {
            ans = temp;
        }
        else
        {
            ans = temp + " " + ans;
        }
        i = j + 1;
    }
    return ans;
}
