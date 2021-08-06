int Solution::strStr(const string text, const string pat)
{
    int n = text.size();
    int m = pat.size();
    int res = -1;
    bool flag = false;
    for (int i = 0; i < n; i++)
    {
        int j = 0;
        int k = i;
        if (text[k] == pat[j])
        {
            while (text[k] == pat[j] && k < n && j < m)
            {
                j++;
                k++;
                if (j == m)
                {
                    flag = true;
                    res = i;
                    break;
                }
            }
        }
        if (flag)
        {
            break;
        }
    }
    return res;
}
