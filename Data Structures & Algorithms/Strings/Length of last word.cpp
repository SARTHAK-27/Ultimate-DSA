int Solution::lengthOfLastWord(const string A)
{
    int len = A.length();
    bool flag = false;
    int ans = 0;
    for (int i = len - 1; i >= 0; i--)
    {
        if (A[i] >= 'a' && A[i] <= 'z' || A[i] >= 'A' && A[i] <= 'Z')
        {
            flag = true;
            ans++;
        }
        else
        {
            if (flag == true)
            {
                return ans;
            }
        }
    }
    return ans;
}
