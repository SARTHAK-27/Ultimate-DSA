bool cycle_dfs(int node, int par, vector<vector<int>> adj, vector<bool> &vis)
{
    vis[node] = true;
    for (auto it : adj[node])
    {
        if (!vis[it])
        {
            if (cycle_dfs(it, node, adj, vis))
            {
                return true;
            }
        }
        else if (it != par)
        {
            return true;
        }
    }
    return false;
}

bool cycle_bfs(int s, vector<vector<int>> adj, vector<bool> &vis)
{
    queue<pair<int, int>> q;
    vis[s] = true;
    q.push({s, -1});

    while (!q.empty())
    {
        int node = q.front().first;
        int par = q.front().second;
        q.pop();
        for (auto it : adj[node])
        {
            if (!vis[it])
            {
                vis[it] = true;
                q.push({it, node});
            }
            else if (it != par)
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
        adj[it[1]].push_back(it[0]);
    }
    vector<bool> vis(A + 1, false);
    for (int i = 1; i <= A; i++)
    {
        if (!vis[i])
        {
            // BFS
            if (cycle_bfs(i, adj, vis))
            {
                return true;
            }

            // DFS
            if (cycle_dfs(i, -1, adj, vis))
            {
                return true;
            }
        }
    }
    return false;
    ;
}
