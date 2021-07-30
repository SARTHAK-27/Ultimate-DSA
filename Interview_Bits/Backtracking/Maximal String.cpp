void findmax(string str, int k, string &max, int ctr)
{
    if(k==0)
    {
        return;
    }
    int n = str.length();
    char maxm = str[ctr];
    for(int i=ctr+1; i<n; i++)
    {
        if(maxm < str[i])
        {
            maxm = str[i];
        }
    }

    if(maxm != str[ctr])
    {
        --k;
    }

    for(int i=ctr; i<n; i++)
    {
        if(str[i] == maxm)
        {
            swap(str[ctr] , str[i]);

            if(str.compare(max) > 0)
            {
                max = str;
            }

            findmax(str, k, max, ctr+1);

            swap(str[ctr] , str[i]);
        }
    }
}

string Solution::solve(string A, int B) 
{
    string max = A;
    findmax(A, B, max, 0);

    return max;
}
