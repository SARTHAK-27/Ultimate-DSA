class Solution
{
public:
    void dfs(int node, int parent, vector<int> &vis, vector<int> &tin, vector<int> &low, int timer, vector<vector<int>> &adj, vector<vector<int>> &ans)
    {
        vis[node] = 1;
        tin[node] = low[node] = timer++;
        for (auto it : adj[node])
        {
            if (it == parent)
            {
                continue;
            }

            if (!vis[it])
            {
                dfs(it, node, vis, tin, low, timer, adj, ans);
                low[node] = min(low[node], low[it]);
                if (low[it] > tin[node])
                {
                    ans.push_back({node, it});
                }
            }
            else
            {
                low[node] = min(low[node], tin[it]);
            }
        }
    }

    vector<vector<int>> criticalConnections(int n, vector<vector<int>> &connections)
    {
        vector<vector<int>> ans;

        vector<vector<int>> adj(n);
        for (auto &v : connections)
        {
            adj[v[0]].push_back(v[1]);
            adj[v[1]].push_back(v[0]);
        }

        int timer = 0;
        vector<int> tin(n, -1);
        vector<int> low(n, -1);
        vector<int> vis(n, 0);
        for (int i = 0; i < n; i++)
        {
            if (vis[i] == 0)
            {
                dfs(i, -1, vis, tin, low, timer, adj, ans);
            }
        }
        return ans;
    }
};