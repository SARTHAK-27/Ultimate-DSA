bool dfs(vector<vector<int>> &adj, vector<bool> &vis, int start, int end)
{
    vis[start] = true;
    if (start == end)
    {
        return true;
    }
    for (auto it : adj[start])
    {
        if (!vis[it])
        {
            if (dfs(adj, vis, it, end))
            {
                return true;
            }
        }
    }
    return false;
}

int Solution::solve(int A, vector<vector<int>> &B)
{
    vector<vector<int>> adj(A + 1);
    for (auto it : B)
    {
        adj[it[0]].push_back(it[1]);
    }
    vector<bool> vis(A + 1, false);
    return dfs(adj, vis, 1, A);
}