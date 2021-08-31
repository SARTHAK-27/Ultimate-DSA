void DFS(int n, int m, int num, vector<int> &ans)
{
    if (num >= n && num <= m)
    {
        ans.push_back(num);
    }

    if (num == 0 || num > m)
    {
        return;
    }

    int lastdigit = num % 10;
    int num_f = num * 10 + (lastdigit + 1);
    int num_p = num * 10 + (lastdigit - 1);

    if (lastdigit == 0)
    {
        DFS(n, m, num_f, ans);
    }
    else if (lastdigit == 9)
    {
        DFS(n, m, num_p, ans);
    }
    else
    {
        DFS(n, m, num_f, ans);
        DFS(n, m, num_p, ans);
    }
}

vector<int> Solution::stepnum(int A, int B)
{
    vector<int> ans;
    for (int i = 0; i <= 9; i++)
    {
        DFS(A, B, i, ans);
    }
    sort(ans.begin(), ans.end());
    return ans;
}
