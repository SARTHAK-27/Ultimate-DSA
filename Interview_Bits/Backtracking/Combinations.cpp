void comb(int n, int t, int start, vector<vector<int>> &ans, vector<int> ds)
{
    if (t == 0)
    {
        ans.push_back(ds);
        return;
    }
    for (int i = start; i <= n; i++)
    {
        ds.push_back(i);
        comb(n, t - 1, i + 1, ans, ds);
        ds.pop_back();
    }
}

vector<vector<int>> Solution::combine(int A, int B)
{
    vector<vector<int>> ans;
    vector<int> temp;
    comb(A, B, 1, ans, temp);
    sort(ans.begin(), ans.end());

    return ans;
}
