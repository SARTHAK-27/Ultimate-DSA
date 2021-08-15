static int t[1001][1001];

int knapsack(vector<int> &val, vector<int> &wt, int n, int C)
{
    if (n == 0 || C == 0)
    {
        return 0;
    }
    if (t[n][C] != -1)
    {
        return t[n][C];
    }
    if (wt[n - 1] <= C)
    {
        t[n][C] = max(val[n - 1] + knapsack(val, wt, n - 1, C - wt[n - 1]), knapsack(val, wt, n - 1, C));
        return t[n][C];
    }
    else if (wt[n - 1] > C)
    {
        t[n][C] = knapsack(val, wt, n - 1, C);
        return t[n][C];
    }
}

int Solution::solve(vector<int> &val, vector<int> &w, int C)
{
    memset(t, -1, sizeof(t));
    int n = val.size();
    int ans = knapsack(val, w, n, C);

    return ans;
}
