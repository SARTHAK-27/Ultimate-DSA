int Solution::compareVersion(string version1, string version2)
{
    int v1 = version1.size();
    int v2 = version2.size();
    int i = 0, j = 0;
    while (i < v1 || j < v2)
    {
        string x = "", y = "";
        bool ck1 = 0, ck2 = 0;
        while (i < v1 && version1[i] != '.')
        {
            if (ck1 == 0 && version1[i] == '0')
            {
                i++;
                continue;
            }
            ck1 = 1;
            x += version1[i];
            i++;
        }
        if (i != v1)
        {
            i++;
        }

        while (j < v2 && version2[j] != '.')
        {
            if (ck2 == 0 && version2[j] == '0')
            {
                j++;
                continue;
            }
            ck2 = 1;
            y += version2[j];
            j++;
        }
        if (j != v2)
        {
            j++;
        }

        if (x.empty())
        {
            x += '0';
        }
        if (y.empty())
        {
            y += '0';
        }

        if (x.size() > y.size())
        {
            return 1;
        }
        if (x.size() < y.size())
        {
            return -1;
        }

        if (x > y)
        {
            return 1;
        }
        if (x < y)
        {
            return -1;
        }
    }
    return 0;
}