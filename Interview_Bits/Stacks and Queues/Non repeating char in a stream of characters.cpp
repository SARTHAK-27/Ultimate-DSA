string Solution::solve(string A)
{
    string ans;
    unordered_map<char, int> mp;
    queue<char> q;
    for (auto c : A)
    {
        mp[c]++;
        q.push(c);
        while (!q.empty() && mp[q.front()] > 1)
        {
            q.pop();
        }
        if (!q.empty())
        {
            ans.push_back(q.front());
        }
        else
        {
            ans.push_back('#');
        }
    }
    return ans;
}
